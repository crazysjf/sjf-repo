#!/usr/bin/env python
import sys
import os

MAX_LONG_LONG = 2 ** 64 - 1
MAX_CPU_NR = 4

class LogFile:
    """Log file for one cpu, such as cpu0, gnerated by klog.
    The format should be time:log"""

    def __init__(self, file_name):
        self.file = open(file_name, 'r')
        self.current_line_no = 0
        self.cursor_to_next()

    def get_current_time(self):
        return self.current_time

    def get_current_line(self):
        return self.current_line

    def cursor_to_next(self):
        self.current_line = self.file.readline().rstrip()
        if (self.current_line):
            self.current_line_no = self.current_line_no + 1
            try:
                self.current_time = long(self.current_line.split(":")[0])
            except ValueError:
                sys.stderr.write("oops: Line %d @ %s has error.\n" % (self.current_line_no, self.file.name))
        else:
            self.current_time = MAX_LONG_LONG
        return self.current_line

log_file_list = []
file_index = range(MAX_CPU_NR)

cpu_nr = 0
file_name = "cpu%d" % cpu_nr
while os.path.exists(file_name):
    log_file_list.append(LogFile(file_name))
    cpu_nr = cpu_nr + 1
    file_name = "cpu%d" % cpu_nr

cpu_index = range(cpu_nr)

time_list = []
for idx in cpu_index:
    time_list.append(log_file_list[idx].get_current_time())

min_time = min(time_list)
while min_time != MAX_LONG_LONG:
    cpu_index = time_list.index(min_time)
    print ("cpu%d: " % cpu_index) + log_file_list[cpu_index].get_current_line()
    log_file_list[cpu_index].cursor_to_next()
    time_list[cpu_index] = log_file_list[cpu_index].get_current_time()
    min_time = min(time_list)

sys.exit()
