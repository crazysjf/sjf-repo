# 1 "mm/page_alloc.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "./include/linux/autoconf.h" 1
# 1 "<command line>" 2
# 1 "mm/page_alloc.c"
# 17 "mm/page_alloc.c"
# 1 "include/linux/stddef.h" 1



# 1 "include/linux/compiler.h" 1
# 40 "include/linux/compiler.h"
# 1 "include/linux/compiler-gcc.h" 1
# 86 "include/linux/compiler-gcc.h"
# 1 "include/linux/compiler-gcc4.h" 1
# 86 "include/linux/compiler-gcc.h" 2
# 41 "include/linux/compiler.h" 2
# 58 "include/linux/compiler.h"
struct ftrace_branch_data {
 const char *func;
 const char *file;
 unsigned line;
 union {
  struct {
   unsigned long correct;
   unsigned long incorrect;
  };
  struct {
   unsigned long miss;
   unsigned long hit;
  };
  unsigned long miss_hit[2];
 };
};
# 5 "include/linux/stddef.h" 2
# 15 "include/linux/stddef.h"
enum {
 false = 0,
 true = 1
};
# 18 "mm/page_alloc.c" 2
# 1 "include/linux/mm.h" 1



# 1 "include/linux/errno.h" 1



# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/errno.h" 1



# 1 "include/asm-generic/errno.h" 1



# 1 "include/asm-generic/errno-base.h" 1
# 5 "include/asm-generic/errno.h" 2
# 5 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/errno.h" 2
# 5 "include/linux/errno.h" 2
# 5 "include/linux/mm.h" 2



# 1 "include/linux/gfp.h" 1



# 1 "include/linux/mmzone.h" 1






# 1 "include/linux/spinlock.h" 1
# 85 "include/linux/spinlock.h"
# 1 "include/linux/typecheck.h" 1
# 86 "include/linux/spinlock.h" 2
# 1 "include/linux/preempt.h" 1
# 9 "include/linux/preempt.h"
# 1 "include/linux/thread_info.h" 1
# 10 "include/linux/thread_info.h"
# 1 "include/linux/types.h" 1



# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/types.h" 1



# 1 "include/asm-generic/int-ll64.h" 1
# 17 "include/asm-generic/int-ll64.h"
typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 40 "include/asm-generic/int-ll64.h"
typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
typedef unsigned long long u64;
# 5 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/types.h" 2



typedef unsigned short umode_t;
# 23 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/types.h"
typedef u32 dma_addr_t;
typedef u32 dma64_addr_t;
# 5 "include/linux/types.h" 2
# 14 "include/linux/types.h"
# 1 "include/linux/posix_types.h" 1
# 36 "include/linux/posix_types.h"
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/posix_types.h" 1
# 22 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/posix_types.h"
typedef unsigned long __kernel_ino_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned short __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;


typedef long long __kernel_loff_t;


typedef struct {
 int val[2];
} __kernel_fsid_t;
# 48 "include/linux/posix_types.h" 2
# 15 "include/linux/types.h" 2



typedef __u32 __kernel_dev_t;

typedef __kernel_fd_set fd_set;
typedef __kernel_dev_t dev_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_mode_t mode_t;
typedef __kernel_nlink_t nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_daddr_t daddr_t;
typedef __kernel_key_t key_t;
typedef __kernel_suseconds_t suseconds_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_mqd_t mqd_t;

typedef _Bool bool;

typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;

typedef unsigned long uintptr_t;



typedef __kernel_old_uid_t old_uid_t;
typedef __kernel_old_gid_t old_gid_t;



typedef __kernel_loff_t loff_t;
# 59 "include/linux/types.h"
typedef __kernel_size_t size_t;




typedef __kernel_ssize_t ssize_t;




typedef __kernel_ptrdiff_t ptrdiff_t;




typedef __kernel_time_t time_t;




typedef __kernel_clock_t clock_t;




typedef __kernel_caddr_t caddr_t;



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;




typedef __u8 u_int8_t;
typedef __s8 int8_t;
typedef __u16 u_int16_t;
typedef __s16 int16_t;
typedef __u32 u_int32_t;
typedef __s32 int32_t;



typedef __u8 uint8_t;
typedef __u16 uint16_t;
typedef __u32 uint32_t;


typedef __u64 uint64_t;
typedef __u64 u_int64_t;
typedef __s64 int64_t;
# 138 "include/linux/types.h"
typedef unsigned long sector_t;
typedef unsigned long blkcnt_t;
# 168 "include/linux/types.h"
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;


typedef unsigned gfp_t;
typedef unsigned fmode_t;




typedef u32 phys_addr_t;


typedef phys_addr_t resource_size_t;

typedef struct {
 volatile int counter;
} atomic_t;







struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
# 11 "include/linux/thread_info.h" 2

struct timespec;
struct compat_timespec;




struct restart_block {
 long (*fn)(struct restart_block *);
 union {
  struct {
   unsigned long arg0, arg1, arg2, arg3;
  };

  struct {
   u32 *uaddr;
   u32 val;
   u32 flags;
   u32 bitset;
   u64 time;
   u32 *uaddr2;
  } futex;

  struct {
   clockid_t index;
   struct timespec *rmtp;



   u64 expires;
  } nanosleep;

  struct {
   struct pollfd *ufds;
   int nfds;
   int has_timeout;
   unsigned long tv_sec;
   unsigned long tv_nsec;
  } poll;
 };
};

extern long do_no_restart_syscall(struct restart_block *parm);

# 1 "include/linux/bitops.h" 1
# 17 "include/linux/bitops.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bitops.h" 1
# 27 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bitops.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/system.h" 1
# 60 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/system.h"
# 1 "include/linux/linkage.h" 1




# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/linkage.h" 1
# 6 "include/linux/linkage.h" 2
# 61 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/system.h" 2
# 1 "include/linux/irqflags.h" 1
# 36 "include/linux/irqflags.h"
extern void trace_preempt_enter_idle(void);
extern void trace_preempt_exit_idle(void);





extern void trace_hardirqs_on(void);
extern void trace_hardirqs_off(void);
# 74 "include/linux/irqflags.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/irqflags.h" 1





# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/ptrace.h" 1
# 13 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/ptrace.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/hwcap.h" 1
# 27 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/hwcap.h"
extern unsigned int elf_hwcap;
# 14 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/ptrace.h" 2
# 92 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/ptrace.h"
struct pt_regs {
 long uregs[18];
};
# 143 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/ptrace.h"
static inline __attribute__((always_inline)) int valid_user_regs(struct pt_regs *regs)
{
 if ((((regs)->uregs[16] & 0xf) == 0) && (regs->uregs[16] & 0x00000080) == 0) {
  regs->uregs[16] &= ~(0x00000040 | 0x00000100);
  return 1;
 }




 regs->uregs[16] &= 0xff000000 | 0x00ff0000 | (0x0000ff00 & ~0x00000100) | 0x00000020 | 0x00000010;
 if (!(elf_hwcap & 8))
  regs->uregs[16] |= 0x00000010;

 return 0;
}
# 7 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/irqflags.h" 2
# 75 "include/linux/irqflags.h" 2
# 62 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/system.h" 2

# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/memory.h" 1
# 17 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/memory.h"
# 1 "include/linux/const.h" 1
# 18 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/memory.h" 2
# 1 "arch/arm/plat-mxc/include/mach/memory.h" 1
# 19 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/memory.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/sizes.h" 1
# 20 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/memory.h" 2
# 158 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/memory.h"
static inline __attribute__((always_inline)) unsigned long virt_to_phys(void *x)
{
 return (((unsigned long)(x)) - (0xC0000000UL) + (0x80000000UL));
}

static inline __attribute__((always_inline)) void *phys_to_virt(unsigned long x)
{
 return (void *)((((unsigned long)(x)) - (0x80000000UL) + (0xC0000000UL)));
}
# 186 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/memory.h"
static inline __attribute__((always_inline)) __attribute__((deprecated)) unsigned long virt_to_bus(void *x)
{
 return (((unsigned long)x) - (0xC0000000UL) + (0x80000000UL));
}

static inline __attribute__((always_inline)) __attribute__((deprecated)) void *bus_to_virt(unsigned long x)
{
 return (void *)((x) - (0x80000000UL) + (0xC0000000UL));
}
# 313 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/memory.h"
# 1 "include/asm-generic/memory_model.h" 1
# 314 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/memory.h" 2
# 64 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/system.h" 2



struct thread_info;
struct task_struct;


extern unsigned int system_rev;
extern unsigned int system_serial_low;
extern unsigned int system_serial_high;
extern unsigned int mem_fclk_21285;

struct pt_regs;

void die(const char *msg, struct pt_regs *regs, int err)
  __attribute__((noreturn));

struct siginfo;
void arm_notify_die(const char *str, struct pt_regs *regs, struct siginfo *info,
  unsigned long err, unsigned long trap);

void hook_fault_code(int nr, int (*fn)(unsigned long, unsigned int,
           struct pt_regs *),
       int sig, const char *name);




extern void __backtrace(void);
extern void c_backtrace(unsigned long fp, int pmode);

struct mm_struct;
extern void show_pte(struct mm_struct *mm, unsigned long addr);
extern void __show_regs(struct pt_regs *);

extern int cpu_architecture(void);
extern void cpu_init(void);

void arm_machine_restart(char mode);
extern void (*arm_pm_restart)(char str);







extern unsigned int user_debug;
# 158 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/system.h"
extern unsigned long cr_no_alignment;
extern unsigned long cr_alignment;

static inline __attribute__((always_inline)) unsigned int get_cr(void)
{
 unsigned int val;
 asm("mrc p15, 0, %0, c1, c0, 0	@ get CR" : "=r" (val) : : "cc");
 return val;
}

static inline __attribute__((always_inline)) void set_cr(unsigned int val)
{
 asm volatile("mcr p15, 0, %0, c1, c0, 0	@ set CR"
   : : "r" (val) : "cc");
 __asm__ __volatile__ ("mcr p15, 0, %0, c7, c5, 4" : : "r" (0) : "memory");
}


extern void adjust_cr(unsigned long mask, unsigned long set);






static inline __attribute__((always_inline)) unsigned int get_copro_access(void)
{
 unsigned int val;
 asm("mrc p15, 0, %0, c1, c0, 2 @ get copro access"
   : "=r" (val) : : "cc");
 return val;
}

static inline __attribute__((always_inline)) void set_copro_access(unsigned int val)
{
 asm volatile("mcr p15, 0, %0, c1, c0, 2 @ set copro access"
   : : "r" (val) : "cc");
 __asm__ __volatile__ ("mcr p15, 0, %0, c7, c5, 4" : : "r" (0) : "memory");
}
# 210 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/system.h"
extern struct task_struct *__switch_to(struct task_struct *, struct thread_info *, struct thread_info *);
# 236 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/system.h"
static inline __attribute__((always_inline)) unsigned long __xchg(unsigned long x, volatile void *ptr, int size)
{
 extern void __bad_xchg(volatile void *, int);
 unsigned long ret;




 unsigned int tmp;


 switch (size) {

 case 1:
  asm volatile("@	__xchg1\n"
  "1:	ldrexb	%0, [%3]\n"
  "	strexb	%1, %2, [%3]\n"
  "	teq	%1, #0\n"
  "	bne	1b"
   : "=&r" (ret), "=&r" (tmp)
   : "r" (x), "r" (ptr)
   : "memory", "cc");
  break;
 case 4:
  asm volatile("@	__xchg4\n"
  "1:	ldrex	%0, [%3]\n"
  "	strex	%1, %2, [%3]\n"
  "	teq	%1, #0\n"
  "	bne	1b"
   : "=&r" (ret), "=&r" (tmp)
   : "r" (x), "r" (ptr)
   : "memory", "cc");
  break;
# 302 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/system.h"
 default:
  __bad_xchg(ptr, size), ret = 0;
  break;
 }

 return ret;
}

extern void disable_hlt(void);
extern void enable_hlt(void);

# 1 "include/asm-generic/cmpxchg-local.h" 1





extern unsigned long wrong_size_cmpxchg(volatile void *ptr);





static inline __attribute__((always_inline)) unsigned long __cmpxchg_local_generic(volatile void *ptr,
  unsigned long old, unsigned long new, int size)
{
 unsigned long flags, prev;




 if (size == 8 && sizeof(unsigned long) != 8)
  wrong_size_cmpxchg(ptr);

 ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); });
 switch (size) {
 case 1: prev = *(u8 *)ptr;
  if (prev == old)
   *(u8 *)ptr = (u8)new;
  break;
 case 2: prev = *(u16 *)ptr;
  if (prev == old)
   *(u16 *)ptr = (u16)new;
  break;
 case 4: prev = *(u32 *)ptr;
  if (prev == old)
   *(u32 *)ptr = (u32)new;
  break;
 case 8: prev = *(u64 *)ptr;
  if (prev == old)
   *(u64 *)ptr = (u64)new;
  break;
 default:
  wrong_size_cmpxchg(ptr);
 }
 __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc");
 return prev;
}




static inline __attribute__((always_inline)) u64 __cmpxchg64_local_generic(volatile void *ptr,
  u64 old, u64 new)
{
 u64 prev;
 unsigned long flags;

 ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); });
 prev = *(u64 *)ptr;
 if (prev == old)
  *(u64 *)ptr = new;
 __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc");
 return prev;
}
# 314 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/system.h" 2
# 325 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/system.h"
# 1 "include/asm-generic/cmpxchg.h" 1
# 326 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/system.h" 2
# 28 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bitops.h" 2
# 38 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bitops.h"
static inline __attribute__((always_inline)) void ____atomic_set_bit(unsigned int bit, volatile unsigned long *p)
{
 unsigned long flags;
 unsigned long mask = 1UL << (bit & 31);

 p += bit >> 5;

 ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); });
 *p |= mask;
 __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc");
}

static inline __attribute__((always_inline)) void ____atomic_clear_bit(unsigned int bit, volatile unsigned long *p)
{
 unsigned long flags;
 unsigned long mask = 1UL << (bit & 31);

 p += bit >> 5;

 ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); });
 *p &= ~mask;
 __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc");
}

static inline __attribute__((always_inline)) void ____atomic_change_bit(unsigned int bit, volatile unsigned long *p)
{
 unsigned long flags;
 unsigned long mask = 1UL << (bit & 31);

 p += bit >> 5;

 ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); });
 *p ^= mask;
 __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc");
}

static inline __attribute__((always_inline)) int
____atomic_test_and_set_bit(unsigned int bit, volatile unsigned long *p)
{
 unsigned long flags;
 unsigned int res;
 unsigned long mask = 1UL << (bit & 31);

 p += bit >> 5;

 ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); });
 res = *p;
 *p = res | mask;
 __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc");

 return res & mask;
}

static inline __attribute__((always_inline)) int
____atomic_test_and_clear_bit(unsigned int bit, volatile unsigned long *p)
{
 unsigned long flags;
 unsigned int res;
 unsigned long mask = 1UL << (bit & 31);

 p += bit >> 5;

 ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); });
 res = *p;
 *p = res & ~mask;
 __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc");

 return res & mask;
}

static inline __attribute__((always_inline)) int
____atomic_test_and_change_bit(unsigned int bit, volatile unsigned long *p)
{
 unsigned long flags;
 unsigned int res;
 unsigned long mask = 1UL << (bit & 31);

 p += bit >> 5;

 ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); });
 res = *p;
 *p = res ^ mask;
 __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc");

 return res & mask;
}

# 1 "include/asm-generic/bitops/non-atomic.h" 1
# 15 "include/asm-generic/bitops/non-atomic.h"
static inline __attribute__((always_inline)) void __set_bit(int nr, volatile unsigned long *addr)
{
 unsigned long mask = (1UL << ((nr) % 32));
 unsigned long *p = ((unsigned long *)addr) + ((nr) / 32);

 *p |= mask;
}

static inline __attribute__((always_inline)) void __clear_bit(int nr, volatile unsigned long *addr)
{
 unsigned long mask = (1UL << ((nr) % 32));
 unsigned long *p = ((unsigned long *)addr) + ((nr) / 32);

 *p &= ~mask;
}
# 40 "include/asm-generic/bitops/non-atomic.h"
static inline __attribute__((always_inline)) void __change_bit(int nr, volatile unsigned long *addr)
{
 unsigned long mask = (1UL << ((nr) % 32));
 unsigned long *p = ((unsigned long *)addr) + ((nr) / 32);

 *p ^= mask;
}
# 57 "include/asm-generic/bitops/non-atomic.h"
static inline __attribute__((always_inline)) int __test_and_set_bit(int nr, volatile unsigned long *addr)
{
 unsigned long mask = (1UL << ((nr) % 32));
 unsigned long *p = ((unsigned long *)addr) + ((nr) / 32);
 unsigned long old = *p;

 *p = old | mask;
 return (old & mask) != 0;
}
# 76 "include/asm-generic/bitops/non-atomic.h"
static inline __attribute__((always_inline)) int __test_and_clear_bit(int nr, volatile unsigned long *addr)
{
 unsigned long mask = (1UL << ((nr) % 32));
 unsigned long *p = ((unsigned long *)addr) + ((nr) / 32);
 unsigned long old = *p;

 *p = old & ~mask;
 return (old & mask) != 0;
}


static inline __attribute__((always_inline)) int __test_and_change_bit(int nr,
         volatile unsigned long *addr)
{
 unsigned long mask = (1UL << ((nr) % 32));
 unsigned long *p = ((unsigned long *)addr) + ((nr) / 32);
 unsigned long old = *p;

 *p = old ^ mask;
 return (old & mask) != 0;
}






static inline __attribute__((always_inline)) int test_bit(int nr, const volatile unsigned long *addr)
{
 return 1UL & (addr[((nr) / 32)] >> (nr & (32 -1)));
}
# 126 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bitops.h" 2
# 155 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bitops.h"
extern void _set_bit_le(int nr, volatile unsigned long * p);
extern void _clear_bit_le(int nr, volatile unsigned long * p);
extern void _change_bit_le(int nr, volatile unsigned long * p);
extern int _test_and_set_bit_le(int nr, volatile unsigned long * p);
extern int _test_and_clear_bit_le(int nr, volatile unsigned long * p);
extern int _test_and_change_bit_le(int nr, volatile unsigned long * p);
extern int _find_first_zero_bit_le(const void * p, unsigned size);
extern int _find_next_zero_bit_le(const void * p, int size, int offset);
extern int _find_first_bit_le(const unsigned long *p, unsigned size);
extern int _find_next_bit_le(const unsigned long *p, int size, int offset);




extern void _set_bit_be(int nr, volatile unsigned long * p);
extern void _clear_bit_be(int nr, volatile unsigned long * p);
extern void _change_bit_be(int nr, volatile unsigned long * p);
extern int _test_and_set_bit_be(int nr, volatile unsigned long * p);
extern int _test_and_clear_bit_be(int nr, volatile unsigned long * p);
extern int _test_and_change_bit_be(int nr, volatile unsigned long * p);
extern int _find_first_zero_bit_be(const void * p, unsigned size);
extern int _find_next_zero_bit_be(const void * p, int size, int offset);
extern int _find_first_bit_be(const unsigned long *p, unsigned size);
extern int _find_next_bit_be(const unsigned long *p, int size, int offset);
# 248 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bitops.h"
static inline __attribute__((always_inline)) int constant_fls(int x)
{
 int r = 32;

 if (!x)
  return 0;
 if (!(x & 0xffff0000u)) {
  x <<= 16;
  r -= 16;
 }
 if (!(x & 0xff000000u)) {
  x <<= 8;
  r -= 8;
 }
 if (!(x & 0xf0000000u)) {
  x <<= 4;
  r -= 4;
 }
 if (!(x & 0xc0000000u)) {
  x <<= 2;
  r -= 2;
 }
 if (!(x & 0x80000000u)) {
  x <<= 1;
  r -= 1;
 }
 return r;
}






static inline __attribute__((always_inline)) int fls(int x)
{
 int ret;

 if (__builtin_constant_p(x))
        return constant_fls(x);

 asm("clz\t%0, %1" : "=r" (ret) : "r" (x) : "cc");
        ret = 32 - ret;
 return ret;
}
# 301 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bitops.h"
# 1 "include/asm-generic/bitops/fls64.h" 1
# 18 "include/asm-generic/bitops/fls64.h"
static inline __attribute__((always_inline)) __attribute__((always_inline)) int fls64(__u64 x)
{
 __u32 h = x >> 32;
 if (h)
  return fls(h) + 32;
 return fls(x);
}
# 302 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bitops.h" 2

# 1 "include/asm-generic/bitops/sched.h" 1
# 12 "include/asm-generic/bitops/sched.h"
static inline __attribute__((always_inline)) int sched_find_first_bit(const unsigned long *b)
{





 if (b[0])
  return (({ unsigned long __t = (b[0]); fls(__t & -__t); }) - 1);
 if (b[1])
  return (({ unsigned long __t = (b[1]); fls(__t & -__t); }) - 1) + 32;
 if (b[2])
  return (({ unsigned long __t = (b[2]); fls(__t & -__t); }) - 1) + 64;
 return (({ unsigned long __t = (b[3]); fls(__t & -__t); }) - 1) + 96;



}
# 304 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bitops.h" 2
# 1 "include/asm-generic/bitops/hweight.h" 1





extern unsigned int hweight32(unsigned int w);
extern unsigned int hweight16(unsigned int w);
extern unsigned int hweight8(unsigned int w);
extern unsigned long hweight64(__u64 w);
# 305 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bitops.h" 2
# 1 "include/asm-generic/bitops/lock.h" 1
# 306 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bitops.h" 2
# 18 "include/linux/bitops.h" 2







static __inline__ __attribute__((always_inline)) int get_bitmask_order(unsigned int count)
{
 int order;

 order = fls(count);
 return order;
}

static __inline__ __attribute__((always_inline)) int get_count_order(unsigned int count)
{
 int order;

 order = fls(count) - 1;
 if (count & (count - 1))
  order++;
 return order;
}

static inline __attribute__((always_inline)) unsigned long hweight_long(unsigned long w)
{
 return sizeof(w) == 4 ? hweight32(w) : hweight64(w);
}






static inline __attribute__((always_inline)) __u32 rol32(__u32 word, unsigned int shift)
{
 return (word << shift) | (word >> (32 - shift));
}






static inline __attribute__((always_inline)) __u32 ror32(__u32 word, unsigned int shift)
{
 return (word >> shift) | (word << (32 - shift));
}






static inline __attribute__((always_inline)) __u16 rol16(__u16 word, unsigned int shift)
{
 return (word << shift) | (word >> (16 - shift));
}






static inline __attribute__((always_inline)) __u16 ror16(__u16 word, unsigned int shift)
{
 return (word >> shift) | (word << (16 - shift));
}






static inline __attribute__((always_inline)) __u8 rol8(__u8 word, unsigned int shift)
{
 return (word << shift) | (word >> (8 - shift));
}






static inline __attribute__((always_inline)) __u8 ror8(__u8 word, unsigned int shift)
{
 return (word >> shift) | (word << (8 - shift));
}

static inline __attribute__((always_inline)) unsigned fls_long(unsigned long l)
{
 if (sizeof(l) == 4)
  return fls(l);
 return fls64(l);
}
# 147 "include/linux/bitops.h"
extern unsigned long find_last_bit(const unsigned long *addr,
       unsigned long size);
# 56 "include/linux/thread_info.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/thread_info.h" 1
# 16 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/thread_info.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/fpstate.h" 1
# 26 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/fpstate.h"
struct vfp_hard_struct {



 __u64 fpregs[16];




 __u32 fpexc;
 __u32 fpscr;



 __u32 fpinst;
 __u32 fpinst2;




};

union vfp_state {
 struct vfp_hard_struct hard;
};

extern void vfp_flush_thread(union vfp_state *);
extern void vfp_release_thread(union vfp_state *);



struct fp_hard_struct {
 unsigned int save[35];
};



struct fp_soft_struct {
 unsigned int save[35];
};



struct iwmmxt_struct {
 unsigned int save[0x98 / sizeof(unsigned int)];
};

union fp_state {
 struct fp_hard_struct hard;
 struct fp_soft_struct soft;



};



struct crunch_state {
 unsigned int mvdx[16][2];
 unsigned int mvax[4][3];
 unsigned int dspsc[2];
};
# 17 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/thread_info.h" 2







struct task_struct;
struct exec_domain;


# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/domain.h" 1
# 29 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/thread_info.h" 2

typedef unsigned long mm_segment_t;

struct cpu_context_save {
 __u32 r4;
 __u32 r5;
 __u32 r6;
 __u32 r7;
 __u32 r8;
 __u32 r9;
 __u32 sl;
 __u32 fp;
 __u32 sp;
 __u32 pc;
 __u32 extra[2];
};





struct thread_info {
 unsigned long flags;
 int preempt_count;
 mm_segment_t addr_limit;
 struct task_struct *task;
 struct exec_domain *exec_domain;
 __u32 cpu;
 __u32 cpu_domain;
 struct cpu_context_save cpu_context;
 __u32 syscall;
 __u8 used_cp[16];
 unsigned long tp_value;
 struct crunch_state crunchstate;
 union fp_state fpstate __attribute__((aligned(8)));
 union vfp_state vfpstate;



 struct restart_block restart_block;
 __u32 jabort_addr;
};
# 93 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/thread_info.h"
static inline __attribute__((always_inline)) struct thread_info *current_thread_info(void) __attribute__((__const__));

static inline __attribute__((always_inline)) struct thread_info *current_thread_info(void)
{
 register unsigned long sp asm ("sp");
 return (struct thread_info *)(sp & ~(8192 - 1));
}
# 108 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/thread_info.h"
extern void crunch_task_disable(struct thread_info *);
extern void crunch_task_copy(struct thread_info *, void *);
extern void crunch_task_restore(struct thread_info *, void *);
extern void crunch_task_release(struct thread_info *);

extern void iwmmxt_task_disable(struct thread_info *);
extern void iwmmxt_task_copy(struct thread_info *, void *);
extern void iwmmxt_task_restore(struct thread_info *, void *);
extern void iwmmxt_task_release(struct thread_info *);
extern void iwmmxt_task_switch(struct thread_info *);

extern void vfp_sync_state(struct thread_info *thread);
# 57 "include/linux/thread_info.h" 2
# 65 "include/linux/thread_info.h"
static inline __attribute__((always_inline)) void set_ti_thread_flag(struct thread_info *ti, int flag)
{
 (__builtin_constant_p(flag) ? ____atomic_set_bit(flag, (unsigned long *)&ti->flags) : _set_bit_le(flag,(unsigned long *)&ti->flags));
}

static inline __attribute__((always_inline)) void clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 (__builtin_constant_p(flag) ? ____atomic_clear_bit(flag, (unsigned long *)&ti->flags) : _clear_bit_le(flag,(unsigned long *)&ti->flags));
}

static inline __attribute__((always_inline)) int test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
{
 return (__builtin_constant_p(flag) ? ____atomic_test_and_set_bit(flag, (unsigned long *)&ti->flags) : _test_and_set_bit_le(flag,(unsigned long *)&ti->flags));
}

static inline __attribute__((always_inline)) int test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 return (__builtin_constant_p(flag) ? ____atomic_test_and_clear_bit(flag, (unsigned long *)&ti->flags) : _test_and_clear_bit_le(flag,(unsigned long *)&ti->flags));
}

static inline __attribute__((always_inline)) int test_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_bit(flag, (unsigned long *)&ti->flags);
}
# 10 "include/linux/preempt.h" 2

# 1 "include/linux/list.h" 1




# 1 "include/linux/poison.h" 1
# 6 "include/linux/list.h" 2
# 1 "include/linux/prefetch.h" 1
# 14 "include/linux/prefetch.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/processor.h" 1
# 31 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/processor.h"
union debug_insn {
 u32 arm;
 u16 thumb;
};

struct debug_entry {
 u32 address;
 union debug_insn insn;
};

struct debug_info {
 int nsaved;
 struct debug_entry bp[2];
};

struct thread_struct {

 unsigned long address;
 unsigned long trap_no;
 unsigned long error_code;

 struct debug_info debug;
};
# 84 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/processor.h"
struct task_struct;


extern void release_thread(struct task_struct *);




unsigned long get_wchan(struct task_struct *p);






extern int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);
# 113 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/processor.h"
static inline __attribute__((always_inline)) void prefetch(const void *ptr)
{
 __asm__ __volatile__(
  "pld\t%a0"
  :
  : "p" (ptr)
  : "cc");
}
# 15 "include/linux/prefetch.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cache.h" 1
# 16 "include/linux/prefetch.h" 2
# 53 "include/linux/prefetch.h"
static inline __attribute__((always_inline)) void prefetch_range(void *addr, size_t len)
{

 char *cp;
 char *end = addr + len;

 for (cp = addr; cp < end; cp += (4*(1 << 5)))
  prefetch(cp);

}
# 7 "include/linux/list.h" 2
# 19 "include/linux/list.h"
struct list_head {
 struct list_head *next, *prev;
};






static inline __attribute__((always_inline)) void INIT_LIST_HEAD(struct list_head *list)
{
 list->next = list;
 list->prev = list;
}
# 41 "include/linux/list.h"
static inline __attribute__((always_inline)) void __list_add(struct list_head *new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = new;
 new->next = next;
 new->prev = prev;
 prev->next = new;
}
# 64 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_add(struct list_head *new, struct list_head *head)
{
 __list_add(new, head, head->next);
}
# 78 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_add_tail(struct list_head *new, struct list_head *head)
{
 __list_add(new, head->prev, head);
}
# 90 "include/linux/list.h"
static inline __attribute__((always_inline)) void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}
# 103 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = ((void *) 0x00100100 + 0);
 entry->prev = ((void *) 0x00200200 + 0);
}
# 120 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_replace(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->next->prev = new;
 new->prev = old->prev;
 new->prev->next = new;
}

static inline __attribute__((always_inline)) void list_replace_init(struct list_head *old,
     struct list_head *new)
{
 list_replace(old, new);
 INIT_LIST_HEAD(old);
}





static inline __attribute__((always_inline)) void list_del_init(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 INIT_LIST_HEAD(entry);
}






static inline __attribute__((always_inline)) void list_move(struct list_head *list, struct list_head *head)
{
 __list_del(list->prev, list->next);
 list_add(list, head);
}






static inline __attribute__((always_inline)) void list_move_tail(struct list_head *list,
      struct list_head *head)
{
 __list_del(list->prev, list->next);
 list_add_tail(list, head);
}






static inline __attribute__((always_inline)) int list_is_last(const struct list_head *list,
    const struct list_head *head)
{
 return list->next == head;
}





static inline __attribute__((always_inline)) int list_empty(const struct list_head *head)
{
 return head->next == head;
}
# 202 "include/linux/list.h"
static inline __attribute__((always_inline)) int list_empty_careful(const struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}





static inline __attribute__((always_inline)) int list_is_singular(const struct list_head *head)
{
 return !list_empty(head) && (head->next == head->prev);
}

static inline __attribute__((always_inline)) void __list_cut_position(struct list_head *list,
  struct list_head *head, struct list_head *entry)
{
 struct list_head *new_first = entry->next;
 list->next = head->next;
 list->next->prev = list;
 list->prev = entry;
 entry->next = list;
 head->next = new_first;
 new_first->prev = head;
}
# 243 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_cut_position(struct list_head *list,
  struct list_head *head, struct list_head *entry)
{
 if (list_empty(head))
  return;
 if (list_is_singular(head) &&
  (head->next != entry && head != entry))
  return;
 if (entry == head)
  INIT_LIST_HEAD(list);
 else
  __list_cut_position(list, head, entry);
}

static inline __attribute__((always_inline)) void __list_splice(const struct list_head *list,
     struct list_head *prev,
     struct list_head *next)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;

 first->prev = prev;
 prev->next = first;

 last->next = next;
 next->prev = last;
}






static inline __attribute__((always_inline)) void list_splice(const struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head, head->next);
}






static inline __attribute__((always_inline)) void list_splice_tail(struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head->prev, head);
}
# 302 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head, head->next);
  INIT_LIST_HEAD(list);
 }
}
# 319 "include/linux/list.h"
static inline __attribute__((always_inline)) void list_splice_tail_init(struct list_head *list,
      struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head->prev, head);
  INIT_LIST_HEAD(list);
 }
}
# 543 "include/linux/list.h"
struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};




static inline __attribute__((always_inline)) void INIT_HLIST_NODE(struct hlist_node *h)
{
 h->next = ((void *)0);
 h->pprev = ((void *)0);
}

static inline __attribute__((always_inline)) int hlist_unhashed(const struct hlist_node *h)
{
 return !h->pprev;
}

static inline __attribute__((always_inline)) int hlist_empty(const struct hlist_head *h)
{
 return !h->first;
}

static inline __attribute__((always_inline)) void __hlist_del(struct hlist_node *n)
{
 struct hlist_node *next = n->next;
 struct hlist_node **pprev = n->pprev;
 *pprev = next;
 if (next)
  next->pprev = pprev;
}

static inline __attribute__((always_inline)) void hlist_del(struct hlist_node *n)
{
 __hlist_del(n);
 n->next = ((void *) 0x00100100 + 0);
 n->pprev = ((void *) 0x00200200 + 0);
}

static inline __attribute__((always_inline)) void hlist_del_init(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  INIT_HLIST_NODE(n);
 }
}

static inline __attribute__((always_inline)) void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 if (first)
  first->pprev = &n->next;
 h->first = n;
 n->pprev = &h->first;
}


static inline __attribute__((always_inline)) void hlist_add_before(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 next->pprev = &n->next;
 *(n->pprev) = n;
}

static inline __attribute__((always_inline)) void hlist_add_after(struct hlist_node *n,
     struct hlist_node *next)
{
 next->next = n->next;
 n->next = next;
 next->pprev = &n->next;

 if(next->next)
  next->next->pprev = &next->next;
}





static inline __attribute__((always_inline)) void hlist_move_list(struct hlist_head *old,
       struct hlist_head *new)
{
 new->first = old->first;
 if (new->first)
  new->first->pprev = &new->first;
 old->first = ((void *)0);
}
# 12 "include/linux/preempt.h" 2






  extern void __attribute__((no_instrument_function)) add_preempt_count(unsigned int val);
  extern void __attribute__((no_instrument_function)) sub_preempt_count(unsigned int val);
# 32 "include/linux/preempt.h"
 void preempt_schedule(void);
 void preempt_schedule_irq(void);
# 87 "include/linux/spinlock.h" 2



# 1 "include/linux/kernel.h" 1
# 10 "include/linux/kernel.h"
# 1 "/usr/local/arm-sony-linux-gnueabi/devel/lib/gcc/arm-sony-linux-gnueabi/4.1.2/include/stdarg.h" 1 3 4
# 43 "/usr/local/arm-sony-linux-gnueabi/devel/lib/gcc/arm-sony-linux-gnueabi/4.1.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 105 "/usr/local/arm-sony-linux-gnueabi/devel/lib/gcc/arm-sony-linux-gnueabi/4.1.2/include/stdarg.h" 3 4
typedef __gnuc_va_list va_list;
# 11 "include/linux/kernel.h" 2





# 1 "include/linux/log2.h" 1
# 21 "include/linux/log2.h"
extern __attribute__((const, noreturn))
int ____ilog2_NaN(void);
# 31 "include/linux/log2.h"
static inline __attribute__((always_inline)) __attribute__((const))
int __ilog2_u32(u32 n)
{
 return fls(n) - 1;
}



static inline __attribute__((always_inline)) __attribute__((const))
int __ilog2_u64(u64 n)
{
 return fls64(n) - 1;
}







static inline __attribute__((always_inline)) __attribute__((const))
bool is_power_of_2(unsigned long n)
{
 return (n != 0 && ((n & (n - 1)) == 0));
}




static inline __attribute__((always_inline)) __attribute__((const))
unsigned long __roundup_pow_of_two(unsigned long n)
{
 return 1UL << fls_long(n - 1);
}




static inline __attribute__((always_inline)) __attribute__((const))
unsigned long __rounddown_pow_of_two(unsigned long n)
{
 return 1UL << (fls_long(n) - 1);
}
# 17 "include/linux/kernel.h" 2

# 1 "include/linux/ratelimit.h" 1


# 1 "include/linux/param.h" 1



# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/param.h" 1
# 5 "include/linux/param.h" 2
# 4 "include/linux/ratelimit.h" 2




struct ratelimit_state {
 int interval;
 int burst;
 int printed;
 int missed;
 unsigned long begin;
};




extern int __ratelimit(struct ratelimit_state *rs);
# 19 "include/linux/kernel.h" 2
# 1 "include/linux/dynamic_printk.h" 1
# 13 "include/linux/dynamic_printk.h"
extern int dynamic_enabled;





extern long long dynamic_printk_enabled;
extern long long dynamic_printk_enabled2;

struct mod_debug {
 char *modname;
 char *logical_modname;
 char *flag_names;
 int type;
 int hash;
 int hash2;
} __attribute__((aligned(8)));

int register_dynamic_debug_module(char *mod_name, int type, char *share_name,
     char *flags, int hash, int hash2);
# 78 "include/linux/dynamic_printk.h"
static inline __attribute__((always_inline)) int unregister_dynamic_debug_module(const char *mod_name)
{
 return 0;
}
static inline __attribute__((always_inline)) int __dynamic_dbg_enabled_helper(char *modname, int type,
      int value, int hash)
{
 return 0;
}
# 20 "include/linux/kernel.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/byteorder.h" 1
# 21 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/byteorder.h"
# 1 "include/linux/byteorder/little_endian.h" 1
# 12 "include/linux/byteorder/little_endian.h"
# 1 "include/linux/swab.h" 1





# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/swab.h" 1
# 25 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/swab.h"
static inline __attribute__((always_inline)) __attribute__((__const__)) __u32 __arch_swab32(__u32 x)
{
 __u32 t;


 if (!__builtin_constant_p(x)) {





  asm ("eor\t%0, %1, %1, ror #16" : "=r" (t) : "r" (x));
 } else

  t = x ^ ((x << 16) | (x >> 16));

 x = (x << 24) | (x >> 8);
 t &= ~0x00FF0000;
 x ^= (t >> 8);

 return x;
}
# 7 "include/linux/swab.h" 2
# 46 "include/linux/swab.h"
static inline __attribute__((always_inline)) __attribute__((__const__)) __u16 __fswab16(__u16 val)
{



 return ((__u16)( (((__u16)(val) & (__u16)0x00ffU) << 8) | (((__u16)(val) & (__u16)0xff00U) >> 8)));

}

static inline __attribute__((always_inline)) __attribute__((__const__)) __u32 __fswab32(__u32 val)
{

 return __arch_swab32(val);



}

static inline __attribute__((always_inline)) __attribute__((__const__)) __u64 __fswab64(__u64 val)
{



 __u32 h = val >> 32;
 __u32 l = val & ((1ULL << 32) - 1);
 return (((__u64)__fswab32(l)) << 32) | ((__u64)(__fswab32(h)));



}

static inline __attribute__((always_inline)) __attribute__((__const__)) __u32 __fswahw32(__u32 val)
{



 return ((__u32)( (((__u32)(val) & (__u32)0x0000ffffUL) << 16) | (((__u32)(val) & (__u32)0xffff0000UL) >> 16)));

}

static inline __attribute__((always_inline)) __attribute__((__const__)) __u32 __fswahb32(__u32 val)
{



 return ((__u32)( (((__u32)(val) & (__u32)0x00ff00ffUL) << 8) | (((__u32)(val) & (__u32)0xff00ff00UL) >> 8)));

}
# 148 "include/linux/swab.h"
static inline __attribute__((always_inline)) __u16 __swab16p(const __u16 *p)
{



 return (__builtin_constant_p((__u16)(*p)) ? ((__u16)( (((__u16)(*p) & (__u16)0x00ffU) << 8) | (((__u16)(*p) & (__u16)0xff00U) >> 8))) : __fswab16(*p));

}





static inline __attribute__((always_inline)) __u32 __swab32p(const __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x000000ffUL) << 24) | (((__u32)(*p) & (__u32)0x0000ff00UL) << 8) | (((__u32)(*p) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(*p) & (__u32)0xff000000UL) >> 24))) : __fswab32(*p));

}





static inline __attribute__((always_inline)) __u64 __swab64p(const __u64 *p)
{



 return (__builtin_constant_p((__u64)(*p)) ? ((__u64)( (((__u64)(*p) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(*p) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(*p) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(*p) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(*p) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(*p) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(*p) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(*p) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(*p));

}







static inline __attribute__((always_inline)) __u32 __swahw32p(const __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x0000ffffUL) << 16) | (((__u32)(*p) & (__u32)0xffff0000UL) >> 16))) : __fswahw32(*p));

}







static inline __attribute__((always_inline)) __u32 __swahb32p(const __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x00ff00ffUL) << 8) | (((__u32)(*p) & (__u32)0xff00ff00UL) >> 8))) : __fswahb32(*p));

}





static inline __attribute__((always_inline)) void __swab16s(__u16 *p)
{



 *p = __swab16p(p);

}




static inline __attribute__((always_inline)) void __swab32s(__u32 *p)
{



 *p = __swab32p(p);

}





static inline __attribute__((always_inline)) void __swab64s(__u64 *p)
{



 *p = __swab64p(p);

}







static inline __attribute__((always_inline)) void __swahw32s(__u32 *p)
{



 *p = __swahw32p(p);

}







static inline __attribute__((always_inline)) void __swahb32s(__u32 *p)
{



 *p = __swahb32p(p);

}
# 13 "include/linux/byteorder/little_endian.h" 2
# 43 "include/linux/byteorder/little_endian.h"
static inline __attribute__((always_inline)) __le64 __cpu_to_le64p(const __u64 *p)
{
 return ( __le64)*p;
}
static inline __attribute__((always_inline)) __u64 __le64_to_cpup(const __le64 *p)
{
 return ( __u64)*p;
}
static inline __attribute__((always_inline)) __le32 __cpu_to_le32p(const __u32 *p)
{
 return ( __le32)*p;
}
static inline __attribute__((always_inline)) __u32 __le32_to_cpup(const __le32 *p)
{
 return ( __u32)*p;
}
static inline __attribute__((always_inline)) __le16 __cpu_to_le16p(const __u16 *p)
{
 return ( __le16)*p;
}
static inline __attribute__((always_inline)) __u16 __le16_to_cpup(const __le16 *p)
{
 return ( __u16)*p;
}
static inline __attribute__((always_inline)) __be64 __cpu_to_be64p(const __u64 *p)
{
 return ( __be64)__swab64p(p);
}
static inline __attribute__((always_inline)) __u64 __be64_to_cpup(const __be64 *p)
{
 return __swab64p((__u64 *)p);
}
static inline __attribute__((always_inline)) __be32 __cpu_to_be32p(const __u32 *p)
{
 return ( __be32)__swab32p(p);
}
static inline __attribute__((always_inline)) __u32 __be32_to_cpup(const __be32 *p)
{
 return __swab32p((__u32 *)p);
}
static inline __attribute__((always_inline)) __be16 __cpu_to_be16p(const __u16 *p)
{
 return ( __be16)__swab16p(p);
}
static inline __attribute__((always_inline)) __u16 __be16_to_cpup(const __be16 *p)
{
 return __swab16p((__u16 *)p);
}
# 105 "include/linux/byteorder/little_endian.h"
# 1 "include/linux/byteorder/generic.h" 1
# 143 "include/linux/byteorder/generic.h"
static inline __attribute__((always_inline)) void le16_add_cpu(__le16 *var, u16 val)
{
 *var = (( __le16)(__u16)((( __u16)(__le16)(*var)) + val));
}

static inline __attribute__((always_inline)) void le32_add_cpu(__le32 *var, u32 val)
{
 *var = (( __le32)(__u32)((( __u32)(__le32)(*var)) + val));
}

static inline __attribute__((always_inline)) void le64_add_cpu(__le64 *var, u64 val)
{
 *var = (( __le64)(__u64)((( __u64)(__le64)(*var)) + val));
}

static inline __attribute__((always_inline)) void be16_add_cpu(__be16 *var, u16 val)
{
 *var = (( __be16)(__builtin_constant_p((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val))) ? ((__u16)( (((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val)) & (__u16)0x00ffU) << 8) | (((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val)) & (__u16)0xff00U) >> 8))) : __fswab16(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val))));
}

static inline __attribute__((always_inline)) void be32_add_cpu(__be32 *var, u32 val)
{
 *var = (( __be32)(__builtin_constant_p((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val))) ? ((__u32)( (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x000000ffUL) << 24) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0xff000000UL) >> 24))) : __fswab32(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val))));
}

static inline __attribute__((always_inline)) void be64_add_cpu(__be64 *var, u64 val)
{
 *var = (( __be64)(__builtin_constant_p((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val))) ? ((__u64)( (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val))));
}
# 106 "include/linux/byteorder/little_endian.h" 2
# 22 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/byteorder.h" 2
# 21 "include/linux/kernel.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bug.h" 1






extern void __bug(const char *file, int line) __attribute__((noreturn));
# 22 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bug.h"
# 1 "include/asm-generic/bug.h" 1






extern void __WARN_ON(const char *func, const char *file, const int line);
# 65 "include/asm-generic/bug.h"
extern void warn_slowpath(const char *file, const int line,
  const char *fmt, ...) __attribute__((format(printf, 3, 4)));
# 23 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/bug.h" 2
# 22 "include/linux/kernel.h" 2

extern const char linux_banner[];
extern const char linux_proc_banner[];
# 107 "include/linux/kernel.h"
extern int console_printk[];






struct completion;
struct pt_regs;
struct user;
# 126 "include/linux/kernel.h"
  void __might_sleep(char *file, int line);
# 153 "include/linux/kernel.h"
static inline __attribute__((always_inline)) void might_fault(void)
{
 do { __might_sleep("include/linux/kernel.h", 155); do { } while (0); } while (0);
}


extern struct atomic_notifier_head panic_notifier_list;
extern long (*panic_blink)(long time);
 void panic(const char * fmt, ...)
 __attribute__ ((noreturn, format (printf, 1, 2))) ;
extern void oops_enter(void);
extern void oops_exit(void);
extern int oops_may_print(void);
 void do_exit(long error_code)
 __attribute__((noreturn));
 void complete_and_exit(struct completion *, long)
 __attribute__((noreturn));
extern unsigned long simple_strtoul(const char *,char **,unsigned int);
extern long simple_strtol(const char *,char **,unsigned int);
extern unsigned long long simple_strtoull(const char *,char **,unsigned int);
extern long long simple_strtoll(const char *,char **,unsigned int);
extern int strict_strtoul(const char *, unsigned int, unsigned long *);
extern int strict_strtol(const char *, unsigned int, long *);
extern int strict_strtoull(const char *, unsigned int, unsigned long long *);
extern int strict_strtoll(const char *, unsigned int, long long *);
extern int sprintf(char * buf, const char * fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
extern int vsprintf(char *buf, const char *, va_list)
 __attribute__ ((format (printf, 2, 0)));
extern int snprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4)));
extern int vsnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0)));
extern int scnprintf(char * buf, size_t size, const char * fmt, ...)
 __attribute__ ((format (printf, 3, 4)));
extern int vscnprintf(char *buf, size_t size, const char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0)));
extern char *kasprintf(gfp_t gfp, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
extern char *kvasprintf(gfp_t gfp, const char *fmt, va_list args);

extern int sscanf(const char *, const char *, ...)
 __attribute__ ((format (scanf, 2, 3)));
extern int vsscanf(const char *, const char *, va_list)
 __attribute__ ((format (scanf, 2, 0)));

extern int get_option(char **str, int *pint);
extern char *get_options(const char *str, int nints, int *ints);
extern unsigned long long memparse(const char *ptr, char **retptr);

extern int core_kernel_text(unsigned long addr);
extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
extern int func_ptr_is_kernel_text(void *ptr);

struct pid;
extern struct pid *session_of_pgrp(struct pid *pgrp);
# 236 "include/linux/kernel.h"
 int vprintk(const char *fmt, va_list args)
 __attribute__ ((format (printf, 1, 0)));
 int printk(const char * fmt, ...)
 __attribute__ ((format (printf, 1, 2))) ;

extern struct ratelimit_state printk_ratelimit_state;
extern int printk_ratelimit(void);
extern bool printk_timed_ratelimit(unsigned long *caller_jiffies,
       unsigned int interval_msec);
# 275 "include/linux/kernel.h"
extern int printk_needs_cpu(int cpu);
extern void printk_tick(void);

extern void __attribute__((format(printf, 1, 2)))
 early_printk(const char *fmt, ...);


extern void zap_rt_locks(void);




unsigned long int_sqrt(unsigned long);

static inline __attribute__((always_inline)) void console_silent(void)
{
 (console_printk[0]) = 0;
}

static inline __attribute__((always_inline)) void console_verbose(void)
{
 if ((console_printk[0]))
  (console_printk[0]) = 15;
}

extern void bust_spinlocks(int yes);
extern void wake_up_klogd(void);
extern int oops_in_progress;
extern int panic_timeout;
extern int panic_on_oops;
extern int panic_on_unrecovered_nmi;
extern const char *print_tainted(void);
extern void add_taint(unsigned flag);
extern int test_taint(unsigned flag);
extern unsigned long get_taint(void);
extern int root_mountflags;


extern enum system_states {
 SYSTEM_BOOTING,
 SYSTEM_BOOTING_SCHEDULER_OK,
 SYSTEM_RUNNING,
 SYSTEM_HALT,
 SYSTEM_POWER_OFF,
 SYSTEM_RESTART,
 SYSTEM_SUSPEND_DISK,
} system_state;
# 335 "include/linux/kernel.h"
extern void dump_stack(void) ;

enum {
 DUMP_PREFIX_NONE,
 DUMP_PREFIX_ADDRESS,
 DUMP_PREFIX_OFFSET
};
extern void hex_dump_to_buffer(const void *buf, size_t len,
    int rowsize, int groupsize,
    char *linebuf, size_t linebuflen, bool ascii);
extern void print_hex_dump(const char *level, const char *prefix_str,
    int prefix_type, int rowsize, int groupsize,
    const void *buf, size_t len, bool ascii);
extern void print_hex_dump_bytes(const char *prefix_str, int prefix_type,
   const void *buf, size_t len);

extern const char hex_asc[];



static inline __attribute__((always_inline)) char *pack_hex_byte(char *buf, u8 byte)
{
 *buf++ = hex_asc[((byte) & 0xf0) >> 4];
 *buf++ = hex_asc[((byte) & 0x0f)];
 return buf;
}
# 414 "include/linux/kernel.h"
void tracing_on(void);
void tracing_off(void);

void tracing_off_permanent(void);
int tracing_is_on(void);







extern void tracing_start(void);
extern void tracing_stop(void);
extern void ftrace_off_permanent(void);

extern void
ftrace_special(unsigned long arg1, unsigned long arg2, unsigned long arg3);

static inline __attribute__((always_inline)) void __attribute__ ((format (printf, 1, 2)))
____trace_printk_check_format(const char *fmt, ...)
{
}
# 473 "include/linux/kernel.h"
extern int
__trace_bprintk(unsigned long ip, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));

extern int
__trace_printk(unsigned long ip, const char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
# 498 "include/linux/kernel.h"
extern int
__ftrace_vbprintk(unsigned long ip, const char *fmt, va_list ap);

extern int
__ftrace_vprintk(unsigned long ip, const char *fmt, va_list ap);

extern void ftrace_dump(void);
# 654 "include/linux/kernel.h"
struct sysinfo;
extern int do_sysinfo(struct sysinfo *info);


extern void (*panic_callback)(unsigned long, void *);





struct sysinfo {
 long uptime;
 unsigned long loads[3];
 unsigned long totalram;
 unsigned long freeram;
 unsigned long sharedram;
 unsigned long bufferram;
 unsigned long totalswap;
 unsigned long freeswap;
 unsigned short procs;
 unsigned short pad;
 unsigned long totalhigh;
 unsigned long freehigh;
 unsigned int mem_unit;
 char _f[20-2*sizeof(long)-sizeof(int)];
};
# 91 "include/linux/spinlock.h" 2
# 1 "include/linux/cache.h" 1
# 92 "include/linux/spinlock.h" 2
# 1 "include/linux/stringify.h" 1
# 93 "include/linux/spinlock.h" 2
# 1 "include/linux/bottom_half.h" 1
# 94 "include/linux/spinlock.h" 2

# 1 "include/linux/pickop.h" 1







extern int __bad_func_type(void);
# 96 "include/linux/spinlock.h" 2






# 1 "include/linux/spinlock_types.h" 1
# 15 "include/linux/spinlock_types.h"
# 1 "include/linux/spinlock_types_up.h" 1
# 25 "include/linux/spinlock_types_up.h"
typedef struct { } __raw_spinlock_t;





typedef struct {

} __raw_rwlock_t;
# 16 "include/linux/spinlock_types.h" 2
# 35 "include/linux/spinlock_types.h"
# 1 "include/linux/lockdep.h" 1
# 12 "include/linux/lockdep.h"
struct task_struct;
struct lockdep_map;
# 304 "include/linux/lockdep.h"
static inline __attribute__((always_inline)) void lockdep_off(void)
{
}

static inline __attribute__((always_inline)) void lockdep_on(void)
{
}
# 337 "include/linux/lockdep.h"
struct lock_class_key { };
# 368 "include/linux/lockdep.h"
extern void early_init_irq_lock_class(void);
# 380 "include/linux/lockdep.h"
static inline __attribute__((always_inline)) void early_boot_irqs_off(void)
{
}
static inline __attribute__((always_inline)) void early_boot_irqs_on(void)
{
}
static inline __attribute__((always_inline)) void print_irqtrace_events(struct task_struct *curr)
{
}
# 36 "include/linux/spinlock_types.h" 2

typedef struct {
 __raw_spinlock_t raw_lock;
# 49 "include/linux/spinlock_types.h"
} raw_spinlock_t;



typedef struct {
 __raw_rwlock_t raw_lock;
# 65 "include/linux/spinlock_types.h"
} raw_rwlock_t;
# 103 "include/linux/spinlock.h" 2

extern int __attribute__((section(".spinlock.text"))) generic__raw_read_trylock(raw_rwlock_t *lock);







# 1 "include/linux/spinlock_up.h" 1
# 113 "include/linux/spinlock.h" 2





# 1 "include/linux/rt_lock.h" 1
# 13 "include/linux/rt_lock.h"
# 1 "include/linux/rtmutex.h" 1
# 16 "include/linux/rtmutex.h"
# 1 "include/linux/plist.h" 1
# 80 "include/linux/plist.h"
struct plist_head {
 struct list_head prio_list;
 struct list_head node_list;



};

struct plist_node {
 int prio;
 struct plist_head plist;
};
# 130 "include/linux/plist.h"
static inline __attribute__((always_inline)) void
plist_head_init(struct plist_head *head, raw_spinlock_t *lock)
{
 INIT_LIST_HEAD(&head->prio_list);
 INIT_LIST_HEAD(&head->node_list);



}






static inline __attribute__((always_inline)) void plist_node_init(struct plist_node *node, int prio)
{
 node->prio = prio;
 plist_head_init(&node->plist, ((void *)0));
}

extern void plist_add(struct plist_node *node, struct plist_head *head);
extern void plist_del(struct plist_node *node, struct plist_head *head);
# 198 "include/linux/plist.h"
static inline __attribute__((always_inline)) int plist_head_empty(const struct plist_head *head)
{
 return list_empty(&head->node_list);
}





static inline __attribute__((always_inline)) int plist_node_empty(const struct plist_node *node)
{
 return plist_head_empty(&node->plist);
}
# 237 "include/linux/plist.h"
static inline __attribute__((always_inline)) struct plist_node* plist_first(const struct plist_head *head)
{
 return ({ const typeof( ((struct plist_node *)0)->plist.node_list ) *__mptr = (head->node_list.next); (struct plist_node *)( (char *)__mptr - __builtin_offsetof(struct plist_node,plist.node_list) );});

}
# 17 "include/linux/rtmutex.h" 2
# 26 "include/linux/rtmutex.h"
struct rt_mutex {
 raw_spinlock_t wait_lock;
 struct plist_head wait_list;
 struct task_struct *owner;






};

struct rt_mutex_waiter;
struct hrtimer_sleeper;






 static inline __attribute__((always_inline)) int rt_mutex_debug_check_no_locks_freed(const void *from,
             unsigned long len)
 {
 return 0;
 }
# 80 "include/linux/rtmutex.h"
static inline __attribute__((always_inline)) int rt_mutex_is_locked(struct rt_mutex *lock)
{
 return lock->owner != ((void *)0);
}

extern void __rt_mutex_init(struct rt_mutex *lock, const char *name);
extern void rt_mutex_destroy(struct rt_mutex *lock);

extern void rt_mutex_lock(struct rt_mutex *lock);
extern int rt_mutex_lock_interruptible(struct rt_mutex *lock,
      int detect_deadlock);
extern int rt_mutex_lock_killable(struct rt_mutex *lock,
      int detect_deadlock);
extern int rt_mutex_timed_lock(struct rt_mutex *lock,
     struct hrtimer_sleeper *timeout,
     int detect_deadlock);

extern int rt_mutex_trylock(struct rt_mutex *lock);

extern void rt_mutex_unlock(struct rt_mutex *lock);
# 14 "include/linux/rt_lock.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/atomic.h" 1
# 52 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/atomic.h"
static inline __attribute__((always_inline)) void atomic_set(atomic_t *v, int i)
{
 unsigned long tmp;

 __asm__ __volatile__("@ atomic_set\n"
"1:	ldrex	%0, [%1]\n"
"	strex	%0, %2, [%1]\n"
"	teq	%0, #0\n"
"	bne	1b"
 : "=&r" (tmp)
 : "r" (&v->counter), "r" (i)
 : "cc");
}

static inline __attribute__((always_inline)) int atomic_add_return(int i, atomic_t *v)
{
 unsigned long tmp;
 int result;

 do {
 __asm__ __volatile__("@ atomic_add_return\n"
"1:	ldrex	%0, [%2]\n"
"	add	%0, %0, %3\n"
"	strex	%1, %0, [%2]\n"
 : "=&r" (result), "=&r" (tmp)
 : "r" (&v->counter), "Ir" (i)
 : "cc");
 } while (tmp && 1);

 return result;
}

static inline __attribute__((always_inline)) int atomic_sub_return(int i, atomic_t *v)
{
 unsigned long tmp;
 int result;

 do {
 __asm__ __volatile__("@ atomic_sub_return\n"
"1:	ldrex	%0, [%2]\n"
"	sub	%0, %0, %3\n"
"	strex	%1, %0, [%2]\n"
 : "=&r" (result), "=&r" (tmp)
 : "r" (&v->counter), "Ir" (i)
 : "cc");
 } while (tmp && 1);

 return result;
}

static inline __attribute__((always_inline)) int atomic_cmpxchg(atomic_t *ptr, int old, int new)
{
 unsigned long oldval, res;

 do {
  __asm__ __volatile__("@ atomic_cmpxchg\n"
  "ldrex	%1, [%2]\n"
  "mov	%0, #0\n"
  "teq	%1, %3\n"
  "strexeq %0, %4, [%2]\n"
      : "=&r" (res), "=&r" (oldval)
      : "r" (&ptr->counter), "Ir" (old), "r" (new)
      : "cc");
 } while (res && 1);

 return oldval;
}

static inline __attribute__((always_inline)) void atomic_clear_mask(unsigned long mask, unsigned long *addr)
{
 unsigned long tmp, tmp2;

 do {
 __asm__ __volatile__("@ atomic_clear_mask\n"
"1:	ldrex	%0, [%2]\n"
"	bic	%0, %0, %3\n"
"	strex	%1, %0, [%2]\n"
 : "=&r" (tmp), "=&r" (tmp2)
 : "r" (addr), "Ir" (mask)
 : "cc");
 } while (tmp && 1);
}
# 198 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/atomic.h"
static inline __attribute__((always_inline)) int atomic_add_unless(atomic_t *v, int a, int u)
{
 int c, old;

 c = ((v)->counter);
 while (c != u && (old = atomic_cmpxchg((v), c, c + a)) != c)
  c = old;
 return c != u;
}
# 228 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/atomic.h"
# 1 "include/asm-generic/atomic.h" 1
# 141 "include/asm-generic/atomic.h"
typedef atomic_t atomic_long_t;


static inline __attribute__((always_inline)) long atomic_long_read(atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 return (long)((v)->counter);
}

static inline __attribute__((always_inline)) void atomic_long_set(atomic_long_t *l, long i)
{
 atomic_t *v = (atomic_t *)l;

 atomic_set(v, i);
}

static inline __attribute__((always_inline)) void atomic_long_inc(atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 (void) atomic_add_return(1, v);
}

static inline __attribute__((always_inline)) void atomic_long_dec(atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 (void) atomic_sub_return(1, v);
}

static inline __attribute__((always_inline)) void atomic_long_add(long i, atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 (void) atomic_add_return(i, v);
}

static inline __attribute__((always_inline)) void atomic_long_sub(long i, atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 (void) atomic_sub_return(i, v);
}

static inline __attribute__((always_inline)) int atomic_long_sub_and_test(long i, atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 return (atomic_sub_return(i, v) == 0);
}

static inline __attribute__((always_inline)) int atomic_long_dec_and_test(atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 return (atomic_sub_return(1, v) == 0);
}

static inline __attribute__((always_inline)) int atomic_long_inc_and_test(atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 return (atomic_add_return(1, v) == 0);
}

static inline __attribute__((always_inline)) int atomic_long_add_negative(long i, atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 return (atomic_add_return(i, v) < 0);
}

static inline __attribute__((always_inline)) long atomic_long_add_return(long i, atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 return (long)atomic_add_return(i, v);
}

static inline __attribute__((always_inline)) long atomic_long_sub_return(long i, atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 return (long)atomic_sub_return(i, v);
}

static inline __attribute__((always_inline)) long atomic_long_inc_return(atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 return (long)(atomic_add_return(1, v));
}

static inline __attribute__((always_inline)) long atomic_long_dec_return(atomic_long_t *l)
{
 atomic_t *v = (atomic_t *)l;

 return (long)(atomic_sub_return(1, v));
}

static inline __attribute__((always_inline)) long atomic_long_add_unless(atomic_long_t *l, long a, long u)
{
 atomic_t *v = (atomic_t *)l;

 return (long)atomic_add_unless(v, a, u);
}
# 229 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/atomic.h" 2
# 15 "include/linux/rt_lock.h" 2







typedef struct {
 struct rt_mutex lock;
 unsigned int break_lock;



} spinlock_t;
# 74 "include/linux/rt_lock.h"
struct rw_semaphore {
 struct rt_mutex lock;
 int read_depth;



};




typedef struct {
 struct rt_mutex lock;
 int read_depth;
 unsigned int break_lock;



} rwlock_t;
# 116 "include/linux/rt_lock.h"
struct semaphore {
 atomic_t count;
 struct rt_mutex lock;
};





extern void
__sema_init(struct semaphore *sem, int val, char *name, char *file, int line);




extern void
__init_MUTEX(struct semaphore *sem, char *name, char *file, int line);



extern void there_is_no_init_MUTEX_LOCKED_for_RT_semaphores(void);






extern void rt_down(struct semaphore *sem);
extern int rt_down_interruptible(struct semaphore *sem);
extern int rt_down_timeout(struct semaphore *sem, long jiffies);
extern int rt_down_trylock(struct semaphore *sem);
extern void rt_up(struct semaphore *sem);




extern int __bad_func_type(void);
# 198 "include/linux/rt_lock.h"
extern void __rt_rwsem_init(struct rw_semaphore *rwsem, char *name,
         struct lock_class_key *key);
# 208 "include/linux/rt_lock.h"
extern void __dont_do_this_in_rt(struct rw_semaphore *rwsem);




extern void rt_down_write(struct rw_semaphore *rwsem);
extern void
rt_down_read_nested(struct rw_semaphore *rwsem, int subclass);
extern void
rt_down_write_nested(struct rw_semaphore *rwsem, int subclass);
extern void rt_down_read(struct rw_semaphore *rwsem);
extern int rt_down_write_trylock(struct rw_semaphore *rwsem);
extern int rt_down_read_trylock(struct rw_semaphore *rwsem);
extern void rt_up_read(struct rw_semaphore *rwsem);
extern void rt_up_write(struct rw_semaphore *rwsem);
extern void rt_downgrade_write(struct rw_semaphore *rwsem);
# 119 "include/linux/spinlock.h" 2
# 137 "include/linux/spinlock.h"
# 1 "include/linux/spinlock_api_up.h" 1
# 138 "include/linux/spinlock.h" 2
# 165 "include/linux/spinlock.h"
extern int __bad_spinlock_type(void);
extern int __bad_rwlock_type(void);

extern void
__rt_spin_lock_init(spinlock_t *lock, char *name, struct lock_class_key *key);

extern void __attribute__((section(".spinlock.text"))) rt_spin_lock(spinlock_t *lock);
extern void __attribute__((section(".spinlock.text"))) rt_spin_lock_nested(spinlock_t *lock, int subclass);
extern void __attribute__((section(".spinlock.text"))) rt_spin_unlock(spinlock_t *lock);
extern void __attribute__((section(".spinlock.text"))) rt_spin_unlock_wait(spinlock_t *lock);
extern int __attribute__((section(".spinlock.text")))
rt_spin_trylock_irqsave(spinlock_t *lock, unsigned long *flags);
extern int __attribute__((section(".spinlock.text"))) rt_spin_trylock(spinlock_t *lock);
extern int _atomic_dec_and_spin_lock(spinlock_t *lock, atomic_t *atomic);





extern void __attribute__((section(".spinlock.text"))) __rt_spin_lock(struct rt_mutex *lock);
extern void __attribute__((section(".spinlock.text"))) __rt_spin_unlock(struct rt_mutex *lock);
# 197 "include/linux/spinlock.h"
static inline __attribute__((always_inline)) unsigned long __attribute__((section(".spinlock.text"))) _spin_lock_irqsave(spinlock_t *lock)
{
 rt_spin_lock(lock);
 return 0;
}
static inline __attribute__((always_inline)) unsigned long __attribute__((section(".spinlock.text")))
_spin_lock_irqsave_nested(spinlock_t *lock, int subclass)
{
 rt_spin_lock_nested(lock, subclass);
 return 0;
}
# 259 "include/linux/spinlock.h"
extern void __attribute__((section(".spinlock.text"))) rt_write_lock(rwlock_t *rwlock);
extern void __attribute__((section(".spinlock.text"))) rt_read_lock(rwlock_t *rwlock);
extern int __attribute__((section(".spinlock.text"))) rt_write_trylock(rwlock_t *rwlock);
extern int __attribute__((section(".spinlock.text"))) rt_write_trylock_irqsave(rwlock_t *trylock,
            unsigned long *flags);
extern int __attribute__((section(".spinlock.text"))) rt_read_trylock(rwlock_t *rwlock);
extern void __attribute__((section(".spinlock.text"))) rt_write_unlock(rwlock_t *rwlock);
extern void __attribute__((section(".spinlock.text"))) rt_read_unlock(rwlock_t *rwlock);
extern unsigned long __attribute__((section(".spinlock.text"))) rt_write_lock_irqsave(rwlock_t *rwlock);
extern unsigned long __attribute__((section(".spinlock.text"))) rt_read_lock_irqsave(rwlock_t *rwlock);
extern void
__rt_rwlock_init(rwlock_t *rwlock, char *name, struct lock_class_key *key);
# 524 "include/linux/spinlock.h"
static inline __attribute__((always_inline)) void bit_spin_lock(int bitnum, unsigned long *addr)
{
# 534 "include/linux/spinlock.h"
 while (__builtin_expect(!!((__builtin_constant_p(bitnum) ? ____atomic_test_and_set_bit(bitnum, addr) : _test_and_set_bit_le(bitnum,addr))), 0))
  while (test_bit(bitnum, addr))
   __asm__ __volatile__("": : :"memory");

 (void)0;
}




static inline __attribute__((always_inline)) int bit_spin_trylock(int bitnum, unsigned long *addr)
{

 if (__builtin_expect(!!((__builtin_constant_p(bitnum) ? ____atomic_test_and_set_bit(bitnum, addr) : _test_and_set_bit_le(bitnum,addr))), 0))
  return 0;

 (void)0;
 return 1;
}




static inline __attribute__((always_inline)) void bit_spin_unlock(int bitnum, unsigned long *addr)
{




 do { do { if (0) __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 5" : : "r" (0) : "memory"); else __asm__ __volatile__("": : :"memory"); } while (0); (__builtin_constant_p(bitnum) ? ____atomic_clear_bit(bitnum, addr) : _clear_bit_le(bitnum,addr)); } while (0);

 (void)0;
}




static inline __attribute__((always_inline)) void __bit_spin_unlock(int bitnum, unsigned long *addr)
{




 do { __asm__ __volatile__("": : :"memory"); __clear_bit(bitnum, addr); } while (0);

 (void)0;
}




static inline __attribute__((always_inline)) int bit_spin_is_locked(int bitnum, unsigned long *addr)
{

 return test_bit(bitnum, addr);



}
# 616 "include/linux/spinlock.h"
  extern int __atomic_dec_and_spin_lock(raw_spinlock_t *lock, atomic_t *atomic);
# 8 "include/linux/mmzone.h" 2

# 1 "include/linux/wait.h" 1
# 26 "include/linux/wait.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/current.h" 1





static inline __attribute__((always_inline)) struct task_struct *get_current(void) __attribute__((__const__));

static inline __attribute__((always_inline)) struct task_struct *get_current(void)
{
 return current_thread_info()->task;
}
# 27 "include/linux/wait.h" 2

typedef struct __wait_queue wait_queue_t;
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int sync, void *key);
int default_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);

struct __wait_queue {
 unsigned int flags;

 void *private;
 wait_queue_func_t func;
 struct list_head task_list;
};

struct wait_bit_key {
 void *flags;
 int bit_nr;
};

struct wait_bit_queue {
 struct wait_bit_key key;
 wait_queue_t wait;
};

struct __wait_queue_head {
 spinlock_t lock;
 struct list_head task_list;
};
typedef struct __wait_queue_head wait_queue_head_t;

struct task_struct;
# 80 "include/linux/wait.h"
extern void init_waitqueue_head(wait_queue_head_t *q);
# 91 "include/linux/wait.h"
static inline __attribute__((always_inline)) void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
{
 q->flags = 0;
 q->private = p;
 q->func = default_wake_function;
}

static inline __attribute__((always_inline)) void init_waitqueue_func_entry(wait_queue_t *q,
     wait_queue_func_t func)
{
 q->flags = 0;
 q->private = ((void *)0);
 q->func = func;
}

static inline __attribute__((always_inline)) int waitqueue_active(wait_queue_head_t *q)
{
 return !list_empty(&q->task_list);
}

extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t *wait);
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);

static inline __attribute__((always_inline)) void __add_wait_queue(wait_queue_head_t *head, wait_queue_t *new)
{
 list_add(&new->task_list, &head->task_list);
}




static inline __attribute__((always_inline)) void __add_wait_queue_tail(wait_queue_head_t *head,
      wait_queue_t *new)
{
 list_add_tail(&new->task_list, &head->task_list);
}

static inline __attribute__((always_inline)) void __remove_wait_queue(wait_queue_head_t *head,
       wait_queue_t *old)
{
 list_del(&old->task_list);
}

void __wake_up_common(wait_queue_head_t *q, unsigned int mode,
   int nr_exclusive, int sync, void *key);
void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key);
extern void __wake_up_locked(wait_queue_head_t *q, unsigned int mode);
extern void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr);
void __wake_up_bit(wait_queue_head_t *, void *, int);
int __wait_on_bit(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
int __wait_on_bit_lock(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
void wake_up_bit(void *, int);
int out_of_line_wait_on_bit(void *, int, int (*)(void *), unsigned);
int out_of_line_wait_on_bit_lock(void *, int, int (*)(void *), unsigned);
wait_queue_head_t *bit_waitqueue(void *, int);
# 405 "include/linux/wait.h"
static inline __attribute__((always_inline)) void add_wait_queue_exclusive_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 wait->flags |= 0x01;
 __add_wait_queue_tail(q, wait);
}




static inline __attribute__((always_inline)) void remove_wait_queue_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 __remove_wait_queue(q, wait);
}






extern void sleep_on(wait_queue_head_t *q);
extern long sleep_on_timeout(wait_queue_head_t *q,
          signed long timeout);
extern void interruptible_sleep_on(wait_queue_head_t *q);
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q,
        signed long timeout);




void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state);
void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state);
void finish_wait(wait_queue_head_t *q, wait_queue_t *wait);
void abort_exclusive_wait(wait_queue_head_t *q, wait_queue_t *wait,
   unsigned int mode, void *key);
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
# 483 "include/linux/wait.h"
static inline __attribute__((always_inline)) int wait_on_bit(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!test_bit(bit, word))
  return 0;
 return out_of_line_wait_on_bit(word, bit, action, mode);
}
# 507 "include/linux/wait.h"
static inline __attribute__((always_inline)) int wait_on_bit_lock(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!(__builtin_constant_p(bit) ? ____atomic_test_and_set_bit(bit, word) : _test_and_set_bit_le(bit,word)))
  return 0;
 return out_of_line_wait_on_bit_lock(word, bit, action, mode);
}
# 10 "include/linux/mmzone.h" 2


# 1 "include/linux/threads.h" 1
# 13 "include/linux/mmzone.h" 2
# 1 "include/linux/numa.h" 1
# 14 "include/linux/mmzone.h" 2
# 1 "include/linux/init.h" 1
# 139 "include/linux/init.h"
typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

extern initcall_t __con_initcall_start[], __con_initcall_end[];
extern initcall_t __security_initcall_start[], __security_initcall_end[];


extern int do_one_initcall(initcall_t fn);
extern char __attribute__ ((__section__(".init.data"))) boot_command_line[];
extern char *saved_command_line;
extern unsigned int reset_devices;


void setup_arch(char **);
void prepare_namespace(void);

extern void (*late_time_init)(void);
# 232 "include/linux/init.h"
struct obs_kernel_param {
 const char *str;
 int (*setup_func)(char *);
 int early;
};
# 260 "include/linux/init.h"
void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) parse_early_param(void);
# 15 "include/linux/mmzone.h" 2
# 1 "include/linux/seqlock.h" 1
# 37 "include/linux/seqlock.h"
typedef struct {
 unsigned sequence;
 rwlock_t lock;
} __seqlock_t;

typedef struct {
 unsigned sequence;
 raw_spinlock_t lock;
} __raw_seqlock_t;




typedef __seqlock_t seqlock_t;




typedef __raw_seqlock_t raw_seqlock_t;
# 73 "include/linux/seqlock.h"
static inline __attribute__((always_inline)) void __raw_seqlock_init(raw_seqlock_t *seqlock)
{
 *seqlock = (raw_seqlock_t) { 0, (raw_spinlock_t) { .raw_lock = { }, } };
 do { if (__builtin_types_compatible_p(typeof((&seqlock->lock)), raw_spinlock_t *)) do { *((raw_spinlock_t *)(&seqlock->lock)) = (raw_spinlock_t) { .raw_lock = { }, }; } while (0); else if (__builtin_types_compatible_p(typeof((&seqlock->lock)), spinlock_t *)) do { static struct lock_class_key __key; __rt_spin_lock_init((spinlock_t *)(&seqlock->lock), "&seqlock->lock", &__key); } while (0); else __bad_func_type(); } while (0);
}


static inline __attribute__((always_inline)) void __seqlock_init(seqlock_t *seqlock)
{
 *seqlock = (seqlock_t) { 0, (rwlock_t) { .lock = { .wait_lock = { .raw_lock = { }, } }, } };
 do { if (__builtin_types_compatible_p(typeof((&seqlock->lock)), raw_rwlock_t *)) do { *((raw_rwlock_t *)(&seqlock->lock)) = (raw_rwlock_t) { .raw_lock = { }, }; } while (0); else if (__builtin_types_compatible_p(typeof((&seqlock->lock)), rwlock_t *)) do { static struct lock_class_key __key; __rt_rwlock_init((rwlock_t *)(&seqlock->lock), "&seqlock->lock", &__key); } while (0); else __bad_func_type(); } while (0);
}
# 105 "include/linux/seqlock.h"
static inline __attribute__((always_inline)) void __write_seqlock(seqlock_t *sl)
{
 do { if (__builtin_types_compatible_p(typeof((&sl->lock)), raw_rwlock_t *)) do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_rwlock_t *)(&sl->lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&sl->lock)), rwlock_t *)) rt_write_lock((rwlock_t *)(&sl->lock)); else __bad_func_type(); } while (0);
 ++sl->sequence;
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) unsigned long __write_seqlock_irqsave(seqlock_t *sl)
{
 unsigned long flags;

 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_save_flags" : "=r" (flags) : : "memory", "cc"); }); } while (0);
 __write_seqlock(sl);
 return flags;
}

static inline __attribute__((always_inline)) void __write_sequnlock(seqlock_t *sl)
{
 __asm__ __volatile__("": : :"memory");
 sl->sequence++;
 do { if (__builtin_types_compatible_p(typeof((&sl->lock)), raw_rwlock_t *)) do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_rwlock_t *)(&sl->lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&sl->lock)), rwlock_t *)) rt_write_unlock((rwlock_t *)(&sl->lock)); else __bad_func_type(); } while (0);
}



static inline __attribute__((always_inline)) int __write_tryseqlock(seqlock_t *sl)
{
 int ret = (({ unsigned long __ret; if (__builtin_types_compatible_p(typeof((&sl->lock)), raw_rwlock_t *)) __ret = ({ do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_rwlock_t *)(&sl->lock)); } while (0); 1; }); else if (__builtin_types_compatible_p(typeof((&sl->lock)), rwlock_t *)) __ret = rt_write_trylock((rwlock_t *)(&sl->lock)); else __ret = __bad_func_type(); __ret; }));

 if (ret) {
  ++sl->sequence;
  __asm__ __volatile__("": : :"memory");
 }
 return ret;
}


static inline __attribute__((always_inline)) __attribute__((always_inline)) unsigned __read_seqbegin(seqlock_t *sl)
{
 unsigned ret;

 ret = sl->sequence;
 __asm__ __volatile__("": : :"memory");
 if (__builtin_expect(!!(ret & 1), 0)) {





  do { if (__builtin_types_compatible_p(typeof((&sl->lock)), raw_rwlock_t *)) do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_rwlock_t *)(&sl->lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&sl->lock)), rwlock_t *)) rt_read_lock((rwlock_t *)(&sl->lock)); else __bad_func_type(); } while (0);
  ret = sl->sequence;
  do { if (__builtin_types_compatible_p(typeof((&sl->lock)), raw_rwlock_t *)) do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_rwlock_t *)(&sl->lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&sl->lock)), rwlock_t *)) rt_read_unlock((rwlock_t *)(&sl->lock)); else __bad_func_type(); } while (0);
 }

 do { if (__builtin_expect(!!(ret & 1), 0)) __bug("include/linux/seqlock.h", 159); } while(0);

 return ret;
}






static inline __attribute__((always_inline)) int __read_seqretry(seqlock_t *sl, unsigned iv)
{
 __asm__ __volatile__("": : :"memory");
 return (sl->sequence != iv);
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) void __write_seqlock_raw(raw_seqlock_t *sl)
{
 do { if (__builtin_types_compatible_p(typeof((&sl->lock)), raw_spinlock_t *)) do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&sl->lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&sl->lock)), spinlock_t *)) rt_spin_lock((spinlock_t *)(&sl->lock)); else __bad_func_type(); } while (0);
 ++sl->sequence;
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) unsigned long
__write_seqlock_irqsave_raw(raw_seqlock_t *sl)
{
 unsigned long flags;

 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0);
 __write_seqlock_raw(sl);
 return flags;
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) void __write_seqlock_irq_raw(raw_seqlock_t *sl)
{
 do { __asm__("cpsid i	@ __cli" : : : "memory", "cc"); trace_hardirqs_off(); } while (0);
 __write_seqlock_raw(sl);
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) void __write_seqlock_bh_raw(raw_seqlock_t *sl)
{
 do { } while (0);
 __write_seqlock_raw(sl);
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) void __write_sequnlock_raw(raw_seqlock_t *sl)
{
 __asm__ __volatile__("": : :"memory");
 sl->sequence++;
 do { if (__builtin_types_compatible_p(typeof((&sl->lock)), raw_spinlock_t *)) do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&sl->lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&sl->lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&sl->lock)); else __bad_func_type(); } while (0);
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) void
__write_sequnlock_irqrestore_raw(raw_seqlock_t *sl, unsigned long flags)
{
 __write_sequnlock_raw(sl);
 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0);
 do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0);
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) void __write_sequnlock_irq_raw(raw_seqlock_t *sl)
{
 __write_sequnlock_raw(sl);
 do { trace_hardirqs_on(); __asm__("cpsie i	@ __sti" : : : "memory", "cc"); } while (0);
 do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0);
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) void __write_sequnlock_bh_raw(raw_seqlock_t *sl)
{
 __write_sequnlock_raw(sl);
 do { } while (0);
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) int __write_tryseqlock_raw(raw_seqlock_t *sl)
{
 int ret = (({ unsigned long __ret; if (__builtin_types_compatible_p(typeof((&sl->lock)), raw_spinlock_t *)) __ret = ({ do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&sl->lock)); } while (0); 1; }); else if (__builtin_types_compatible_p(typeof((&sl->lock)), spinlock_t *)) __ret = rt_spin_trylock((spinlock_t *)(&sl->lock)); else __ret = __bad_func_type(); __ret; }));

 if (ret) {
  ++sl->sequence;
  __asm__ __volatile__("": : :"memory");
 }
 return ret;
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) unsigned __read_seqbegin_raw(const raw_seqlock_t *sl)
{
 unsigned ret;

repeat:
 ret = sl->sequence;
 __asm__ __volatile__("": : :"memory");
 if (__builtin_expect(!!(ret & 1), 0)) {
  __asm__ __volatile__("": : :"memory");
  goto repeat;
 }

 return ret;
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) int __read_seqretry_raw(const raw_seqlock_t *sl, unsigned start)
{
 __asm__ __volatile__("": : :"memory");

 return (sl->sequence != start);
}

extern int __bad_seqlock_type(void);
# 313 "include/linux/seqlock.h"
static inline __attribute__((always_inline)) __attribute__((always_inline))
unsigned long __seq_irqsave_raw(raw_seqlock_t *sl)
{
 unsigned long flags;

 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0);
 return flags;
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) unsigned long __seq_irqsave(seqlock_t *sl)
{
 unsigned long flags;

 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_save_flags" : "=r" (flags) : : "memory", "cc"); }); } while (0);
 return flags;
}







static inline __attribute__((always_inline)) __attribute__((always_inline)) int
__read_seqretry_irqrestore(seqlock_t *sl, unsigned iv, unsigned long flags)
{
 return __read_seqretry(sl, iv);
}

static inline __attribute__((always_inline)) __attribute__((always_inline)) int
__read_seqretry_irqrestore_raw(raw_seqlock_t *sl, unsigned iv,
          unsigned long flags)
{
 int ret = ({ unsigned long __ret; if (__builtin_types_compatible_p(typeof((sl)), raw_seqlock_t *)) __ret = __read_seqretry_raw((raw_seqlock_t *)(sl), iv); else if (__builtin_types_compatible_p(typeof((sl)), seqlock_t *)) __ret = __read_seqretry((seqlock_t *)(sl), iv); else __ret = __bad_func_type(); __ret; });
 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0);
 do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0);
 return ret;
}
# 363 "include/linux/seqlock.h"
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;





static inline __attribute__((always_inline)) unsigned read_seqcount_begin(const seqcount_t *s)
{
 unsigned ret;

repeat:
 ret = s->sequence;
 __asm__ __volatile__("": : :"memory");
 if (__builtin_expect(!!(ret & 1), 0)) {
  __asm__ __volatile__("": : :"memory");
  goto repeat;
 }
 return ret;
}




static inline __attribute__((always_inline)) int read_seqcount_retry(const seqcount_t *s, unsigned start)
{
 __asm__ __volatile__("": : :"memory");

 return s->sequence != start;
}






static inline __attribute__((always_inline)) void write_seqcount_begin(seqcount_t *s)
{
 s->sequence++;
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((always_inline)) void write_seqcount_end(seqcount_t *s)
{
 __asm__ __volatile__("": : :"memory");
 s->sequence++;
}
# 16 "include/linux/mmzone.h" 2
# 1 "include/linux/nodemask.h" 1
# 89 "include/linux/nodemask.h"
# 1 "include/linux/bitmap.h" 1







# 1 "include/linux/string.h" 1
# 15 "include/linux/string.h"
extern char *strndup_user(const char *, long);




# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/string.h" 1
# 10 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/string.h"
extern char * strrchr(const char * s, int c);


extern char * strchr(const char * s, int c);


extern void * memcpy(void *, const void *, __kernel_size_t);


extern void * memmove(void *, const void *, __kernel_size_t);


extern void * memchr(const void *, int, __kernel_size_t);


extern void * memset(void *, int, __kernel_size_t);

extern void __memzero(void *ptr, __kernel_size_t n);
# 21 "include/linux/string.h" 2


extern char * strcpy(char *,const char *);


extern char * strncpy(char *,const char *, __kernel_size_t);


size_t strlcpy(char *, const char *, size_t);


extern char * strcat(char *, const char *);


extern char * strncat(char *, const char *, __kernel_size_t);


extern size_t strlcat(char *, const char *, __kernel_size_t);


extern int strcmp(const char *,const char *);


extern int strncmp(const char *,const char *,__kernel_size_t);


extern int strnicmp(const char *, const char *, __kernel_size_t);


extern int strcasecmp(const char *s1, const char *s2);


extern int strncasecmp(const char *s1, const char *s2, size_t n);





extern char * strnchr(const char *, size_t, int);




extern char * strstrip(char *);

extern char * strstr(const char *,const char *);


extern __kernel_size_t strlen(const char *);


extern __kernel_size_t strnlen(const char *,__kernel_size_t);


extern char * strpbrk(const char *,const char *);


extern char * strsep(char **,const char *);


extern __kernel_size_t strspn(const char *,const char *);


extern __kernel_size_t strcspn(const char *,const char *);
# 97 "include/linux/string.h"
extern void * memscan(void *,int,__kernel_size_t);


extern int memcmp(const void *,const void *,__kernel_size_t);





extern char *kstrdup(const char *s, gfp_t gfp);
extern char *kstrndup(const char *s, size_t len, gfp_t gfp);
extern void *kmemdup(const void *src, size_t len, gfp_t gfp);

extern char **argv_split(gfp_t gfp, const char *str, int *argcp);
extern void argv_free(char **argv);

extern bool sysfs_streq(const char *s1, const char *s2);


int vbin_printf(u32 *bin_buf, size_t size, const char *fmt, va_list args);
int bstr_printf(char *buf, size_t size, const char *fmt, const u32 *bin_buf);
int bprintf(u32 *bin_buf, size_t size, const char *fmt, ...) __attribute__((format(printf,3,4)));


extern ssize_t memory_read_from_buffer(void *to, size_t count, loff_t *ppos,
   const void *from, size_t available);
# 9 "include/linux/bitmap.h" 2
# 87 "include/linux/bitmap.h"
extern int __bitmap_empty(const unsigned long *bitmap, int bits);
extern int __bitmap_full(const unsigned long *bitmap, int bits);
extern int __bitmap_equal(const unsigned long *bitmap1,
                 const unsigned long *bitmap2, int bits);
extern void __bitmap_complement(unsigned long *dst, const unsigned long *src,
   int bits);
extern void __bitmap_shift_right(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_shift_left(unsigned long *dst,
                        const unsigned long *src, int shift, int bits);
extern void __bitmap_and(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern void __bitmap_andnot(unsigned long *dst, const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_intersects(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_subset(const unsigned long *bitmap1,
   const unsigned long *bitmap2, int bits);
extern int __bitmap_weight(const unsigned long *bitmap, int bits);

extern int bitmap_scnprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int __bitmap_parse(const char *buf, unsigned int buflen, int is_user,
   unsigned long *dst, int nbits);
extern int bitmap_parse_user(const char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern int bitmap_scnlistprintf(char *buf, unsigned int len,
   const unsigned long *src, int nbits);
extern int bitmap_parselist(const char *buf, unsigned long *maskp,
   int nmaskbits);
extern void bitmap_remap(unsigned long *dst, const unsigned long *src,
  const unsigned long *old, const unsigned long *new, int bits);
extern int bitmap_bitremap(int oldbit,
  const unsigned long *old, const unsigned long *new, int bits);
extern void bitmap_onto(unsigned long *dst, const unsigned long *orig,
  const unsigned long *relmap, int bits);
extern void bitmap_fold(unsigned long *dst, const unsigned long *orig,
  int sz, int bits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);
extern void bitmap_copy_le(void *dst, const unsigned long *src, int nbits);
# 143 "include/linux/bitmap.h"
static inline __attribute__((always_inline)) void bitmap_zero(unsigned long *dst, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  *dst = 0UL;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  ({ void *__p = (dst); size_t __n = len; if ((__n) != 0) { if (__builtin_constant_p((0)) && (0) == 0) __memzero((__p),(__n)); else memset((__p),(0),(__n)); } (__p); });
 }
}

static inline __attribute__((always_inline)) void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)));
 if (!(__builtin_constant_p(nbits) && (nbits) <= 32)) {
  int len = (nlongs - 1) * sizeof(unsigned long);
  ({ void *__p = (dst); size_t __n = len; if ((__n) != 0) { if (__builtin_constant_p((0xff)) && (0xff) == 0) __memzero((__p),(__n)); else memset((__p),(0xff),(__n)); } (__p); });
 }
 dst[nlongs - 1] = ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL );
}

static inline __attribute__((always_inline)) void bitmap_copy(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  *dst = *src;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  memcpy(dst, src, len);
 }
}

static inline __attribute__((always_inline)) void bitmap_and(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  *dst = *src1 & *src2;
 else
  __bitmap_and(dst, src1, src2, nbits);
}

static inline __attribute__((always_inline)) void bitmap_or(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  *dst = *src1 | *src2;
 else
  __bitmap_or(dst, src1, src2, nbits);
}

static inline __attribute__((always_inline)) void bitmap_xor(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  *dst = *src1 ^ *src2;
 else
  __bitmap_xor(dst, src1, src2, nbits);
}

static inline __attribute__((always_inline)) void bitmap_andnot(unsigned long *dst, const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  *dst = *src1 & ~(*src2);
 else
  __bitmap_andnot(dst, src1, src2, nbits);
}

static inline __attribute__((always_inline)) void bitmap_complement(unsigned long *dst, const unsigned long *src,
   int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  *dst = ~(*src) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL );
 else
  __bitmap_complement(dst, src, nbits);
}

static inline __attribute__((always_inline)) int bitmap_equal(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  return ! ((*src1 ^ *src2) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_equal(src1, src2, nbits);
}

static inline __attribute__((always_inline)) int bitmap_intersects(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  return ((*src1 & *src2) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL )) != 0;
 else
  return __bitmap_intersects(src1, src2, nbits);
}

static inline __attribute__((always_inline)) int bitmap_subset(const unsigned long *src1,
   const unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  return ! ((*src1 & ~(*src2)) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_subset(src1, src2, nbits);
}

static inline __attribute__((always_inline)) int bitmap_empty(const unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  return ! (*src & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_empty(src, nbits);
}

static inline __attribute__((always_inline)) int bitmap_full(const unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  return ! (~(*src) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 else
  return __bitmap_full(src, nbits);
}

static inline __attribute__((always_inline)) int bitmap_weight(const unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  return hweight_long(*src & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL ));
 return __bitmap_weight(src, nbits);
}

static inline __attribute__((always_inline)) void bitmap_shift_right(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  *dst = *src >> n;
 else
  __bitmap_shift_right(dst, src, n, nbits);
}

static inline __attribute__((always_inline)) void bitmap_shift_left(unsigned long *dst,
   const unsigned long *src, int n, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 32))
  *dst = (*src << n) & ( ((nbits) % 32) ? (1UL<<((nbits) % 32))-1 : ~0UL );
 else
  __bitmap_shift_left(dst, src, n, nbits);
}

static inline __attribute__((always_inline)) int bitmap_parse(const char *buf, unsigned int buflen,
   unsigned long *maskp, int nmaskbits)
{
 return __bitmap_parse(buf, buflen, 0, maskp, nmaskbits);
}
# 90 "include/linux/nodemask.h" 2


typedef struct { unsigned long bits[((((1 << 0)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } nodemask_t;
extern nodemask_t _unused_nodemask_arg_;


static inline __attribute__((always_inline)) void __node_set(int node, volatile nodemask_t *dstp)
{
 (__builtin_constant_p(node) ? ____atomic_set_bit(node, dstp->bits) : _set_bit_le(node,dstp->bits));
}


static inline __attribute__((always_inline)) void __node_clear(int node, volatile nodemask_t *dstp)
{
 (__builtin_constant_p(node) ? ____atomic_clear_bit(node, dstp->bits) : _clear_bit_le(node,dstp->bits));
}


static inline __attribute__((always_inline)) void __nodes_setall(nodemask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline __attribute__((always_inline)) void __nodes_clear(nodemask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}






static inline __attribute__((always_inline)) int __node_test_and_set(int node, nodemask_t *addr)
{
 return (__builtin_constant_p(node) ? ____atomic_test_and_set_bit(node, addr->bits) : _test_and_set_bit_le(node,addr->bits));
}



static inline __attribute__((always_inline)) void __nodes_and(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_or(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_xor(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_andnot(nodemask_t *dstp, const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_complement(nodemask_t *dstp,
     const nodemask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodes_equal(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodes_intersects(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodes_subset(const nodemask_t *src1p,
     const nodemask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) int __nodes_empty(const nodemask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __nodes_full(const nodemask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __nodes_weight(const nodemask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_shift_right(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline __attribute__((always_inline)) void __nodes_shift_left(nodemask_t *dstp,
     const nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}





static inline __attribute__((always_inline)) int __first_node(const nodemask_t *srcp)
{
 return ({ int __min1 = ((1 << 0)); int __min2 = (_find_first_bit_le(srcp->bits,(1 << 0))); __min1 < __min2 ? __min1: __min2; });
}


static inline __attribute__((always_inline)) int __next_node(int n, const nodemask_t *srcp)
{
 return ({ int __min1 = ((1 << 0)); int __min2 = (_find_next_bit_le(srcp->bits,(1 << 0),n+1)); __min1 < __min2 ? __min1: __min2; });
}
# 255 "include/linux/nodemask.h"
static inline __attribute__((always_inline)) int __first_unset_node(const nodemask_t *maskp)
{
 return ({ int __min1 = ((1 << 0)); int __min2 = (_find_first_zero_bit_le(maskp->bits,(1 << 0))); __min1 < __min2 ? __min1: __min2; });

}
# 289 "include/linux/nodemask.h"
static inline __attribute__((always_inline)) int __nodemask_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodemask_parse_user(const char *buf, int len,
     nodemask_t *dstp, int nbits)
{
 return bitmap_parse_user(buf, len, dstp->bits, nbits);
}



static inline __attribute__((always_inline)) int __nodelist_scnprintf(char *buf, int len,
     const nodemask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __nodelist_parse(const char *buf, nodemask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline __attribute__((always_inline)) int __node_remap(int oldbit,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_remap(nodemask_t *dstp, const nodemask_t *srcp,
  const nodemask_t *oldp, const nodemask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_onto(nodemask_t *dstp, const nodemask_t *origp,
  const nodemask_t *relmapp, int nbits)
{
 bitmap_onto(dstp->bits, origp->bits, relmapp->bits, nbits);
}



static inline __attribute__((always_inline)) void __nodes_fold(nodemask_t *dstp, const nodemask_t *origp,
  int sz, int nbits)
{
 bitmap_fold(dstp->bits, origp->bits, sz, nbits);
}
# 363 "include/linux/nodemask.h"
enum node_states {
 N_POSSIBLE,
 N_ONLINE,
 N_NORMAL_MEMORY,



 N_HIGH_MEMORY = N_NORMAL_MEMORY,

 N_CPU,
 NR_NODE_STATES
};






extern nodemask_t node_states[NR_NODE_STATES];
# 413 "include/linux/nodemask.h"
static inline __attribute__((always_inline)) int node_state(int node, enum node_states state)
{
 return node == 0;
}

static inline __attribute__((always_inline)) void node_set_state(int node, enum node_states state)
{
}

static inline __attribute__((always_inline)) void node_clear_state(int node, enum node_states state)
{
}

static inline __attribute__((always_inline)) int num_node_state(enum node_states state)
{
 return 1;
}
# 17 "include/linux/mmzone.h" 2
# 1 "include/linux/pageblock-flags.h" 1
# 29 "include/linux/pageblock-flags.h"
enum pageblock_bits {
 PB_migrate,
 PB_migrate_end = PB_migrate + 3 - 1,

 NR_PAGEBLOCK_BITS
};
# 60 "include/linux/pageblock-flags.h"
struct page;


unsigned long get_pageblock_flags_group(struct page *page,
     int start_bitidx, int end_bitidx);
void set_pageblock_flags_group(struct page *page, unsigned long flags,
     int start_bitidx, int end_bitidx);
# 18 "include/linux/mmzone.h" 2
# 1 "include/linux/bounds.h" 1
# 19 "include/linux/mmzone.h" 2

# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/page.h" 1
# 26 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/page.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/glue.h" 1
# 27 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/page.h" 2
# 111 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/page.h"
struct page;

struct cpu_user_fns {
 void (*cpu_clear_user_highpage)(struct page *page, unsigned long vaddr);
 void (*cpu_copy_user_highpage)(struct page *to, struct page *from,
   unsigned long vaddr);
};


extern struct cpu_user_fns cpu_user;
# 143 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/page.h"
extern void copy_page(void *to, const void *from);
# 169 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/page.h"
typedef unsigned long pte_t;
typedef unsigned long pmd_t;
typedef unsigned long pgd_t[2];
typedef unsigned long pgprot_t;
# 187 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/page.h"
typedef struct page *pgtable_t;
# 204 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/page.h"
# 1 "include/asm-generic/page.h" 1
# 9 "include/asm-generic/page.h"
static __inline__ __attribute__((always_inline)) __attribute__((__const__)) int get_order(unsigned long size)
{
 int order;

 size = (size - 1) >> (12 - 1);
 order = -1;
 do {
  size >>= 1;
  order++;
 } while (size);
 return order;
}
# 205 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/page.h" 2
# 21 "include/linux/mmzone.h" 2
# 49 "include/linux/mmzone.h"
extern int page_group_by_mobility_disabled;

static inline __attribute__((always_inline)) int get_pageblock_migratetype(struct page *page)
{
 if (__builtin_expect(!!(page_group_by_mobility_disabled), 0))
  return 0;

 return get_pageblock_flags_group(page, PB_migrate, PB_migrate_end);
}

struct free_area {
 struct list_head free_list[5];
 unsigned long nr_free;
};

struct pglist_data;
# 81 "include/linux/mmzone.h"
enum zone_stat_item {

 NR_FREE_PAGES,
 NR_LRU_BASE,
 NR_INACTIVE_ANON = NR_LRU_BASE,
 NR_ACTIVE_ANON,
 NR_INACTIVE_FILE,
 NR_ACTIVE_FILE,

 NR_UNEVICTABLE,
 NR_MLOCK,




 NR_ANON_PAGES,
 NR_FILE_MAPPED,

 NR_FILE_PAGES,
 NR_FILE_DIRTY,
 NR_WRITEBACK,
 NR_SLAB_RECLAIMABLE,
 NR_SLAB_UNRECLAIMABLE,
 NR_PAGETABLE,
 NR_UNSTABLE_NFS,
 NR_BOUNCE,
 NR_VMSCAN_WRITE,

 NR_WRITEBACK_TEMP,
# 118 "include/linux/mmzone.h"
 NR_VM_ZONE_STAT_ITEMS };
# 133 "include/linux/mmzone.h"
enum lru_list {
 LRU_INACTIVE_ANON = 0,
 LRU_ACTIVE_ANON = 0 + 1,
 LRU_INACTIVE_FILE = 0 + 2,
 LRU_ACTIVE_FILE = 0 + 2 + 1,

 LRU_UNEVICTABLE,



 NR_LRU_LISTS
};





static inline __attribute__((always_inline)) int is_file_lru(enum lru_list l)
{
 return (l == LRU_INACTIVE_FILE || l == LRU_ACTIVE_FILE);
}

static inline __attribute__((always_inline)) int is_active_lru(enum lru_list l)
{
 return (l == LRU_ACTIVE_ANON || l == LRU_ACTIVE_FILE);
}

static inline __attribute__((always_inline)) int is_unevictable_lru(enum lru_list l)
{

 return (l == LRU_UNEVICTABLE);



}

struct per_cpu_pages {
 int count;
 int high;
 int batch;
 struct list_head list;
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp;







} ;
# 195 "include/linux/mmzone.h"
enum zone_type {
# 230 "include/linux/mmzone.h"
 ZONE_NORMAL,
# 242 "include/linux/mmzone.h"
 ZONE_MOVABLE,
 __MAX_NR_ZONES
};
# 266 "include/linux/mmzone.h"
struct zone_reclaim_stat {
# 275 "include/linux/mmzone.h"
 unsigned long recent_rotated[2];
 unsigned long recent_scanned[2];
};

struct zone {

 unsigned long pages_min, pages_low, pages_high;
# 290 "include/linux/mmzone.h"
 unsigned long lowmem_reserve[2];
# 301 "include/linux/mmzone.h"
 struct per_cpu_pageset pageset[1];




 spinlock_t lock;




 struct free_area free_area[11];






 unsigned long *pageblock_flags;






 spinlock_t lru_lock;
 struct {
  struct list_head list;
  unsigned long nr_scan;
 } lru[NR_LRU_LISTS];

 struct zone_reclaim_stat reclaim_stat;

 unsigned long pages_scanned;
 unsigned long flags;


 atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];
# 352 "include/linux/mmzone.h"
 int prev_priority;





 unsigned int inactive_ratio;



# 388 "include/linux/mmzone.h"
 wait_queue_head_t * wait_table;
 unsigned long wait_table_hash_nr_entries;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;

 unsigned long zone_start_pfn;
# 409 "include/linux/mmzone.h"
 unsigned long spanned_pages;
 unsigned long present_pages;




 const char *name;
} ;

typedef enum {
 ZONE_ALL_UNRECLAIMABLE,
 ZONE_RECLAIM_LOCKED,
 ZONE_OOM_LOCKED,
} zone_flags_t;

static inline __attribute__((always_inline)) void zone_set_flag(struct zone *zone, zone_flags_t flag)
{
 (__builtin_constant_p(flag) ? ____atomic_set_bit(flag, &zone->flags) : _set_bit_le(flag,&zone->flags));
}

static inline __attribute__((always_inline)) int zone_test_and_set_flag(struct zone *zone, zone_flags_t flag)
{
 return (__builtin_constant_p(flag) ? ____atomic_test_and_set_bit(flag, &zone->flags) : _test_and_set_bit_le(flag,&zone->flags));
}

static inline __attribute__((always_inline)) void zone_clear_flag(struct zone *zone, zone_flags_t flag)
{
 (__builtin_constant_p(flag) ? ____atomic_clear_bit(flag, &zone->flags) : _clear_bit_le(flag,&zone->flags));
}

static inline __attribute__((always_inline)) int zone_is_all_unreclaimable(const struct zone *zone)
{
 return test_bit(ZONE_ALL_UNRECLAIMABLE, &zone->flags);
}

static inline __attribute__((always_inline)) int zone_is_reclaim_locked(const struct zone *zone)
{
 return test_bit(ZONE_RECLAIM_LOCKED, &zone->flags);
}

static inline __attribute__((always_inline)) int zone_is_oom_locked(const struct zone *zone)
{
 return test_bit(ZONE_OOM_LOCKED, &zone->flags);
}
# 542 "include/linux/mmzone.h"
struct zonelist_cache;






struct zoneref {
 struct zone *zone;
 int zone_idx;
};
# 571 "include/linux/mmzone.h"
struct zonelist {
 struct zonelist_cache *zlcache_ptr;
 struct zoneref _zonerefs[((1 << 0) * 2) + 1];



};
# 589 "include/linux/mmzone.h"
extern struct page *mem_map;
# 603 "include/linux/mmzone.h"
struct bootmem_data;
typedef struct pglist_data {
 struct zone node_zones[2];
 struct zonelist node_zonelists[1];
 int nr_zones;

 struct page *node_mem_map;




 struct bootmem_data *bdata;
# 625 "include/linux/mmzone.h"
 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 wait_queue_head_t kswapd_wait;
 struct task_struct *kswapd;
 int kswapd_max_order;
} pg_data_t;
# 644 "include/linux/mmzone.h"
# 1 "include/linux/memory_hotplug.h" 1



# 1 "include/linux/mmzone.h" 1
# 5 "include/linux/memory_hotplug.h" 2

# 1 "include/linux/notifier.h" 1
# 13 "include/linux/notifier.h"
# 1 "include/linux/mutex.h" 1
# 32 "include/linux/mutex.h"
struct mutex {
 struct rt_mutex lock;



};
# 49 "include/linux/mutex.h"
extern void
__mutex_init(struct mutex *lock, char *name, struct lock_class_key *key);

extern void __attribute__((section(".spinlock.text"))) _mutex_lock(struct mutex *lock);
extern int __attribute__((section(".spinlock.text"))) _mutex_lock_interruptible(struct mutex *lock);
extern int __attribute__((section(".spinlock.text"))) _mutex_lock_killable(struct mutex *lock);
extern void __attribute__((section(".spinlock.text"))) _mutex_lock_nested(struct mutex *lock, int subclass);
extern int __attribute__((section(".spinlock.text"))) _mutex_lock_interruptible_nested(struct mutex *lock, int subclass);
extern int __attribute__((section(".spinlock.text"))) _mutex_lock_killable_nested(struct mutex *lock, int subclass);
extern int __attribute__((section(".spinlock.text"))) _mutex_trylock(struct mutex *lock);
extern void __attribute__((section(".spinlock.text"))) _mutex_unlock(struct mutex *lock);
# 228 "include/linux/mutex.h"
static inline __attribute__((always_inline)) int atomic_dec_and_mutex_lock(atomic_t *cnt, struct mutex *lock)
{

 if (atomic_add_unless(cnt, -1, 1))
  return 0;

 _mutex_lock(lock);
 if (!(atomic_sub_return(1, cnt) == 0)) {

  _mutex_unlock(lock);
  return 0;
 }

 return 1;
}
# 14 "include/linux/notifier.h" 2
# 1 "include/linux/rwsem.h" 1
# 28 "include/linux/rwsem.h"
struct compat_rw_semaphore;


# 1 "include/linux/rwsem-spinlock.h" 1
# 22 "include/linux/rwsem-spinlock.h"
struct rwsem_waiter;
# 31 "include/linux/rwsem-spinlock.h"
struct compat_rw_semaphore {
 __s32 activity;
 spinlock_t wait_lock;
 struct list_head wait_list;



};
# 52 "include/linux/rwsem-spinlock.h"
extern void __compat_init_rwsem(struct compat_rw_semaphore *sem, const char *name,
    struct lock_class_key *key);
# 62 "include/linux/rwsem-spinlock.h"
extern void __down_read(struct compat_rw_semaphore *sem);
extern int __down_read_trylock(struct compat_rw_semaphore *sem);
extern void __down_write(struct compat_rw_semaphore *sem);
extern void __down_write_nested(struct compat_rw_semaphore *sem, int subclass);
extern int __down_write_trylock(struct compat_rw_semaphore *sem);
extern void __up_read(struct compat_rw_semaphore *sem);
extern void __up_write(struct compat_rw_semaphore *sem);
extern void __downgrade_write(struct compat_rw_semaphore *sem);

static inline __attribute__((always_inline)) int compat_rwsem_is_locked(struct compat_rw_semaphore *sem)
{
 return (sem->activity != 0);
}
# 32 "include/linux/rwsem.h" 2
# 43 "include/linux/rwsem.h"
extern void compat_down_read(struct compat_rw_semaphore *sem);




extern int compat_down_read_trylock(struct compat_rw_semaphore *sem);




extern void compat_down_write(struct compat_rw_semaphore *sem);




extern int compat_down_write_trylock(struct compat_rw_semaphore *sem);




extern void compat_up_read(struct compat_rw_semaphore *sem);




extern void compat_up_write(struct compat_rw_semaphore *sem);




extern void compat_downgrade_write(struct compat_rw_semaphore *sem);
# 15 "include/linux/notifier.h" 2
# 1 "include/linux/srcu.h" 1
# 32 "include/linux/srcu.h"
struct srcu_struct_array {
 int c[2];
};

struct srcu_struct {
 int completed;
 struct srcu_struct_array *per_cpu_ref;
 struct mutex mutex;
};







int init_srcu_struct(struct srcu_struct *sp);
void cleanup_srcu_struct(struct srcu_struct *sp);
int srcu_read_lock(struct srcu_struct *sp) ;
void srcu_read_unlock(struct srcu_struct *sp, int idx) ;
void synchronize_srcu(struct srcu_struct *sp);
long srcu_batches_completed(struct srcu_struct *sp);





struct qrcu_struct {
 int completed;
 atomic_t ctr[2];
 wait_queue_head_t wq;
 struct mutex mutex;
};

int init_qrcu_struct(struct qrcu_struct *qp);
int qrcu_read_lock(struct qrcu_struct *qp);
void qrcu_read_unlock(struct qrcu_struct *qp, int idx);
void synchronize_qrcu(struct qrcu_struct *qp);

static inline __attribute__((always_inline)) void cleanup_qrcu_struct(struct qrcu_struct *qp)
{
}
# 16 "include/linux/notifier.h" 2
# 50 "include/linux/notifier.h"
struct notifier_block {
 int (*notifier_call)(struct notifier_block *, unsigned long, void *);
 struct notifier_block *next;
 int priority;
};

struct atomic_notifier_head {
 spinlock_t lock;
 struct notifier_block *head;
};

struct blocking_notifier_head {
 struct rw_semaphore rwsem;
 struct notifier_block *head;
};

struct raw_notifier_head {
 struct notifier_block *head;
};

struct srcu_notifier_head {
 struct mutex mutex;
 struct srcu_struct srcu;
 struct notifier_block *head;
};
# 89 "include/linux/notifier.h"
extern void srcu_init_notifier_head(struct srcu_notifier_head *nh);
# 115 "include/linux/notifier.h"
extern int atomic_notifier_chain_register(struct atomic_notifier_head *nh,
  struct notifier_block *nb);
extern int blocking_notifier_chain_register(struct blocking_notifier_head *nh,
  struct notifier_block *nb);
extern int raw_notifier_chain_register(struct raw_notifier_head *nh,
  struct notifier_block *nb);
extern int srcu_notifier_chain_register(struct srcu_notifier_head *nh,
  struct notifier_block *nb);

extern int blocking_notifier_chain_cond_register(
  struct blocking_notifier_head *nh,
  struct notifier_block *nb);

extern int atomic_notifier_chain_unregister(struct atomic_notifier_head *nh,
  struct notifier_block *nb);
extern int blocking_notifier_chain_unregister(struct blocking_notifier_head *nh,
  struct notifier_block *nb);
extern int raw_notifier_chain_unregister(struct raw_notifier_head *nh,
  struct notifier_block *nb);
extern int srcu_notifier_chain_unregister(struct srcu_notifier_head *nh,
  struct notifier_block *nb);

extern int atomic_notifier_call_chain(struct atomic_notifier_head *nh,
  unsigned long val, void *v);
extern int __atomic_notifier_call_chain(struct atomic_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int blocking_notifier_call_chain(struct blocking_notifier_head *nh,
  unsigned long val, void *v);
extern int __blocking_notifier_call_chain(struct blocking_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int raw_notifier_call_chain(struct raw_notifier_head *nh,
  unsigned long val, void *v);
extern int __raw_notifier_call_chain(struct raw_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int srcu_notifier_call_chain(struct srcu_notifier_head *nh,
  unsigned long val, void *v);
extern int __srcu_notifier_call_chain(struct srcu_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
# 165 "include/linux/notifier.h"
static inline __attribute__((always_inline)) int notifier_from_errno(int err)
{
 return 0x8000 | (0x0001 - err);
}


static inline __attribute__((always_inline)) int notifier_to_errno(int ret)
{
 ret &= ~0x8000;
 return ret > 0x0001 ? 0x0001 - ret : 0;
}
# 258 "include/linux/notifier.h"
extern struct blocking_notifier_head reboot_notifier_list;
# 7 "include/linux/memory_hotplug.h" 2

struct page;
struct zone;
struct pglist_data;
struct mem_section;
# 165 "include/linux/memory_hotplug.h"
static inline __attribute__((always_inline)) void pgdat_resize_lock(struct pglist_data *p, unsigned long *f) {}
static inline __attribute__((always_inline)) void pgdat_resize_unlock(struct pglist_data *p, unsigned long *f) {}
static inline __attribute__((always_inline)) void pgdat_resize_init(struct pglist_data *pgdat) {}

static inline __attribute__((always_inline)) unsigned zone_span_seqbegin(struct zone *zone)
{
 return 0;
}
static inline __attribute__((always_inline)) int zone_span_seqretry(struct zone *zone, unsigned iv)
{
 return 0;
}
static inline __attribute__((always_inline)) void zone_span_writelock(struct zone *zone) {}
static inline __attribute__((always_inline)) void zone_span_writeunlock(struct zone *zone) {}
static inline __attribute__((always_inline)) void zone_seqlock_init(struct zone *zone) {}

static inline __attribute__((always_inline)) int mhp_notimplemented(const char *func)
{
 printk("<4>" "%s() called, with CONFIG_MEMORY_HOTPLUG disabled\n", func);
 dump_stack();
 return -38;
}

static inline __attribute__((always_inline)) void register_page_bootmem_info_node(struct pglist_data *pgdat)
{
}







extern int walk_memory_resource(unsigned long start_pfn,
   unsigned long nr_pages, void *arg,
   int (*func)(unsigned long, unsigned long, void *));






static inline __attribute__((always_inline)) int is_mem_section_removable(unsigned long pfn,
     unsigned long nr_pages)
{
 return 0;
}


extern int add_memory(int nid, u64 start, u64 size);
extern int arch_add_memory(int nid, u64 start, u64 size);
extern int remove_memory(u64 start, u64 size);
extern int sparse_add_one_section(struct zone *zone, unsigned long start_pfn,
        int nr_pages);
extern void sparse_remove_one_section(struct zone *zone, struct mem_section *ms);
extern struct page *sparse_decode_mem_map(unsigned long coded_mem_map,
       unsigned long pnum);
# 645 "include/linux/mmzone.h" 2

void get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free);
void build_all_zonelists(void);
void wakeup_kswapd(struct zone *zone, int order);
int zone_watermark_ok(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);
enum memmap_context {
 MEMMAP_EARLY,
 MEMMAP_HOTPLUG,
};
extern int init_currently_empty_zone(struct zone *zone, unsigned long start_pfn,
         unsigned long size,
         enum memmap_context context);




static inline __attribute__((always_inline)) void memory_present(int nid, unsigned long start, unsigned long end) {}
# 675 "include/linux/mmzone.h"
static inline __attribute__((always_inline)) int populated_zone(struct zone *zone)
{
 return (!!zone->present_pages);
}

extern int movable_zone;

static inline __attribute__((always_inline)) int zone_movable_is_highmem(void)
{



 return 0;

}

static inline __attribute__((always_inline)) int is_highmem_idx(enum zone_type idx)
{




 return 0;

}

static inline __attribute__((always_inline)) int is_normal_idx(enum zone_type idx)
{
 return (idx == ZONE_NORMAL);
}







static inline __attribute__((always_inline)) int is_highmem(struct zone *zone)
{






 return 0;

}

static inline __attribute__((always_inline)) int is_normal(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + ZONE_NORMAL;
}

static inline __attribute__((always_inline)) int is_dma32(struct zone *zone)
{



 return 0;

}

static inline __attribute__((always_inline)) int is_dma(struct zone *zone)
{



 return 0;

}


struct ctl_table;
struct file;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int sysctl_lowmem_reserve_ratio[2 -1];
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int percpu_pagelist_fraction_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int sysctl_min_unmapped_ratio_sysctl_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);
int sysctl_min_slab_ratio_sysctl_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);

extern int numa_zonelist_order_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);
extern char numa_zonelist_order[];




extern struct pglist_data contig_page_data;
# 779 "include/linux/mmzone.h"
extern struct pglist_data *first_online_pgdat(void);
extern struct pglist_data *next_online_pgdat(struct pglist_data *pgdat);
extern struct zone *next_zone(struct zone *zone);
# 803 "include/linux/mmzone.h"
static inline __attribute__((always_inline)) struct zone *zonelist_zone(struct zoneref *zoneref)
{
 return zoneref->zone;
}

static inline __attribute__((always_inline)) int zonelist_zone_idx(struct zoneref *zoneref)
{
 return zoneref->zone_idx;
}

static inline __attribute__((always_inline)) int zonelist_node_idx(struct zoneref *zoneref)
{




 return 0;

}
# 836 "include/linux/mmzone.h"
struct zoneref *next_zones_zonelist(struct zoneref *z,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone);
# 853 "include/linux/mmzone.h"
static inline __attribute__((always_inline)) struct zoneref *first_zones_zonelist(struct zonelist *zonelist,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone)
{
 return next_zones_zonelist(zonelist->_zonerefs, highest_zoneidx, nodes,
        zone);
}
# 896 "include/linux/mmzone.h"
static inline __attribute__((always_inline)) unsigned long early_pfn_to_nid(unsigned long pfn)
{
 return 0;
}
# 1077 "include/linux/mmzone.h"
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) node_memmap_size_bytes(int, unsigned long, unsigned long);
# 5 "include/linux/gfp.h" 2


# 1 "include/linux/topology.h" 1
# 30 "include/linux/topology.h"
# 1 "include/linux/cpumask.h" 1
# 144 "include/linux/cpumask.h"
typedef struct cpumask { unsigned long bits[(((1) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } cpumask_t;
extern cpumask_t _unused_cpumask_arg_;



static inline __attribute__((always_inline)) void __cpu_set(int cpu, volatile cpumask_t *dstp)
{
 (__builtin_constant_p(cpu) ? ____atomic_set_bit(cpu, dstp->bits) : _set_bit_le(cpu,dstp->bits));
}


static inline __attribute__((always_inline)) void __cpu_clear(int cpu, volatile cpumask_t *dstp)
{
 (__builtin_constant_p(cpu) ? ____atomic_clear_bit(cpu, dstp->bits) : _clear_bit_le(cpu,dstp->bits));
}


static inline __attribute__((always_inline)) void __cpus_setall(cpumask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline __attribute__((always_inline)) void __cpus_clear(cpumask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}





static inline __attribute__((always_inline)) int __cpu_test_and_set(int cpu, cpumask_t *addr)
{
 return (__builtin_constant_p(cpu) ? ____atomic_test_and_set_bit(cpu, addr->bits) : _test_and_set_bit_le(cpu,addr->bits));
}


static inline __attribute__((always_inline)) void __cpus_and(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) void __cpus_or(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) void __cpus_xor(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline __attribute__((always_inline)) void __cpus_andnot(cpumask_t *dstp, const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) void __cpus_complement(cpumask_t *dstp,
     const cpumask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_equal(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_intersects(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_subset(const cpumask_t *src1p,
     const cpumask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_empty(const cpumask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_full(const cpumask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline __attribute__((always_inline)) int __cpus_weight(const cpumask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline __attribute__((always_inline)) void __cpus_shift_right(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline __attribute__((always_inline)) void __cpus_shift_left(cpumask_t *dstp,
     const cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}
# 287 "include/linux/cpumask.h"
static inline __attribute__((always_inline)) int __check_is_bitmap(const unsigned long *bitmap)
{
 return 1;
}
# 299 "include/linux/cpumask.h"
extern const unsigned long
 cpu_bit_bitmap[32 +1][(((1) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];

static inline __attribute__((always_inline)) const struct cpumask *get_cpu_mask(unsigned int cpu)
{
 const unsigned long *p = cpu_bit_bitmap[1 + cpu % 32];
 p -= cpu / 32;
 return ((struct cpumask *)(1 ? (p) : (void *)sizeof(__check_is_bitmap(p))));
}
# 366 "include/linux/cpumask.h"
static inline __attribute__((always_inline)) int __cpu_remap(int oldbit,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline __attribute__((always_inline)) void __cpus_remap(cpumask_t *dstp, const cpumask_t *srcp,
  const cpumask_t *oldp, const cpumask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}



static inline __attribute__((always_inline)) void __cpus_onto(cpumask_t *dstp, const cpumask_t *origp,
  const cpumask_t *relmapp, int nbits)
{
 bitmap_onto(dstp->bits, origp->bits, relmapp->bits, nbits);
}



static inline __attribute__((always_inline)) void __cpus_fold(cpumask_t *dstp, const cpumask_t *origp,
  int sz, int nbits)
{
 bitmap_fold(dstp->bits, origp->bits, sz, nbits);
}
# 485 "include/linux/cpumask.h"
extern const struct cpumask *const cpu_possible_mask;
extern const struct cpumask *const cpu_online_mask;
extern const struct cpumask *const cpu_present_mask;
extern const struct cpumask *const cpu_active_mask;
# 544 "include/linux/cpumask.h"
static inline __attribute__((always_inline)) unsigned int cpumask_check(unsigned int cpu)
{



 return cpu;
}



static inline __attribute__((always_inline)) unsigned int cpumask_first(const struct cpumask *srcp)
{
 return 0;
}


static inline __attribute__((always_inline)) unsigned int cpumask_next(int n, const struct cpumask *srcp)
{
 return n+1;
}

static inline __attribute__((always_inline)) unsigned int cpumask_next_zero(int n, const struct cpumask *srcp)
{
 return n+1;
}

static inline __attribute__((always_inline)) unsigned int cpumask_next_and(int n,
         const struct cpumask *srcp,
         const struct cpumask *andp)
{
 return n+1;
}


static inline __attribute__((always_inline)) unsigned int cpumask_any_but(const struct cpumask *mask,
        unsigned int cpu)
{
 return 1;
}
# 680 "include/linux/cpumask.h"
static inline __attribute__((always_inline)) void cpumask_set_cpu(unsigned int cpu, struct cpumask *dstp)
{
 (__builtin_constant_p(cpumask_check(cpu)) ? ____atomic_set_bit(cpumask_check(cpu), ((dstp)->bits)) : _set_bit_le(cpumask_check(cpu),((dstp)->bits)));
}






static inline __attribute__((always_inline)) void cpumask_clear_cpu(int cpu, struct cpumask *dstp)
{
 (__builtin_constant_p(cpumask_check(cpu)) ? ____atomic_clear_bit(cpumask_check(cpu), ((dstp)->bits)) : _clear_bit_le(cpumask_check(cpu),((dstp)->bits)));
}
# 712 "include/linux/cpumask.h"
static inline __attribute__((always_inline)) int cpumask_test_and_set_cpu(int cpu, struct cpumask *cpumask)
{
 return (__builtin_constant_p(cpumask_check(cpu)) ? ____atomic_test_and_set_bit(cpumask_check(cpu), ((cpumask)->bits)) : _test_and_set_bit_le(cpumask_check(cpu),((cpumask)->bits)));
}





static inline __attribute__((always_inline)) void cpumask_setall(struct cpumask *dstp)
{
 bitmap_fill(((dstp)->bits), 1);
}





static inline __attribute__((always_inline)) void cpumask_clear(struct cpumask *dstp)
{
 bitmap_zero(((dstp)->bits), 1);
}







static inline __attribute__((always_inline)) void cpumask_and(struct cpumask *dstp,
          const struct cpumask *src1p,
          const struct cpumask *src2p)
{
 bitmap_and(((dstp)->bits), ((src1p)->bits),
           ((src2p)->bits), 1);
}







static inline __attribute__((always_inline)) void cpumask_or(struct cpumask *dstp, const struct cpumask *src1p,
         const struct cpumask *src2p)
{
 bitmap_or(((dstp)->bits), ((src1p)->bits),
          ((src2p)->bits), 1);
}







static inline __attribute__((always_inline)) void cpumask_xor(struct cpumask *dstp,
          const struct cpumask *src1p,
          const struct cpumask *src2p)
{
 bitmap_xor(((dstp)->bits), ((src1p)->bits),
           ((src2p)->bits), 1);
}







static inline __attribute__((always_inline)) void cpumask_andnot(struct cpumask *dstp,
      const struct cpumask *src1p,
      const struct cpumask *src2p)
{
 bitmap_andnot(((dstp)->bits), ((src1p)->bits),
       ((src2p)->bits), 1);
}






static inline __attribute__((always_inline)) void cpumask_complement(struct cpumask *dstp,
          const struct cpumask *srcp)
{
 bitmap_complement(((dstp)->bits), ((srcp)->bits),
           1);
}






static inline __attribute__((always_inline)) bool cpumask_equal(const struct cpumask *src1p,
    const struct cpumask *src2p)
{
 return bitmap_equal(((src1p)->bits), ((src2p)->bits),
       1);
}






static inline __attribute__((always_inline)) bool cpumask_intersects(const struct cpumask *src1p,
         const struct cpumask *src2p)
{
 return bitmap_intersects(((src1p)->bits), ((src2p)->bits),
            1);
}






static inline __attribute__((always_inline)) int cpumask_subset(const struct cpumask *src1p,
     const struct cpumask *src2p)
{
 return bitmap_subset(((src1p)->bits), ((src2p)->bits),
        1);
}





static inline __attribute__((always_inline)) bool cpumask_empty(const struct cpumask *srcp)
{
 return bitmap_empty(((srcp)->bits), 1);
}





static inline __attribute__((always_inline)) bool cpumask_full(const struct cpumask *srcp)
{
 return bitmap_full(((srcp)->bits), 1);
}





static inline __attribute__((always_inline)) unsigned int cpumask_weight(const struct cpumask *srcp)
{
 return bitmap_weight(((srcp)->bits), 1);
}







static inline __attribute__((always_inline)) void cpumask_shift_right(struct cpumask *dstp,
           const struct cpumask *srcp, int n)
{
 bitmap_shift_right(((dstp)->bits), ((srcp)->bits), n,
            1);
}







static inline __attribute__((always_inline)) void cpumask_shift_left(struct cpumask *dstp,
          const struct cpumask *srcp, int n)
{
 bitmap_shift_left(((dstp)->bits), ((srcp)->bits), n,
           1);
}






static inline __attribute__((always_inline)) void cpumask_copy(struct cpumask *dstp,
    const struct cpumask *srcp)
{
 bitmap_copy(((dstp)->bits), ((srcp)->bits), 1);
}
# 943 "include/linux/cpumask.h"
static inline __attribute__((always_inline)) int cpumask_scnprintf(char *buf, int len,
        const struct cpumask *srcp)
{
 return bitmap_scnprintf(buf, len, ((srcp)->bits), 1);
}
# 957 "include/linux/cpumask.h"
static inline __attribute__((always_inline)) int cpumask_parse_user(const char *buf, int len,
         struct cpumask *dstp)
{
 return bitmap_parse_user(buf, len, ((dstp)->bits), 1);
}
# 972 "include/linux/cpumask.h"
static inline __attribute__((always_inline)) int cpulist_scnprintf(char *buf, int len,
        const struct cpumask *srcp)
{
 return bitmap_scnlistprintf(buf, len, ((srcp)->bits),
        1);
}
# 987 "include/linux/cpumask.h"
static inline __attribute__((always_inline)) int cpulist_parse(const char *buf, struct cpumask *dstp)
{
 return bitmap_parselist(buf, ((dstp)->bits), 1);
}






static inline __attribute__((always_inline)) size_t cpumask_size(void)
{


 return (((1) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(long);
}
# 1030 "include/linux/cpumask.h"
typedef struct cpumask cpumask_var_t[1];

static inline __attribute__((always_inline)) bool alloc_cpumask_var(cpumask_var_t *mask, gfp_t flags)
{
 return true;
}

static inline __attribute__((always_inline)) bool alloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags,
       int node)
{
 return true;
}

static inline __attribute__((always_inline)) void alloc_bootmem_cpumask_var(cpumask_var_t *mask)
{
}

static inline __attribute__((always_inline)) void free_cpumask_var(cpumask_var_t mask)
{
}

static inline __attribute__((always_inline)) void free_bootmem_cpumask_var(cpumask_var_t mask)
{
}




extern const unsigned long cpu_all_bits[(((1) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
# 1069 "include/linux/cpumask.h"
void set_cpu_possible(unsigned int cpu, bool possible);
void set_cpu_present(unsigned int cpu, bool present);
void set_cpu_online(unsigned int cpu, bool online);
void set_cpu_active(unsigned int cpu, bool active);
void init_cpu_present(const struct cpumask *src);
void init_cpu_possible(const struct cpumask *src);
void init_cpu_online(const struct cpumask *src);
# 31 "include/linux/topology.h" 2


# 1 "include/linux/smp.h" 1
# 14 "include/linux/smp.h"
extern void cpu_idle(void);

struct call_single_data {
 struct list_head list;
 void (*func) (void *info);
 void *info;
 u16 flags;
 u16 priv;
};


extern unsigned int total_cpus;

int smp_call_function_single(int cpuid, void (*func) (void *info), void *info,
    int wait);
# 135 "include/linux/smp.h"
static inline __attribute__((always_inline)) void smp_send_stop(void) { }





static inline __attribute__((always_inline)) int up_smp_call_function(void (*func)(void *), void *info)
{
 return 0;
}
# 154 "include/linux/smp.h"
static inline __attribute__((always_inline)) void smp_send_reschedule(int cpu) { }
static inline __attribute__((always_inline)) void smp_send_reschedule_allbutself(void) { }






static inline __attribute__((always_inline)) void init_call_single_data(void)
{
}
# 197 "include/linux/smp.h"
extern void arch_disable_smp_support(void);

void smp_setup_processor_id(void);
# 34 "include/linux/topology.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/topology.h" 1



# 1 "include/asm-generic/topology.h" 1
# 5 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/topology.h" 2
# 35 "include/linux/topology.h" 2
# 48 "include/linux/topology.h"
int arch_update_cpu_topology(void);
# 8 "include/linux/gfp.h" 2

struct vm_area_struct;
# 109 "include/linux/gfp.h"
static inline __attribute__((always_inline)) int allocflags_to_migratetype(gfp_t gfp_flags)
{
 ({ int __ret_warn_on = !!((gfp_flags & ((( gfp_t)0x80000u)|(( gfp_t)0x100000u))) == ((( gfp_t)0x80000u)|(( gfp_t)0x100000u))); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath("include/linux/gfp.h", 111, ((void *)0)); __builtin_expect(!!(__ret_warn_on), 0); });

 if (__builtin_expect(!!(page_group_by_mobility_disabled), 0))
  return 0;


 return (((gfp_flags & (( gfp_t)0x100000u)) != 0) << 1) |
  ((gfp_flags & (( gfp_t)0x80000u)) != 0);
}

static inline __attribute__((always_inline)) enum zone_type gfp_zone(gfp_t flags)
{
# 131 "include/linux/gfp.h"
 if ((flags & ((( gfp_t)0x02u) | (( gfp_t)0x100000u))) ==
   ((( gfp_t)0x02u) | (( gfp_t)0x100000u)))
  return ZONE_MOVABLE;




 return ZONE_NORMAL;
}
# 148 "include/linux/gfp.h"
static inline __attribute__((always_inline)) int gfp_zonelist(gfp_t flags)
{
 if (0 && __builtin_expect(!!(flags & (( gfp_t)0x40000u)), 0))
  return 1;

 return 0;
}
# 165 "include/linux/gfp.h"
static inline __attribute__((always_inline)) struct zonelist *node_zonelist(int nid, gfp_t flags)
{
 return (&contig_page_data)->node_zonelists + gfp_zonelist(flags);
}


static inline __attribute__((always_inline)) void arch_free_page(struct page *page, int order) { }


static inline __attribute__((always_inline)) void arch_alloc_page(struct page *page, int order) { }


struct page *
__alloc_pages_internal(gfp_t gfp_mask, unsigned int order,
         struct zonelist *zonelist, nodemask_t *nodemask);

static inline __attribute__((always_inline)) struct page *
__alloc_pages(gfp_t gfp_mask, unsigned int order,
  struct zonelist *zonelist)
{
 return __alloc_pages_internal(gfp_mask, order, zonelist, ((void *)0));
}

static inline __attribute__((always_inline)) struct page *
__alloc_pages_nodemask(gfp_t gfp_mask, unsigned int order,
  struct zonelist *zonelist, nodemask_t *nodemask)
{
 return __alloc_pages_internal(gfp_mask, order, zonelist, nodemask);
}


static inline __attribute__((always_inline)) struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{
 if (__builtin_expect(!!(order >= 11), 0))
  return ((void *)0);


 if (nid < 0)
  nid = (((void)(0),0));

 return __alloc_pages(gfp_mask, order, node_zonelist(nid, gfp_mask));
}
# 229 "include/linux/gfp.h"
extern unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order);
extern unsigned long get_zeroed_page(gfp_t gfp_mask);

void *alloc_pages_exact(size_t size, gfp_t gfp_mask);
void free_pages_exact(void *virt, size_t size);







extern void __free_pages(struct page *page, unsigned int order);
extern void free_pages(unsigned long addr, unsigned int order);
extern void free_hot_page(struct page *page);
extern void free_cold_page(struct page *page);




void page_alloc_init(void);
void drain_zone_pages(struct zone *zone, struct per_cpu_pages *pcp);
void drain_all_pages(void);
void drain_local_pages(void *dummy);
# 9 "include/linux/mm.h" 2

# 1 "include/linux/mmdebug.h" 1



# 1 "include/linux/autoconf.h" 1
# 5 "include/linux/mmdebug.h" 2
# 11 "include/linux/mm.h" 2

# 1 "include/linux/rbtree.h" 1
# 100 "include/linux/rbtree.h"
struct rb_node
{
 unsigned long rb_parent_color;


 struct rb_node *rb_right;
 struct rb_node *rb_left;
} __attribute__((aligned(sizeof(long))));


struct rb_root
{
 struct rb_node *rb_node;
};
# 123 "include/linux/rbtree.h"
static inline __attribute__((always_inline)) void rb_set_parent(struct rb_node *rb, struct rb_node *p)
{
 rb->rb_parent_color = (rb->rb_parent_color & 3) | (unsigned long)p;
}
static inline __attribute__((always_inline)) void rb_set_color(struct rb_node *rb, int color)
{
 rb->rb_parent_color = (rb->rb_parent_color & ~1) | color;
}
# 139 "include/linux/rbtree.h"
extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);


extern struct rb_node *rb_next(const struct rb_node *);
extern struct rb_node *rb_prev(const struct rb_node *);
extern struct rb_node *rb_first(const struct rb_root *);
extern struct rb_node *rb_last(const struct rb_root *);


extern void rb_replace_node(struct rb_node *victim, struct rb_node *new,
       struct rb_root *root);

static inline __attribute__((always_inline)) void rb_link_node(struct rb_node * node, struct rb_node * parent,
    struct rb_node ** rb_link)
{
 node->rb_parent_color = (unsigned long )parent;
 node->rb_left = node->rb_right = ((void *)0);

 *rb_link = node;
}
# 13 "include/linux/mm.h" 2
# 1 "include/linux/prio_tree.h" 1
# 14 "include/linux/prio_tree.h"
struct raw_prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
};

struct prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
 unsigned long start;
 unsigned long last;
};

struct prio_tree_root {
 struct prio_tree_node *prio_tree_node;
 unsigned short index_bits;
 unsigned short raw;




};

struct prio_tree_iter {
 struct prio_tree_node *cur;
 unsigned long mask;
 unsigned long value;
 int size_level;

 struct prio_tree_root *root;
 unsigned long r_index;
 unsigned long h_index;
};

static inline __attribute__((always_inline)) void prio_tree_iter_init(struct prio_tree_iter *iter,
  struct prio_tree_root *root, unsigned long r_index, unsigned long h_index)
{
 iter->root = root;
 iter->r_index = r_index;
 iter->h_index = h_index;
 iter->cur = ((void *)0);
}
# 84 "include/linux/prio_tree.h"
static inline __attribute__((always_inline)) int prio_tree_empty(const struct prio_tree_root *root)
{
 return root->prio_tree_node == ((void *)0);
}

static inline __attribute__((always_inline)) int prio_tree_root(const struct prio_tree_node *node)
{
 return node->parent == node;
}

static inline __attribute__((always_inline)) int prio_tree_left_empty(const struct prio_tree_node *node)
{
 return node->left == node;
}

static inline __attribute__((always_inline)) int prio_tree_right_empty(const struct prio_tree_node *node)
{
 return node->right == node;
}


struct prio_tree_node *prio_tree_replace(struct prio_tree_root *root,
                struct prio_tree_node *old, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_insert(struct prio_tree_root *root,
                struct prio_tree_node *node);
void prio_tree_remove(struct prio_tree_root *root, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_next(struct prio_tree_iter *iter);
# 14 "include/linux/mm.h" 2
# 1 "include/linux/debug_locks.h" 1





struct task_struct;

extern int debug_locks;
extern int debug_locks_silent;




extern int debug_locks_off(void);
# 40 "include/linux/debug_locks.h"
struct task_struct;
# 49 "include/linux/debug_locks.h"
static inline __attribute__((always_inline)) void debug_show_all_locks(void)
{
}

static inline __attribute__((always_inline)) void __debug_show_held_locks(struct task_struct *task)
{
}

static inline __attribute__((always_inline)) void debug_show_held_locks(struct task_struct *task)
{
}

static inline __attribute__((always_inline)) void
debug_check_no_locks_freed(const void *from, unsigned long len)
{
}

static inline __attribute__((always_inline)) void
debug_check_no_locks_held(struct task_struct *task)
{
}
# 15 "include/linux/mm.h" 2
# 1 "include/linux/mm_types.h" 1



# 1 "include/linux/auxvec.h" 1



# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/auxvec.h" 1
# 5 "include/linux/auxvec.h" 2
# 5 "include/linux/mm_types.h" 2







# 1 "include/linux/completion.h" 1
# 25 "include/linux/completion.h"
struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};
# 73 "include/linux/completion.h"
static inline __attribute__((always_inline)) void init_completion(struct completion *x)
{
 x->done = 0;
 init_waitqueue_head(&x->wait);
}

extern void wait_for_completion(struct completion *);
extern int wait_for_completion_interruptible(struct completion *x);
extern int wait_for_completion_killable(struct completion *x);
extern unsigned long wait_for_completion_timeout(struct completion *x,
         unsigned long timeout);
extern unsigned long wait_for_completion_interruptible_timeout(
   struct completion *x, unsigned long timeout);
extern bool try_wait_for_completion(struct completion *x);
extern bool completion_done(struct completion *x);

extern void complete(struct completion *);
extern void complete_all(struct completion *);
# 13 "include/linux/mm_types.h" 2


# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/mmu.h" 1





typedef struct {

 unsigned int id;
 raw_spinlock_t id_lock;

 unsigned int kvm_seq;
} mm_context_t;
# 16 "include/linux/mm_types.h" 2






struct address_space;






typedef unsigned long mm_counter_t;
# 39 "include/linux/mm_types.h"
struct page {
 unsigned long flags;

 atomic_t _count;
 union {
  atomic_t _mapcount;



  struct {
   u16 inuse;
   u16 objects;
  };
 };
 union {
     struct {
  unsigned long private;






  struct address_space *mapping;






     };







     struct kmem_cache *slab;
     struct page *first_page;
 };
 union {
  unsigned long index;
  void *freelist;
 };
 struct list_head lru;
# 109 "include/linux/mm_types.h"
};






struct vm_region {
 struct rb_node vm_rb;
 unsigned long vm_flags;
 unsigned long vm_start;
 unsigned long vm_end;
 unsigned long vm_top;
 unsigned long vm_pgoff;
 struct file *vm_file;

 atomic_t vm_usage;
};







struct vm_area_struct {
 struct mm_struct * vm_mm;
 unsigned long vm_start;
 unsigned long vm_end;



 struct vm_area_struct *vm_next;

 pgprot_t vm_page_prot;
 unsigned long vm_flags;

 struct rb_node vm_rb;







 union {
  struct {
   struct list_head list;
   void *parent;
   struct vm_area_struct *head;
  } vm_set;

  struct raw_prio_tree_node prio_tree_node;
 } shared;







 struct list_head anon_vma_node;
 struct anon_vma *anon_vma;


 struct vm_operations_struct * vm_ops;


 unsigned long vm_pgoff;

 struct file * vm_file;
 void * vm_private_data;
 unsigned long vm_truncate_count;







};

struct core_thread {
 struct task_struct *task;
 struct core_thread *next;
};

struct core_state {
 atomic_t nr_threads;
 struct core_thread dumper;
 struct completion startup;
};

struct mm_struct {
 struct vm_area_struct * mmap;
 struct rb_root mm_rb;
 struct vm_area_struct * mmap_cache;
 unsigned long (*get_unmapped_area) (struct file *filp,
    unsigned long addr, unsigned long len,
    unsigned long pgoff, unsigned long flags);
 void (*unmap_area) (struct mm_struct *mm, unsigned long addr);
 unsigned long mmap_base;
 unsigned long task_size;
 unsigned long cached_hole_size;
 unsigned long free_area_cache;
 pgd_t * pgd;
 atomic_t mm_users;
 atomic_t mm_count;
 int map_count;
 struct rw_semaphore mmap_sem;
 spinlock_t page_table_lock;

 struct list_head mmlist;







 mm_counter_t _file_rss;
 mm_counter_t _anon_rss;

 unsigned long hiwater_rss;
 unsigned long hiwater_vm;

 unsigned long total_vm, locked_vm, shared_vm, exec_vm;
 unsigned long stack_vm, reserved_vm, def_flags, nr_ptes;
 unsigned long start_code, end_code, start_data, end_data;
 unsigned long start_brk, brk, start_stack;
 unsigned long arg_start, arg_end, env_start, env_end;

 unsigned long saved_auxv[(2*(0 + 19 + 1))];

 cpumask_t cpu_vm_mask;


 mm_context_t context;


 struct list_head delayed_drop;
# 258 "include/linux/mm_types.h"
 unsigned int faultstamp;
 unsigned int token_priority;
 unsigned int last_interval;

 unsigned long flags;

 struct core_state *core_state;


 spinlock_t ioctx_lock;
 struct hlist_head ioctx_list;
# 286 "include/linux/mm_types.h"
 struct file *exe_file;
 unsigned long num_exe_file_vmas;




};
# 16 "include/linux/mm.h" 2

struct mempolicy;
struct anon_vma;
struct file_ra_state;
struct user_struct;
struct writeback_control;


extern unsigned long max_mapnr;


extern unsigned long num_physpages;
extern void * high_memory;
extern int page_cluster;


extern int sysctl_legacy_va_layout;




extern unsigned long mmap_min_addr;


# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h" 1
# 13 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h"
# 1 "include/asm-generic/4level-fixup.h" 1
# 14 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/proc-fns.h" 1
# 217 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/proc-fns.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cpu-single.h" 1
# 35 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cpu-single.h"
struct mm_struct;


extern void cpu_v6_proc_init(void);
extern void cpu_v6_proc_fin(void);
extern int cpu_v6_do_idle(void);
extern void cpu_v6_dcache_clean_area(void *, int);
extern void cpu_v6_switch_mm(unsigned long pgd_phys, struct mm_struct *mm);
extern void cpu_v6_set_pte_ext(pte_t *ptep, pte_t pte, unsigned int ext);
extern void cpu_v6_reset(unsigned long addr) __attribute__((noreturn));
# 218 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/proc-fns.h" 2
# 15 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h" 2
# 23 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h"
# 1 "arch/arm/plat-mxc/include/mach/vmalloc.h" 1
# 24 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable-hwdef.h" 1
# 25 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h" 2
# 115 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h"
extern void __pte_error(const char *file, int line, unsigned long val);
extern void __pmd_error(const char *file, int line, unsigned long val);
extern void __pgd_error(const char *file, int line, unsigned long val);
# 201 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h"
extern pgprot_t pgprot_user;
extern pgprot_t pgprot_kernel;
# 257 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h"
extern struct page *empty_zero_page;
# 313 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h"
static inline __attribute__((always_inline)) pte_t pte_wrprotect(pte_t pte) { (pte) &= ~(1 << 7); return pte; };
static inline __attribute__((always_inline)) pte_t pte_mkwrite(pte_t pte) { (pte) |= (1 << 7); return pte; };
static inline __attribute__((always_inline)) pte_t pte_mkclean(pte_t pte) { (pte) &= ~(1 << 6); return pte; };
static inline __attribute__((always_inline)) pte_t pte_mkdirty(pte_t pte) { (pte) |= (1 << 6); return pte; };
static inline __attribute__((always_inline)) pte_t pte_mkold(pte_t pte) { (pte) &= ~(1 << 1); return pte; };
static inline __attribute__((always_inline)) pte_t pte_mkyoung(pte_t pte) { (pte) |= (1 << 1); return pte; };

static inline __attribute__((always_inline)) pte_t pte_mkspecial(pte_t pte) { return pte; }
# 350 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h"
static inline __attribute__((always_inline)) pte_t *pmd_page_vaddr(pmd_t pmd)
{
 unsigned long ptr;

 ptr = (pmd) & ~(512 * sizeof(void *) - 1);
 ptr += 512 * sizeof(void *);

 return ((void *)(((unsigned long)(ptr)) - (0x80000000UL) + (0xC0000000UL)));
}
# 393 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h"
static inline __attribute__((always_inline)) pte_t pte_modify(pte_t pte, pgprot_t newprot)
{
 const unsigned long mask = (1 << 9) | (1 << 7) | (1 << 8);
 (pte) = ((pte) & ~mask) | ((newprot) & mask);
 return pte;
}

extern pgd_t swapper_pg_dir[2048];
# 416 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h"
# 1 "include/asm-generic/pgtable.h" 1
# 94 "include/asm-generic/pgtable.h"
struct mm_struct;
static inline __attribute__((always_inline)) void ptep_set_wrprotect(struct mm_struct *mm, unsigned long address, pte_t *ptep)
{
 pte_t old_pte = *ptep;
 do { do { ; cpu_v6_set_pte_ext(ptep, pte_wrprotect(old_pte), (address) >= ((0xC0000000UL) - (0x01000000UL)) ? 0 : (1 << 11)); ; } while (0); } while (0);
}
# 166 "include/asm-generic/pgtable.h"
void pgd_clear_bad(pgd_t *);
void pud_clear_bad(pgd_t *);
void pmd_clear_bad(pmd_t *);

static inline __attribute__((always_inline)) int pgd_none_or_clear_bad(pgd_t *pgd)
{
 if ((0))
  return 1;
 if (__builtin_expect(!!((0)), 0)) {
  pgd_clear_bad(pgd);
  return 1;
 }
 return 0;
}

static inline __attribute__((always_inline)) int pud_none_or_clear_bad(pgd_t *pud)
{
 if (0)
  return 1;
 if (__builtin_expect(!!(0), 0)) {
  pud_clear_bad(pud);
  return 1;
 }
 return 0;
}

static inline __attribute__((always_inline)) int pmd_none_or_clear_bad(pmd_t *pmd)
{
 if ((!(*pmd)))
  return 1;
 if (__builtin_expect(!!(((*pmd) & 2)), 0)) {
  pmd_clear_bad(pmd);
  return 1;
 }
 return 0;
}

static inline __attribute__((always_inline)) pte_t __ptep_modify_prot_start(struct mm_struct *mm,
          unsigned long addr,
          pte_t *ptep)
{





 return ({ pte_t __pte = *(ptep); do { ; cpu_v6_set_pte_ext((ptep), (0), 0); ; } while (0); __pte; });
}

static inline __attribute__((always_inline)) void __ptep_modify_prot_commit(struct mm_struct *mm,
          unsigned long addr,
          pte_t *ptep, pte_t pte)
{




 do { do { ; cpu_v6_set_pte_ext(ptep, pte, (addr) >= ((0xC0000000UL) - (0x01000000UL)) ? 0 : (1 << 11)); ; } while (0); } while (0);
}
# 241 "include/asm-generic/pgtable.h"
static inline __attribute__((always_inline)) pte_t ptep_modify_prot_start(struct mm_struct *mm,
        unsigned long addr,
        pte_t *ptep)
{
 return __ptep_modify_prot_start(mm, addr, ptep);
}





static inline __attribute__((always_inline)) void ptep_modify_prot_commit(struct mm_struct *mm,
        unsigned long addr,
        pte_t *ptep, pte_t pte)
{
 __ptep_modify_prot_commit(mm, addr, ptep, pte);
}
# 304 "include/asm-generic/pgtable.h"
static inline __attribute__((always_inline)) int track_pfn_vma_new(struct vm_area_struct *vma, pgprot_t *prot,
     unsigned long pfn, unsigned long size)
{
 return 0;
}
# 317 "include/asm-generic/pgtable.h"
static inline __attribute__((always_inline)) int track_pfn_vma_copy(struct vm_area_struct *vma)
{
 return 0;
}
# 330 "include/asm-generic/pgtable.h"
static inline __attribute__((always_inline)) void untrack_pfn_vma(struct vm_area_struct *vma,
     unsigned long pfn, unsigned long size)
{
}
# 417 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/pgtable.h" 2
# 41 "include/linux/mm.h" 2
# 57 "include/linux/mm.h"
extern struct kmem_cache *vm_area_cachep;
# 134 "include/linux/mm.h"
extern pgprot_t protection_map[16];
# 147 "include/linux/mm.h"
static inline __attribute__((always_inline)) int is_linear_pfn_mapping(struct vm_area_struct *vma)
{
 return (vma->vm_flags & 0x40000000);
}

static inline __attribute__((always_inline)) int is_pfn_mapping(struct vm_area_struct *vma)
{
 return (vma->vm_flags & 0x00000400);
}
# 166 "include/linux/mm.h"
struct vm_fault {
 unsigned int flags;
 unsigned long pgoff;
 void *virtual_address;

 struct page *page;




};






struct vm_operations_struct {
 void (*open)(struct vm_area_struct * area);
 void (*close)(struct vm_area_struct * area);
 int (*fault)(struct vm_area_struct *vma, struct vm_fault *vmf);



 int (*page_mkwrite)(struct vm_area_struct *vma, struct page *page);




 int (*access)(struct vm_area_struct *vma, unsigned long addr,
        void *buf, int len, int write);
# 222 "include/linux/mm.h"
};

struct mmu_gather;
struct inode;
# 234 "include/linux/mm.h"
# 1 "include/linux/page-flags.h" 1
# 72 "include/linux/page-flags.h"
enum pageflags {
 PG_locked,
 PG_error,
 PG_referenced,
 PG_uptodate,
 PG_dirty,
 PG_lru,
 PG_active,
 PG_slab,
 PG_owner_priv_1,
 PG_arch_1,
 PG_reserved,
 PG_private,
 PG_writeback,

 PG_head,
 PG_tail,



 PG_swapcache,
 PG_mappedtodisk,
 PG_reclaim,
 PG_buddy,
 PG_swapbacked,

 PG_unevictable,
 PG_mlocked,




 __NR_PAGEFLAGS,


 PG_checked = PG_owner_priv_1,


 PG_pinned = PG_owner_priv_1,
 PG_savepinned = PG_dirty,


 PG_slob_page = PG_active,
 PG_slob_free = PG_private,


 PG_slub_frozen = PG_active,
 PG_slub_debug = PG_error,
};
# 181 "include/linux/page-flags.h"
struct page;

static inline __attribute__((always_inline)) int PageLocked(struct page *page) { return test_bit(PG_locked, &page->flags); }
static inline __attribute__((always_inline)) int PageError(struct page *page) { return test_bit(PG_error, &page->flags); } static inline __attribute__((always_inline)) void SetPageError(struct page *page) { (__builtin_constant_p(PG_error) ? ____atomic_set_bit(PG_error, &page->flags) : _set_bit_le(PG_error,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageError(struct page *page) { (__builtin_constant_p(PG_error) ? ____atomic_clear_bit(PG_error, &page->flags) : _clear_bit_le(PG_error,&page->flags)); }
static inline __attribute__((always_inline)) int PageReferenced(struct page *page) { return test_bit(PG_referenced, &page->flags); } static inline __attribute__((always_inline)) void SetPageReferenced(struct page *page) { (__builtin_constant_p(PG_referenced) ? ____atomic_set_bit(PG_referenced, &page->flags) : _set_bit_le(PG_referenced,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageReferenced(struct page *page) { (__builtin_constant_p(PG_referenced) ? ____atomic_clear_bit(PG_referenced, &page->flags) : _clear_bit_le(PG_referenced,&page->flags)); } static inline __attribute__((always_inline)) int TestClearPageReferenced(struct page *page) { return (__builtin_constant_p(PG_referenced) ? ____atomic_test_and_clear_bit(PG_referenced, &page->flags) : _test_and_clear_bit_le(PG_referenced,&page->flags)); }
static inline __attribute__((always_inline)) int PageDirty(struct page *page) { return test_bit(PG_dirty, &page->flags); } static inline __attribute__((always_inline)) void SetPageDirty(struct page *page) { (__builtin_constant_p(PG_dirty) ? ____atomic_set_bit(PG_dirty, &page->flags) : _set_bit_le(PG_dirty,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageDirty(struct page *page) { (__builtin_constant_p(PG_dirty) ? ____atomic_clear_bit(PG_dirty, &page->flags) : _clear_bit_le(PG_dirty,&page->flags)); } static inline __attribute__((always_inline)) int TestSetPageDirty(struct page *page) { return (__builtin_constant_p(PG_dirty) ? ____atomic_test_and_set_bit(PG_dirty, &page->flags) : _test_and_set_bit_le(PG_dirty,&page->flags)); } static inline __attribute__((always_inline)) int TestClearPageDirty(struct page *page) { return (__builtin_constant_p(PG_dirty) ? ____atomic_test_and_clear_bit(PG_dirty, &page->flags) : _test_and_clear_bit_le(PG_dirty,&page->flags)); } static inline __attribute__((always_inline)) void __ClearPageDirty(struct page *page) { __clear_bit(PG_dirty, &page->flags); }
static inline __attribute__((always_inline)) int PageLRU(struct page *page) { return test_bit(PG_lru, &page->flags); } static inline __attribute__((always_inline)) void SetPageLRU(struct page *page) { (__builtin_constant_p(PG_lru) ? ____atomic_set_bit(PG_lru, &page->flags) : _set_bit_le(PG_lru,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageLRU(struct page *page) { (__builtin_constant_p(PG_lru) ? ____atomic_clear_bit(PG_lru, &page->flags) : _clear_bit_le(PG_lru,&page->flags)); } static inline __attribute__((always_inline)) void __ClearPageLRU(struct page *page) { __clear_bit(PG_lru, &page->flags); }
static inline __attribute__((always_inline)) int PageActive(struct page *page) { return test_bit(PG_active, &page->flags); } static inline __attribute__((always_inline)) void SetPageActive(struct page *page) { (__builtin_constant_p(PG_active) ? ____atomic_set_bit(PG_active, &page->flags) : _set_bit_le(PG_active,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageActive(struct page *page) { (__builtin_constant_p(PG_active) ? ____atomic_clear_bit(PG_active, &page->flags) : _clear_bit_le(PG_active,&page->flags)); } static inline __attribute__((always_inline)) void __ClearPageActive(struct page *page) { __clear_bit(PG_active, &page->flags); }
 static inline __attribute__((always_inline)) int TestClearPageActive(struct page *page) { return (__builtin_constant_p(PG_active) ? ____atomic_test_and_clear_bit(PG_active, &page->flags) : _test_and_clear_bit_le(PG_active,&page->flags)); }
static inline __attribute__((always_inline)) int PageSlab(struct page *page) { return test_bit(PG_slab, &page->flags); } static inline __attribute__((always_inline)) void __SetPageSlab(struct page *page) { __set_bit(PG_slab, &page->flags); } static inline __attribute__((always_inline)) void __ClearPageSlab(struct page *page) { __clear_bit(PG_slab, &page->flags); }
static inline __attribute__((always_inline)) int PageChecked(struct page *page) { return test_bit(PG_checked, &page->flags); } static inline __attribute__((always_inline)) void SetPageChecked(struct page *page) { (__builtin_constant_p(PG_checked) ? ____atomic_set_bit(PG_checked, &page->flags) : _set_bit_le(PG_checked,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageChecked(struct page *page) { (__builtin_constant_p(PG_checked) ? ____atomic_clear_bit(PG_checked, &page->flags) : _clear_bit_le(PG_checked,&page->flags)); }
static inline __attribute__((always_inline)) int PagePinned(struct page *page) { return test_bit(PG_pinned, &page->flags); } static inline __attribute__((always_inline)) void SetPagePinned(struct page *page) { (__builtin_constant_p(PG_pinned) ? ____atomic_set_bit(PG_pinned, &page->flags) : _set_bit_le(PG_pinned,&page->flags)); } static inline __attribute__((always_inline)) void ClearPagePinned(struct page *page) { (__builtin_constant_p(PG_pinned) ? ____atomic_clear_bit(PG_pinned, &page->flags) : _clear_bit_le(PG_pinned,&page->flags)); } static inline __attribute__((always_inline)) int TestSetPagePinned(struct page *page) { return (__builtin_constant_p(PG_pinned) ? ____atomic_test_and_set_bit(PG_pinned, &page->flags) : _test_and_set_bit_le(PG_pinned,&page->flags)); } static inline __attribute__((always_inline)) int TestClearPagePinned(struct page *page) { return (__builtin_constant_p(PG_pinned) ? ____atomic_test_and_clear_bit(PG_pinned, &page->flags) : _test_and_clear_bit_le(PG_pinned,&page->flags)); }
static inline __attribute__((always_inline)) int PageSavePinned(struct page *page) { return test_bit(PG_savepinned, &page->flags); } static inline __attribute__((always_inline)) void SetPageSavePinned(struct page *page) { (__builtin_constant_p(PG_savepinned) ? ____atomic_set_bit(PG_savepinned, &page->flags) : _set_bit_le(PG_savepinned,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageSavePinned(struct page *page) { (__builtin_constant_p(PG_savepinned) ? ____atomic_clear_bit(PG_savepinned, &page->flags) : _clear_bit_le(PG_savepinned,&page->flags)); };
static inline __attribute__((always_inline)) int PageReserved(struct page *page) { return test_bit(PG_reserved, &page->flags); } static inline __attribute__((always_inline)) void SetPageReserved(struct page *page) { (__builtin_constant_p(PG_reserved) ? ____atomic_set_bit(PG_reserved, &page->flags) : _set_bit_le(PG_reserved,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageReserved(struct page *page) { (__builtin_constant_p(PG_reserved) ? ____atomic_clear_bit(PG_reserved, &page->flags) : _clear_bit_le(PG_reserved,&page->flags)); } static inline __attribute__((always_inline)) void __ClearPageReserved(struct page *page) { __clear_bit(PG_reserved, &page->flags); }
static inline __attribute__((always_inline)) int PagePrivate(struct page *page) { return test_bit(PG_private, &page->flags); } static inline __attribute__((always_inline)) void SetPagePrivate(struct page *page) { (__builtin_constant_p(PG_private) ? ____atomic_set_bit(PG_private, &page->flags) : _set_bit_le(PG_private,&page->flags)); } static inline __attribute__((always_inline)) void ClearPagePrivate(struct page *page) { (__builtin_constant_p(PG_private) ? ____atomic_clear_bit(PG_private, &page->flags) : _clear_bit_le(PG_private,&page->flags)); } static inline __attribute__((always_inline)) void __ClearPagePrivate(struct page *page) { __clear_bit(PG_private, &page->flags); }
 static inline __attribute__((always_inline)) void __SetPagePrivate(struct page *page) { __set_bit(PG_private, &page->flags); }
static inline __attribute__((always_inline)) int PageSwapBacked(struct page *page) { return test_bit(PG_swapbacked, &page->flags); } static inline __attribute__((always_inline)) void SetPageSwapBacked(struct page *page) { (__builtin_constant_p(PG_swapbacked) ? ____atomic_set_bit(PG_swapbacked, &page->flags) : _set_bit_le(PG_swapbacked,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageSwapBacked(struct page *page) { (__builtin_constant_p(PG_swapbacked) ? ____atomic_clear_bit(PG_swapbacked, &page->flags) : _clear_bit_le(PG_swapbacked,&page->flags)); } static inline __attribute__((always_inline)) void __ClearPageSwapBacked(struct page *page) { __clear_bit(PG_swapbacked, &page->flags); }

static inline __attribute__((always_inline)) int PageSlobPage(struct page *page) { return test_bit(PG_slob_page, &page->flags); } static inline __attribute__((always_inline)) void __SetPageSlobPage(struct page *page) { __set_bit(PG_slob_page, &page->flags); } static inline __attribute__((always_inline)) void __ClearPageSlobPage(struct page *page) { __clear_bit(PG_slob_page, &page->flags); }
static inline __attribute__((always_inline)) int PageSlobFree(struct page *page) { return test_bit(PG_slob_free, &page->flags); } static inline __attribute__((always_inline)) void __SetPageSlobFree(struct page *page) { __set_bit(PG_slob_free, &page->flags); } static inline __attribute__((always_inline)) void __ClearPageSlobFree(struct page *page) { __clear_bit(PG_slob_free, &page->flags); }

static inline __attribute__((always_inline)) int PageSlubFrozen(struct page *page) { return test_bit(PG_slub_frozen, &page->flags); } static inline __attribute__((always_inline)) void __SetPageSlubFrozen(struct page *page) { __set_bit(PG_slub_frozen, &page->flags); } static inline __attribute__((always_inline)) void __ClearPageSlubFrozen(struct page *page) { __clear_bit(PG_slub_frozen, &page->flags); }
static inline __attribute__((always_inline)) int PageSlubDebug(struct page *page) { return test_bit(PG_slub_debug, &page->flags); } static inline __attribute__((always_inline)) void __SetPageSlubDebug(struct page *page) { __set_bit(PG_slub_debug, &page->flags); } static inline __attribute__((always_inline)) void __ClearPageSlubDebug(struct page *page) { __clear_bit(PG_slub_debug, &page->flags); }





static inline __attribute__((always_inline)) int PageWriteback(struct page *page) { return test_bit(PG_writeback, &page->flags); } static inline __attribute__((always_inline)) int TestSetPageWriteback(struct page *page) { return (__builtin_constant_p(PG_writeback) ? ____atomic_test_and_set_bit(PG_writeback, &page->flags) : _test_and_set_bit_le(PG_writeback,&page->flags)); } static inline __attribute__((always_inline)) int TestClearPageWriteback(struct page *page) { return (__builtin_constant_p(PG_writeback) ? ____atomic_test_and_clear_bit(PG_writeback, &page->flags) : _test_and_clear_bit_le(PG_writeback,&page->flags)); }
static inline __attribute__((always_inline)) int PageBuddy(struct page *page) { return test_bit(PG_buddy, &page->flags); } static inline __attribute__((always_inline)) void __SetPageBuddy(struct page *page) { __set_bit(PG_buddy, &page->flags); } static inline __attribute__((always_inline)) void __ClearPageBuddy(struct page *page) { __clear_bit(PG_buddy, &page->flags); }
static inline __attribute__((always_inline)) int PageMappedToDisk(struct page *page) { return test_bit(PG_mappedtodisk, &page->flags); } static inline __attribute__((always_inline)) void SetPageMappedToDisk(struct page *page) { (__builtin_constant_p(PG_mappedtodisk) ? ____atomic_set_bit(PG_mappedtodisk, &page->flags) : _set_bit_le(PG_mappedtodisk,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageMappedToDisk(struct page *page) { (__builtin_constant_p(PG_mappedtodisk) ? ____atomic_clear_bit(PG_mappedtodisk, &page->flags) : _clear_bit_le(PG_mappedtodisk,&page->flags)); }


static inline __attribute__((always_inline)) int PageReclaim(struct page *page) { return test_bit(PG_reclaim, &page->flags); } static inline __attribute__((always_inline)) void SetPageReclaim(struct page *page) { (__builtin_constant_p(PG_reclaim) ? ____atomic_set_bit(PG_reclaim, &page->flags) : _set_bit_le(PG_reclaim,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageReclaim(struct page *page) { (__builtin_constant_p(PG_reclaim) ? ____atomic_clear_bit(PG_reclaim, &page->flags) : _clear_bit_le(PG_reclaim,&page->flags)); } static inline __attribute__((always_inline)) int TestClearPageReclaim(struct page *page) { return (__builtin_constant_p(PG_reclaim) ? ____atomic_test_and_clear_bit(PG_reclaim, &page->flags) : _test_and_clear_bit_le(PG_reclaim,&page->flags)); }
static inline __attribute__((always_inline)) int PageReadahead(struct page *page) { return test_bit(PG_reclaim, &page->flags); } static inline __attribute__((always_inline)) void SetPageReadahead(struct page *page) { (__builtin_constant_p(PG_reclaim) ? ____atomic_set_bit(PG_reclaim, &page->flags) : _set_bit_le(PG_reclaim,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageReadahead(struct page *page) { (__builtin_constant_p(PG_reclaim) ? ____atomic_clear_bit(PG_reclaim, &page->flags) : _clear_bit_le(PG_reclaim,&page->flags)); }
# 224 "include/linux/page-flags.h"
static inline __attribute__((always_inline)) int PageHighMem(struct page *page) { return 0; }



static inline __attribute__((always_inline)) int PageSwapCache(struct page *page) { return test_bit(PG_swapcache, &page->flags); } static inline __attribute__((always_inline)) void SetPageSwapCache(struct page *page) { (__builtin_constant_p(PG_swapcache) ? ____atomic_set_bit(PG_swapcache, &page->flags) : _set_bit_le(PG_swapcache,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageSwapCache(struct page *page) { (__builtin_constant_p(PG_swapcache) ? ____atomic_clear_bit(PG_swapcache, &page->flags) : _clear_bit_le(PG_swapcache,&page->flags)); }






static inline __attribute__((always_inline)) int PageUnevictable(struct page *page) { return test_bit(PG_unevictable, &page->flags); } static inline __attribute__((always_inline)) void SetPageUnevictable(struct page *page) { (__builtin_constant_p(PG_unevictable) ? ____atomic_set_bit(PG_unevictable, &page->flags) : _set_bit_le(PG_unevictable,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageUnevictable(struct page *page) { (__builtin_constant_p(PG_unevictable) ? ____atomic_clear_bit(PG_unevictable, &page->flags) : _clear_bit_le(PG_unevictable,&page->flags)); } static inline __attribute__((always_inline)) void __ClearPageUnevictable(struct page *page) { __clear_bit(PG_unevictable, &page->flags); }
 static inline __attribute__((always_inline)) int TestClearPageUnevictable(struct page *page) { return (__builtin_constant_p(PG_unevictable) ? ____atomic_test_and_clear_bit(PG_unevictable, &page->flags) : _test_and_clear_bit_le(PG_unevictable,&page->flags)); }


static inline __attribute__((always_inline)) int PageMlocked(struct page *page) { return test_bit(PG_mlocked, &page->flags); } static inline __attribute__((always_inline)) void SetPageMlocked(struct page *page) { (__builtin_constant_p(PG_mlocked) ? ____atomic_set_bit(PG_mlocked, &page->flags) : _set_bit_le(PG_mlocked,&page->flags)); } static inline __attribute__((always_inline)) void ClearPageMlocked(struct page *page) { (__builtin_constant_p(PG_mlocked) ? ____atomic_clear_bit(PG_mlocked, &page->flags) : _clear_bit_le(PG_mlocked,&page->flags)); } static inline __attribute__((always_inline)) void __ClearPageMlocked(struct page *page) { __clear_bit(PG_mlocked, &page->flags); }
 static inline __attribute__((always_inline)) int TestSetPageMlocked(struct page *page) { return (__builtin_constant_p(PG_mlocked) ? ____atomic_test_and_set_bit(PG_mlocked, &page->flags) : _test_and_set_bit_le(PG_mlocked,&page->flags)); } static inline __attribute__((always_inline)) int TestClearPageMlocked(struct page *page) { return (__builtin_constant_p(PG_mlocked) ? ____atomic_test_and_clear_bit(PG_mlocked, &page->flags) : _test_and_clear_bit_le(PG_mlocked,&page->flags)); }
# 256 "include/linux/page-flags.h"
static inline __attribute__((always_inline)) int PageUncached(struct page *page) { return 0; }


static inline __attribute__((always_inline)) int PageUptodate(struct page *page)
{
 int ret = test_bit(PG_uptodate, &(page)->flags);
# 271 "include/linux/page-flags.h"
 if (ret)
  __asm__ __volatile__("": : :"memory");

 return ret;
}

static inline __attribute__((always_inline)) void __SetPageUptodate(struct page *page)
{
 __asm__ __volatile__("": : :"memory");
 __set_bit(PG_uptodate, &(page)->flags);
}

static inline __attribute__((always_inline)) void SetPageUptodate(struct page *page)
{
# 297 "include/linux/page-flags.h"
 __asm__ __volatile__("": : :"memory");
 (__builtin_constant_p(PG_uptodate) ? ____atomic_set_bit(PG_uptodate, &(page)->flags) : _set_bit_le(PG_uptodate,&(page)->flags));

}

static inline __attribute__((always_inline)) void ClearPageUptodate(struct page *page) { (__builtin_constant_p(PG_uptodate) ? ____atomic_clear_bit(PG_uptodate, &page->flags) : _clear_bit_le(PG_uptodate,&page->flags)); }

extern void cancel_dirty_page(struct page *page, unsigned int account_size);

int test_clear_page_writeback(struct page *page);
int test_set_page_writeback(struct page *page);

static inline __attribute__((always_inline)) void set_page_writeback(struct page *page)
{
 test_set_page_writeback(page);
}
# 321 "include/linux/page-flags.h"
static inline __attribute__((always_inline)) int PageHead(struct page *page) { return test_bit(PG_head, &page->flags); } static inline __attribute__((always_inline)) void __SetPageHead(struct page *page) { __set_bit(PG_head, &page->flags); } static inline __attribute__((always_inline)) void __ClearPageHead(struct page *page) { __clear_bit(PG_head, &page->flags); }
static inline __attribute__((always_inline)) int PageTail(struct page *page) { return test_bit(PG_tail, &page->flags); } static inline __attribute__((always_inline)) void __SetPageTail(struct page *page) { __set_bit(PG_tail, &page->flags); } static inline __attribute__((always_inline)) void __ClearPageTail(struct page *page) { __clear_bit(PG_tail, &page->flags); }

static inline __attribute__((always_inline)) int PageCompound(struct page *page)
{
 return page->flags & ((1L << PG_head) | (1L << PG_tail));

}
# 235 "include/linux/mm.h" 2
# 252 "include/linux/mm.h"
static inline __attribute__((always_inline)) int put_page_testzero(struct page *page)
{
 do { } while (0);
 return (atomic_sub_return(1, &page->_count) == 0);
}





static inline __attribute__((always_inline)) int get_page_unless_zero(struct page *page)
{
 return atomic_add_unless((&page->_count), 1, 0);
}


struct page *vmalloc_to_page(const void *addr);
unsigned long vmalloc_to_pfn(const void *addr);







static inline __attribute__((always_inline)) int is_vmalloc_addr(const void *x)
{

 unsigned long addr = (unsigned long)x;

 return addr >= (((unsigned long)high_memory + (8*1024*1024)) & ~((8*1024*1024)-1)) && addr < 0xF4000000;



}

static inline __attribute__((always_inline)) struct page *compound_head(struct page *page)
{
 if (__builtin_expect(!!(PageTail(page)), 0))
  return page->first_page;
 return page;
}

static inline __attribute__((always_inline)) int page_count(struct page *page)
{
 return ((&compound_head(page)->_count)->counter);
}

static inline __attribute__((always_inline)) void get_page(struct page *page)
{
 page = compound_head(page);
 do { } while (0);
 (void) atomic_add_return(1, &page->_count);
}

static inline __attribute__((always_inline)) struct page *virt_to_head_page(const void *x)
{
 struct page *page = (mem_map + (((((unsigned long)(x)) - (0xC0000000UL) + (0x80000000UL)) >> 12) - ((0x80000000UL) >> 12)));
 return compound_head(page);
}





static inline __attribute__((always_inline)) void init_page_count(struct page *page)
{
 atomic_set(&page->_count, 1);
}

void put_page(struct page *page);
void put_pages_list(struct list_head *pages);

void split_page(struct page *page, unsigned int order);






typedef void compound_page_dtor(struct page *);

static inline __attribute__((always_inline)) void set_compound_page_dtor(struct page *page,
      compound_page_dtor *dtor)
{
 page[1].lru.next = (void *)dtor;
}

static inline __attribute__((always_inline)) compound_page_dtor *get_compound_page_dtor(struct page *page)
{
 return (compound_page_dtor *)page[1].lru.next;
}

static inline __attribute__((always_inline)) int compound_order(struct page *page)
{
 if (!PageHead(page))
  return 0;
 return (unsigned long)page[1].lru.prev;
}

static inline __attribute__((always_inline)) void set_compound_order(struct page *page, unsigned long order)
{
 page[1].lru.prev = (void *)order;
}
# 502 "include/linux/mm.h"
static inline __attribute__((always_inline)) enum zone_type page_zonenum(struct page *page)
{
 return (page->flags >> (((((sizeof(unsigned long)*8) - 0) - 0) - 1) * (1 != 0))) & ((1UL << 1) - 1);
}
# 515 "include/linux/mm.h"
static inline __attribute__((always_inline)) int page_zone_id(struct page *page)
{
 return (page->flags >> ((((((sizeof(unsigned long)*8) - 0) - 0) < ((((sizeof(unsigned long)*8) - 0) - 0) - 1))? (((sizeof(unsigned long)*8) - 0) - 0) : ((((sizeof(unsigned long)*8) - 0) - 0) - 1)) * ((0 + 1) != 0))) & ((1UL << (0 + 1)) - 1);
}

static inline __attribute__((always_inline)) int zone_to_nid(struct zone *zone)
{



 return 0;

}




static inline __attribute__((always_inline)) int page_to_nid(struct page *page)
{
 return (page->flags >> ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0))) & ((1UL << 0) - 1);
}


static inline __attribute__((always_inline)) struct zone *page_zone(struct page *page)
{
 return &(&contig_page_data)->node_zones[page_zonenum(page)];
}
# 550 "include/linux/mm.h"
static inline __attribute__((always_inline)) void set_page_zone(struct page *page, enum zone_type zone)
{
 page->flags &= ~(((1UL << 1) - 1) << (((((sizeof(unsigned long)*8) - 0) - 0) - 1) * (1 != 0)));
 page->flags |= (zone & ((1UL << 1) - 1)) << (((((sizeof(unsigned long)*8) - 0) - 0) - 1) * (1 != 0));
}

static inline __attribute__((always_inline)) void set_page_node(struct page *page, unsigned long node)
{
 page->flags &= ~(((1UL << 0) - 1) << ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0)));
 page->flags |= (node & ((1UL << 0) - 1)) << ((((sizeof(unsigned long)*8) - 0) - 0) * (0 != 0));
}

static inline __attribute__((always_inline)) void set_page_section(struct page *page, unsigned long section)
{
 page->flags &= ~(((1UL << 0) - 1) << (((sizeof(unsigned long)*8) - 0) * (0 != 0)));
 page->flags |= (section & ((1UL << 0) - 1)) << (((sizeof(unsigned long)*8) - 0) * (0 != 0));
}

static inline __attribute__((always_inline)) void set_page_links(struct page *page, enum zone_type zone,
 unsigned long node, unsigned long pfn)
{
 set_page_zone(page, zone);
 set_page_node(page, node);
 set_page_section(page, ((pfn) >> 0));
}





static inline __attribute__((always_inline)) unsigned long round_hint_to_min(unsigned long hint)
{






 return hint;
}




# 1 "include/linux/vmstat.h" 1




# 1 "include/linux/percpu.h" 1




# 1 "include/linux/slab.h" 1
# 93 "include/linux/slab.h"
void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) kmem_cache_init(void);
int slab_is_available(void);

struct kmem_cache *kmem_cache_create(const char *, size_t, size_t,
   unsigned long,
   void (*)(void *));
void kmem_cache_destroy(struct kmem_cache *);
int kmem_cache_shrink(struct kmem_cache *);
void kmem_cache_free(struct kmem_cache *, void *);
unsigned int kmem_cache_size(struct kmem_cache *);
const char *kmem_cache_name(struct kmem_cache *);
int kmem_ptr_validate(struct kmem_cache *cachep, const void *ptr);
# 136 "include/linux/slab.h"
void * __attribute__((warn_unused_result)) __krealloc(const void *, size_t, gfp_t);
void * __attribute__((warn_unused_result)) krealloc(const void *, size_t, gfp_t);
void kfree(const void *);
void kzfree(const void *);
size_t ksize(const void *);
# 166 "include/linux/slab.h"
# 1 "include/linux/slab_def.h" 1
# 17 "include/linux/slab_def.h"
# 1 "include/trace/kmemtrace.h" 1
# 12 "include/trace/kmemtrace.h"
# 1 "include/linux/tracepoint.h" 1
# 17 "include/linux/tracepoint.h"
# 1 "include/linux/immediate.h" 1
# 66 "include/linux/immediate.h"
static inline __attribute__((always_inline)) void core_imv_update(void) { }
static inline __attribute__((always_inline)) void imv_unref_core_init(void) { }
# 18 "include/linux/tracepoint.h" 2

# 1 "include/linux/rcupdate.h" 1
# 49 "include/linux/rcupdate.h"
struct rcu_head {
 struct rcu_head *next;
 void (*func)(struct rcu_head *head);
};


extern int rcu_scheduler_active;






# 1 "include/linux/rcupreempt.h" 1
# 43 "include/linux/rcupreempt.h"
extern void rcu_qsctr_inc(int cpu);
static inline __attribute__((always_inline)) void rcu_bh_qsctr_inc(int cpu) { }
# 64 "include/linux/rcupreempt.h"
extern void call_rcu_sched(struct rcu_head *head,
      void (*func)(struct rcu_head *head));

extern void __rcu_read_lock(void) ;
extern void __rcu_read_unlock(void) ;
extern int rcu_pending(int cpu);
extern int rcu_needs_cpu(int cpu);




extern void __synchronize_sched(void);

extern void __rcu_init(void);
extern void rcu_init_sched(void);
extern void rcu_check_callbacks(int cpu, int user);
extern void rcu_restart_cpu(int cpu);
extern long rcu_batches_completed(void);





static inline __attribute__((always_inline)) long rcu_batches_completed_bh(void)
{
 return rcu_batches_completed();
}
# 102 "include/linux/rcupreempt.h"
struct softirq_action;
# 122 "include/linux/rcupreempt.h"
static inline __attribute__((always_inline)) int rcu_blocking_is_gp(void)
{
 return 1 == 1 && !rcu_scheduler_active;
}
# 63 "include/linux/rcupdate.h" 2
# 202 "include/linux/rcupdate.h"
struct rcu_synchronize {
 struct rcu_head head;
 struct completion completion;
};

extern void wakeme_after_rcu(struct rcu_head *head);
# 238 "include/linux/rcupdate.h"
extern void call_rcu(struct rcu_head *head,
         void (*func)(struct rcu_head *head));
# 259 "include/linux/rcupdate.h"
extern void call_rcu(struct rcu_head *head,
   void (*func)(struct rcu_head *head));


extern void synchronize_rcu(void);
extern void rcu_barrier(void);
extern void rcu_barrier_bh(void);
extern void rcu_barrier_sched(void);


extern void rcu_init(void);
extern void rcu_scheduler_starting(void);
extern int rcu_needs_cpu(int cpu);
# 20 "include/linux/tracepoint.h" 2

struct module;
struct tracepoint;

struct tracepoint {
 const char *name;
 __typeof__(char) state__imv;
 void **funcs;
} __attribute__((aligned(32)));
# 112 "include/linux/tracepoint.h"
extern void tracepoint_update_probe_range(struct tracepoint *begin,
 struct tracepoint *end);
# 143 "include/linux/tracepoint.h"
extern int tracepoint_probe_register(const char *name, void *probe);





extern int tracepoint_probe_unregister(const char *name, void *probe);

extern int tracepoint_probe_register_noupdate(const char *name, void *probe);
extern int tracepoint_probe_unregister_noupdate(const char *name, void *probe);
extern void tracepoint_probe_update_all(void);

struct tracepoint_iter {
 struct module *module;
 struct tracepoint *tracepoint;
};

extern void tracepoint_iter_start(struct tracepoint_iter *iter);
extern void tracepoint_iter_next(struct tracepoint_iter *iter);
extern void tracepoint_iter_stop(struct tracepoint_iter *iter);
extern void tracepoint_iter_reset(struct tracepoint_iter *iter);
extern int tracepoint_get_iter_range(struct tracepoint **tracepoint,
 struct tracepoint *begin, struct tracepoint *end);






static inline __attribute__((always_inline)) void tracepoint_synchronize_unregister(void)
{
 __synchronize_sched();
}
# 13 "include/trace/kmemtrace.h" 2





static inline __attribute__((always_inline)) void kmemtrace_init(void)
{
}


extern struct tracepoint __tracepoint_kmalloc; static inline __attribute__((always_inline)) void trace_kmalloc(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags) { do { if (!0) { if (__builtin_expect(!!((__tracepoint_kmalloc.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmalloc)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmalloc)->funcs) *)&((&__tracepoint_kmalloc)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_kmalloc.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmalloc)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmalloc)->funcs) *)&((&__tracepoint_kmalloc)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) void _trace_kmalloc(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags) { do { if (!1) { if (__builtin_expect(!!((__tracepoint_kmalloc.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmalloc)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmalloc)->funcs) *)&((&__tracepoint_kmalloc)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_kmalloc.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmalloc)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmalloc)->funcs) *)&((&__tracepoint_kmalloc)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) int register_trace_kmalloc(void (*probe)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags)) { return tracepoint_probe_register("kmalloc", (void *)probe); } static inline __attribute__((always_inline)) int unregister_trace_kmalloc(void (*probe)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags)) { return tracepoint_probe_unregister("kmalloc", (void *)probe); };






extern struct tracepoint __tracepoint_kmem_cache_alloc; static inline __attribute__((always_inline)) void trace_kmem_cache_alloc(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags) { do { if (!0) { if (__builtin_expect(!!((__tracepoint_kmem_cache_alloc.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmem_cache_alloc)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmem_cache_alloc)->funcs) *)&((&__tracepoint_kmem_cache_alloc)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_kmem_cache_alloc.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmem_cache_alloc)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmem_cache_alloc)->funcs) *)&((&__tracepoint_kmem_cache_alloc)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) void _trace_kmem_cache_alloc(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags) { do { if (!1) { if (__builtin_expect(!!((__tracepoint_kmem_cache_alloc.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmem_cache_alloc)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmem_cache_alloc)->funcs) *)&((&__tracepoint_kmem_cache_alloc)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_kmem_cache_alloc.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmem_cache_alloc)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmem_cache_alloc)->funcs) *)&((&__tracepoint_kmem_cache_alloc)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) int register_trace_kmem_cache_alloc(void (*probe)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags)) { return tracepoint_probe_register("kmem_cache_alloc", (void *)probe); } static inline __attribute__((always_inline)) int unregister_trace_kmem_cache_alloc(void (*probe)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags)) { return tracepoint_probe_unregister("kmem_cache_alloc", (void *)probe); };






extern struct tracepoint __tracepoint_kmalloc_node; static inline __attribute__((always_inline)) void trace_kmalloc_node(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node) { do { if (!0) { if (__builtin_expect(!!((__tracepoint_kmalloc_node.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmalloc_node)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmalloc_node)->funcs) *)&((&__tracepoint_kmalloc_node)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags, node); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_kmalloc_node.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmalloc_node)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmalloc_node)->funcs) *)&((&__tracepoint_kmalloc_node)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags, node); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) void _trace_kmalloc_node(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node) { do { if (!1) { if (__builtin_expect(!!((__tracepoint_kmalloc_node.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmalloc_node)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmalloc_node)->funcs) *)&((&__tracepoint_kmalloc_node)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags, node); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_kmalloc_node.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmalloc_node)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmalloc_node)->funcs) *)&((&__tracepoint_kmalloc_node)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags, node); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) int register_trace_kmalloc_node(void (*probe)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node)) { return tracepoint_probe_register("kmalloc_node", (void *)probe); } static inline __attribute__((always_inline)) int unregister_trace_kmalloc_node(void (*probe)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node)) { return tracepoint_probe_unregister("kmalloc_node", (void *)probe); };







extern struct tracepoint __tracepoint_kmem_cache_alloc_node; static inline __attribute__((always_inline)) void trace_kmem_cache_alloc_node(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node) { do { if (!0) { if (__builtin_expect(!!((__tracepoint_kmem_cache_alloc_node.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmem_cache_alloc_node)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmem_cache_alloc_node)->funcs) *)&((&__tracepoint_kmem_cache_alloc_node)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags, node); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_kmem_cache_alloc_node.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmem_cache_alloc_node)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmem_cache_alloc_node)->funcs) *)&((&__tracepoint_kmem_cache_alloc_node)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags, node); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) void _trace_kmem_cache_alloc_node(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node) { do { if (!1) { if (__builtin_expect(!!((__tracepoint_kmem_cache_alloc_node.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmem_cache_alloc_node)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmem_cache_alloc_node)->funcs) *)&((&__tracepoint_kmem_cache_alloc_node)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags, node); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_kmem_cache_alloc_node.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmem_cache_alloc_node)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmem_cache_alloc_node)->funcs) *)&((&__tracepoint_kmem_cache_alloc_node)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node))(*it_func))(call_site, ptr, bytes_req, bytes_alloc, gfp_flags, node); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) int register_trace_kmem_cache_alloc_node(void (*probe)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node)) { return tracepoint_probe_register("kmem_cache_alloc_node", (void *)probe); } static inline __attribute__((always_inline)) int unregister_trace_kmem_cache_alloc_node(void (*probe)(unsigned long call_site, const void *ptr, size_t bytes_req, size_t bytes_alloc, gfp_t gfp_flags, int node)) { return tracepoint_probe_unregister("kmem_cache_alloc_node", (void *)probe); };







extern struct tracepoint __tracepoint_kfree; static inline __attribute__((always_inline)) void trace_kfree(unsigned long call_site, const void *ptr) { do { if (!0) { if (__builtin_expect(!!((__tracepoint_kfree.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kfree)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kfree)->funcs) *)&((&__tracepoint_kfree)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr))(*it_func))(call_site, ptr); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_kfree.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kfree)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kfree)->funcs) *)&((&__tracepoint_kfree)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr))(*it_func))(call_site, ptr); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) void _trace_kfree(unsigned long call_site, const void *ptr) { do { if (!1) { if (__builtin_expect(!!((__tracepoint_kfree.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kfree)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kfree)->funcs) *)&((&__tracepoint_kfree)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr))(*it_func))(call_site, ptr); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_kfree.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kfree)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kfree)->funcs) *)&((&__tracepoint_kfree)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr))(*it_func))(call_site, ptr); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) int register_trace_kfree(void (*probe)(unsigned long call_site, const void *ptr)) { return tracepoint_probe_register("kfree", (void *)probe); } static inline __attribute__((always_inline)) int unregister_trace_kfree(void (*probe)(unsigned long call_site, const void *ptr)) { return tracepoint_probe_unregister("kfree", (void *)probe); };


extern struct tracepoint __tracepoint_kmem_cache_free; static inline __attribute__((always_inline)) void trace_kmem_cache_free(unsigned long call_site, const void *ptr) { do { if (!0) { if (__builtin_expect(!!((__tracepoint_kmem_cache_free.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmem_cache_free)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmem_cache_free)->funcs) *)&((&__tracepoint_kmem_cache_free)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr))(*it_func))(call_site, ptr); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_kmem_cache_free.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmem_cache_free)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmem_cache_free)->funcs) *)&((&__tracepoint_kmem_cache_free)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr))(*it_func))(call_site, ptr); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) void _trace_kmem_cache_free(unsigned long call_site, const void *ptr) { do { if (!1) { if (__builtin_expect(!!((__tracepoint_kmem_cache_free.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmem_cache_free)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmem_cache_free)->funcs) *)&((&__tracepoint_kmem_cache_free)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr))(*it_func))(call_site, ptr); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_kmem_cache_free.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_kmem_cache_free)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_kmem_cache_free)->funcs) *)&((&__tracepoint_kmem_cache_free)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(unsigned long call_site, const void *ptr))(*it_func))(call_site, ptr); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) int register_trace_kmem_cache_free(void (*probe)(unsigned long call_site, const void *ptr)) { return tracepoint_probe_register("kmem_cache_free", (void *)probe); } static inline __attribute__((always_inline)) int unregister_trace_kmem_cache_free(void (*probe)(unsigned long call_site, const void *ptr)) { return tracepoint_probe_unregister("kmem_cache_free", (void *)probe); };
# 18 "include/linux/slab_def.h" 2







struct kmem_cache {

 struct array_cache *array[1];

 unsigned int batchcount;
 unsigned int limit;
 unsigned int shared;

 unsigned int buffer_size;
 u32 reciprocal_buffer_size;


 unsigned int flags;
 unsigned int num;



 unsigned int gfporder;


 gfp_t gfpflags;

 size_t colour;
 unsigned int colour_off;
 struct kmem_cache *slabp_cache;
 unsigned int slab_size;
 unsigned int dflags;


 void (*ctor)(void *obj);


 const char *name;
 struct list_head next;
# 94 "include/linux/slab_def.h"
 struct kmem_list3 *nodelists[(1 << 0)];



};


struct cache_sizes {
 size_t cs_size;
 struct kmem_cache *cs_cachep;



};
extern struct cache_sizes malloc_sizes[];

void *kmem_cache_alloc(struct kmem_cache *, gfp_t);
void *__kmalloc(size_t size, gfp_t flags);





static inline __attribute__((always_inline)) __attribute__((always_inline)) void *
kmem_cache_alloc_notrace(struct kmem_cache *cachep, gfp_t flags)
{
 return kmem_cache_alloc(cachep, flags);
}
static inline __attribute__((always_inline)) size_t slab_buffer_size(struct kmem_cache *cachep)
{
 return 0;
}


static inline __attribute__((always_inline)) __attribute__((always_inline)) void *kmalloc(size_t size, gfp_t flags)
{
 struct kmem_cache *cachep;
 void *ret;

 if (__builtin_constant_p(size)) {
  int i = 0;

  if (!size)
   return ((void *)16);






# 1 "include/linux/kmalloc_sizes.h" 1

 if (size <= 32) goto found; else i++;

 if (size <= 64) goto found; else i++;

 if (size <= 96) goto found; else i++;

 if (size <= 128) goto found; else i++;

 if (size <= 192) goto found; else i++;

 if (size <= 256) goto found; else i++;
 if (size <= 512) goto found; else i++;
 if (size <= 1024) goto found; else i++;
 if (size <= 2048) goto found; else i++;
 if (size <= 4096) goto found; else i++;
 if (size <= 8192) goto found; else i++;
 if (size <= 16384) goto found; else i++;
 if (size <= 32768) goto found; else i++;
 if (size <= 65536) goto found; else i++;
 if (size <= 131072) goto found; else i++;

 if (size <= 262144) goto found; else i++;


 if (size <= 524288) goto found; else i++;


 if (size <= 1048576) goto found; else i++;


 if (size <= 2097152) goto found; else i++;


 if (size <= 4194304) goto found; else i++;
# 145 "include/linux/slab_def.h" 2

  return ((void *)0);
found:





   cachep = malloc_sizes[i].cs_cachep;

  ret = kmem_cache_alloc_notrace(cachep, flags);

  trace_kmalloc(({ __label__ __here; __here: (unsigned long)&&__here; }), ret,
         size, slab_buffer_size(cachep), flags);

  return ret;
 }
 return __kmalloc(size, flags);
}
# 167 "include/linux/slab.h" 2
# 220 "include/linux/slab.h"
static inline __attribute__((always_inline)) void *kcalloc(size_t n, size_t size, gfp_t flags)
{
 if (size != 0 && n > (~0UL) / size)
  return ((void *)0);
 return __kmalloc(n * size, flags | (( gfp_t)0x8000u));
}
# 238 "include/linux/slab.h"
static inline __attribute__((always_inline)) void *kmalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc(size, flags);
}

static inline __attribute__((always_inline)) void *__kmalloc_node(size_t size, gfp_t flags, int node)
{
 return __kmalloc(size, flags);
}

void *kmem_cache_alloc(struct kmem_cache *, gfp_t);

static inline __attribute__((always_inline)) void *kmem_cache_alloc_node(struct kmem_cache *cachep,
     gfp_t flags, int node)
{
 return kmem_cache_alloc(cachep, flags);
}
# 303 "include/linux/slab.h"
static inline __attribute__((always_inline)) void *kmem_cache_zalloc(struct kmem_cache *k, gfp_t flags)
{
 return kmem_cache_alloc(k, flags | (( gfp_t)0x8000u));
}






static inline __attribute__((always_inline)) void *kzalloc(size_t size, gfp_t flags)
{
 return kmalloc(size, flags | (( gfp_t)0x8000u));
}







static inline __attribute__((always_inline)) void *kzalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc_node(size, flags | (( gfp_t)0x8000u), node);
}
# 6 "include/linux/percpu.h" 2


# 1 "include/linux/pfn.h" 1
# 9 "include/linux/percpu.h" 2

# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/percpu.h" 1



# 1 "include/asm-generic/percpu.h" 1
# 5 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/percpu.h" 2
# 11 "include/linux/percpu.h" 2
# 211 "include/linux/percpu.h"
static inline __attribute__((always_inline)) void *__alloc_percpu(size_t size, size_t align)
{





 ({ static int __warned; int __ret_warn_once = !!(align > (1 << 5)); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!__warned); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath("include/linux/percpu.h", 218, ((void *)0)); __builtin_expect(!!(__ret_warn_on), 0); })) __warned = 1; __builtin_expect(!!(__ret_warn_once), 0); });
 return kzalloc(size, ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
}

static inline __attribute__((always_inline)) void free_percpu(void *p)
{
 kfree(p);
}
# 6 "include/linux/vmstat.h" 2
# 1 "include/linux/mm.h" 1
# 7 "include/linux/vmstat.h" 2
# 31 "include/linux/vmstat.h"
enum vm_event_item { PGPGIN, PGPGOUT, PSWPIN, PSWPOUT,
  PGALLOC_NORMAL , PGALLOC_MOVABLE,
  PGFREE, PGACTIVATE, PGDEACTIVATE,
  PGFAULT, PGMAJFAULT,
  PGREFILL_NORMAL , PGREFILL_MOVABLE,
  PGSTEAL_NORMAL , PGSTEAL_MOVABLE,
  PGSCAN_KSWAPD_NORMAL , PGSCAN_KSWAPD_MOVABLE,
  PGSCAN_DIRECT_NORMAL , PGSCAN_DIRECT_MOVABLE,
  PGINODESTEAL, SLABS_SCANNED, KSWAPD_STEAL, KSWAPD_INODESTEAL,
  PAGEOUTRUN, ALLOCSTALL, PGROTATED,




  UNEVICTABLE_PGCULLED,
  UNEVICTABLE_PGSCANNED,
  UNEVICTABLE_PGRESCUED,
  UNEVICTABLE_PGMLOCKED,
  UNEVICTABLE_PGMUNLOCKED,
  UNEVICTABLE_PGCLEARED,
  UNEVICTABLE_PGSTRANDED,
  UNEVICTABLE_MLOCKFREED,

  NR_VM_EVENT_ITEMS
};

extern int sysctl_stat_interval;
# 70 "include/linux/vmstat.h"
struct vm_event_state {
 unsigned long event[NR_VM_EVENT_ITEMS];
};

extern __typeof__(struct vm_event_state) per_cpu__vm_event_states;

static inline __attribute__((always_inline)) void __count_vm_event(enum vm_event_item item)
{

 (*({ extern int simple_identifier_vm_event_states(void); do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); &per_cpu__vm_event_states; })).event[item]++;
 do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0);



}

static inline __attribute__((always_inline)) void count_vm_event(enum vm_event_item item)
{
 (*({ extern int simple_identifier_vm_event_states(void); do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); &per_cpu__vm_event_states; })).event[item]++;
 do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0);
}

static inline __attribute__((always_inline)) void __count_vm_events(enum vm_event_item item, long delta)
{

 (*({ extern int simple_identifier_vm_event_states(void); do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); &per_cpu__vm_event_states; })).event[item] += delta;
 do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0);



}

static inline __attribute__((always_inline)) void count_vm_events(enum vm_event_item item, long delta)
{
 (*({ extern int simple_identifier_vm_event_states(void); do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); &per_cpu__vm_event_states; })).event[item] += delta;
 do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0);
}

extern void all_vm_events(unsigned long *);

extern void vm_events_fold_cpu(int cpu);
# 148 "include/linux/vmstat.h"
extern atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];

static inline __attribute__((always_inline)) void zone_page_state_add(long x, struct zone *zone,
     enum zone_stat_item item)
{
 atomic_long_add(x, &zone->vm_stat[item]);
 atomic_long_add(x, &vm_stat[item]);
}

static inline __attribute__((always_inline)) unsigned long global_page_state(enum zone_stat_item item)
{
 long x = atomic_long_read(&vm_stat[item]);




 return x;
}

static inline __attribute__((always_inline)) unsigned long zone_page_state(struct zone *zone,
     enum zone_stat_item item)
{
 long x = atomic_long_read(&zone->vm_stat[item]);




 return x;
}

extern unsigned long global_lru_pages(void);

static inline __attribute__((always_inline)) unsigned long zone_lru_pages(struct zone *zone)
{
 return (zone_page_state(zone, NR_ACTIVE_ANON)
  + zone_page_state(zone, NR_ACTIVE_FILE)
  + zone_page_state(zone, NR_INACTIVE_ANON)
  + zone_page_state(zone, NR_INACTIVE_FILE));
}
# 230 "include/linux/vmstat.h"
static inline __attribute__((always_inline)) void zap_zone_vm_stats(struct zone *zone)
{
 ({ void *__p = (zone->vm_stat); size_t __n = sizeof(zone->vm_stat); if ((__n) != 0) { if (__builtin_constant_p((0)) && (0) == 0) __memzero((__p),(__n)); else memset((__p),(0),(__n)); } (__p); });
}

extern void inc_zone_state(struct zone *, enum zone_stat_item);
# 258 "include/linux/vmstat.h"
static inline __attribute__((always_inline)) void __mod_zone_page_state(struct zone *zone,
   enum zone_stat_item item, int delta)
{
 zone_page_state_add(delta, zone, item);
}

static inline __attribute__((always_inline)) void __inc_zone_state(struct zone *zone, enum zone_stat_item item)
{
 atomic_long_inc(&zone->vm_stat[item]);
 atomic_long_inc(&vm_stat[item]);
}

static inline __attribute__((always_inline)) void __inc_zone_page_state(struct page *page,
   enum zone_stat_item item)
{
 __inc_zone_state(page_zone(page), item);
}

static inline __attribute__((always_inline)) void __dec_zone_state(struct zone *zone, enum zone_stat_item item)
{
 atomic_long_dec(&zone->vm_stat[item]);
 atomic_long_dec(&vm_stat[item]);
}

static inline __attribute__((always_inline)) void __dec_zone_page_state(struct page *page,
   enum zone_stat_item item)
{
 __dec_zone_state(page_zone(page), item);
}
# 296 "include/linux/vmstat.h"
static inline __attribute__((always_inline)) void refresh_cpu_vm_stats(int cpu) { }
# 595 "include/linux/mm.h" 2

static inline __attribute__((always_inline)) __attribute__((always_inline)) void *lowmem_page_address(struct page *page)
{
 return ((void *)(((unsigned long)(((unsigned long)((page) - mem_map) + ((0x80000000UL) >> 12)) << 12)) - (0x80000000UL) + (0xC0000000UL)));
}
# 653 "include/linux/mm.h"
extern struct address_space swapper_space;
static inline __attribute__((always_inline)) struct address_space *page_mapping(struct page *page)
{
 struct address_space *mapping = page->mapping;

 do { } while (0);

 if (__builtin_expect(!!(PageSwapCache(page)), 0))
  mapping = &swapper_space;
 else

 if (__builtin_expect(!!((unsigned long)mapping & 1), 0))
  mapping = ((void *)0);
 return mapping;
}

static inline __attribute__((always_inline)) int PageAnon(struct page *page)
{
 return ((unsigned long)page->mapping & 1) != 0;
}





static inline __attribute__((always_inline)) unsigned long page_index(struct page *page)
{
 if (__builtin_expect(!!(PageSwapCache(page)), 0))
  return ((page)->private);
 return page->index;
}






static inline __attribute__((always_inline)) void reset_page_mapcount(struct page *page)
{
 atomic_set(&(page)->_mapcount, -1);
}

static inline __attribute__((always_inline)) int page_mapcount(struct page *page)
{
 return ((&(page)->_mapcount)->counter) + 1;
}




static inline __attribute__((always_inline)) int page_mapped(struct page *page)
{
 return ((&(page)->_mapcount)->counter) >= 0;
}
# 729 "include/linux/mm.h"
extern void pagefault_out_of_memory(void);



extern void show_free_areas(void);


extern int shmem_lock(struct file *file, int lock, struct user_struct *user);







struct file *shmem_file_setup(char *name, loff_t size, unsigned long flags);

int shmem_zero_setup(struct vm_area_struct *);
# 756 "include/linux/mm.h"
extern int can_do_mlock(void);
extern int user_shm_lock(size_t, struct user_struct *);
extern void user_shm_unlock(size_t, struct user_struct *);




struct zap_details {
 struct vm_area_struct *nonlinear_vma;
 struct address_space *check_mapping;
 unsigned long first_index;
 unsigned long last_index;
 spinlock_t *i_mmap_lock;
 unsigned long truncate_count;
};

struct page *vm_normal_page(struct vm_area_struct *vma, unsigned long addr,
  pte_t pte);

int zap_vma_ptes(struct vm_area_struct *vma, unsigned long address,
  unsigned long size);
unsigned long zap_page_range(struct vm_area_struct *vma, unsigned long address,
  unsigned long size, struct zap_details *);
unsigned long unmap_vmas(struct mmu_gather *tlb,
  struct vm_area_struct *start_vma, unsigned long start_addr,
  unsigned long end_addr, unsigned long *nr_accounted,
  struct zap_details *);
# 794 "include/linux/mm.h"
struct mm_walk {
 int (*pgd_entry)(pgd_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pud_entry)(pgd_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pmd_entry)(pmd_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pte_entry)(pte_t *, unsigned long, unsigned long, struct mm_walk *);
 int (*pte_hole)(unsigned long, unsigned long, struct mm_walk *);
 struct mm_struct *mm;
 void *private;
};

int walk_page_range(unsigned long addr, unsigned long end,
  struct mm_walk *walk);
void free_pgd_range(struct mmu_gather *tlb, unsigned long addr,
  unsigned long end, unsigned long floor, unsigned long ceiling);
int copy_page_range(struct mm_struct *dst, struct mm_struct *src,
   struct vm_area_struct *vma);
void unmap_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen, int even_cows);
int follow_phys(struct vm_area_struct *vma, unsigned long address,
  unsigned int flags, unsigned long *prot, resource_size_t *phys);
int generic_access_phys(struct vm_area_struct *vma, unsigned long addr,
   void *buf, int len, int write);

static inline __attribute__((always_inline)) void unmap_shared_mapping_range(struct address_space *mapping,
  loff_t const holebegin, loff_t const holelen)
{
 unmap_mapping_range(mapping, holebegin, holelen, 0);
}

extern int vmtruncate(struct inode * inode, loff_t offset);
extern int vmtruncate_range(struct inode * inode, loff_t offset, loff_t end);


extern int handle_mm_fault(struct mm_struct *mm, struct vm_area_struct *vma,
   unsigned long address, int write_access);
# 840 "include/linux/mm.h"
extern int make_pages_present(unsigned long addr, unsigned long end);
extern int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write);

int get_user_pages(struct task_struct *tsk, struct mm_struct *mm, unsigned long start,
  int len, int write, int force, struct page **pages, struct vm_area_struct **vmas);

extern int try_to_release_page(struct page * page, gfp_t gfp_mask);
extern void do_invalidatepage(struct page *page, unsigned long offset);

int __set_page_dirty_nobuffers(struct page *page);
int __set_page_dirty_no_writeback(struct page *page);
int redirty_page_for_writepage(struct writeback_control *wbc,
    struct page *page);
int set_page_dirty(struct page *page);
int set_page_dirty_lock(struct page *page);
int clear_page_dirty_for_io(struct page *page);

extern unsigned long move_page_tables(struct vm_area_struct *vma,
  unsigned long old_addr, struct vm_area_struct *new_vma,
  unsigned long new_addr, unsigned long len);
extern unsigned long do_mremap(unsigned long addr,
          unsigned long old_len, unsigned long new_len,
          unsigned long flags, unsigned long new_addr);
extern int mprotect_fixup(struct vm_area_struct *vma,
     struct vm_area_struct **pprev, unsigned long start,
     unsigned long end, unsigned long newflags);
# 877 "include/linux/mm.h"
int get_user_pages_fast(unsigned long start, int nr_pages, int write,
   struct page **pages);
# 895 "include/linux/mm.h"
struct shrinker {
 int (*shrink)(int nr_to_scan, gfp_t gfp_mask);
 int seeks;


 struct list_head list;
 long nr;
};

extern void register_shrinker(struct shrinker *);
extern void unregister_shrinker(struct shrinker *);

int vma_wants_writenotify(struct vm_area_struct *vma);

extern pte_t *get_locked_pte(struct mm_struct *mm, unsigned long addr, spinlock_t **ptl);


static inline __attribute__((always_inline)) int __pud_alloc(struct mm_struct *mm, pgd_t *pgd,
      unsigned long address)
{
 return 0;
}
# 928 "include/linux/mm.h"
int __pmd_alloc(struct mm_struct *mm, pgd_t *pud, unsigned long address);


int __pte_alloc(struct mm_struct *mm, pmd_t *pmd, unsigned long address);
int __pte_alloc_kernel(pmd_t *pmd, unsigned long address);
# 1020 "include/linux/mm.h"
static inline __attribute__((always_inline)) struct page *pte_lock_init(struct page *page) { return page; }




static inline __attribute__((always_inline)) struct page *__pgtable_page_ctor(struct page *page)
{
 page = pte_lock_init(page);
 if (page)
  __inc_zone_page_state(page, NR_PAGETABLE);
 return page;
}






static inline __attribute__((always_inline)) void pgtable_page_dtor(struct page *page)
{
 do {} while (0);
 __dec_zone_page_state(page, NR_PAGETABLE);
}
# 1070 "include/linux/mm.h"
extern void free_area_init(unsigned long * zones_size);
extern void free_area_init_node(int nid, unsigned long * zones_size,
  unsigned long zone_start_pfn, unsigned long *zholes_size);
# 1123 "include/linux/mm.h"
static inline __attribute__((always_inline)) int __early_pfn_to_nid(unsigned long pfn)
{
 return 0;
}
# 1136 "include/linux/mm.h"
extern void set_dma_reserve(unsigned long new_dma_reserve);
extern void memmap_init_zone(unsigned long, int, unsigned long,
    unsigned long, enum memmap_context);
extern void setup_per_zone_pages_min(void);
extern void mem_init(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) mmap_init(void);
extern void show_mem(void);
extern void si_meminfo(struct sysinfo * val);
extern void si_meminfo_node(struct sysinfo *val, int nid);
extern int after_bootmem;




static inline __attribute__((always_inline)) void setup_per_cpu_pageset(void) {}



extern atomic_t mmap_pages_allocated;


void vma_prio_tree_add(struct vm_area_struct *, struct vm_area_struct *old);
void vma_prio_tree_insert(struct vm_area_struct *, struct prio_tree_root *);
void vma_prio_tree_remove(struct vm_area_struct *, struct prio_tree_root *);
struct vm_area_struct *vma_prio_tree_next(struct vm_area_struct *vma,
 struct prio_tree_iter *iter);





static inline __attribute__((always_inline)) void vma_nonlinear_insert(struct vm_area_struct *vma,
     struct list_head *list)
{
 vma->shared.vm_set.parent = ((void *)0);
 list_add_tail(&vma->shared.vm_set.list, list);
}


extern int __vm_enough_memory(struct mm_struct *mm, long pages, int cap_sys_admin);
extern void vma_adjust(struct vm_area_struct *vma, unsigned long start,
 unsigned long end, unsigned long pgoff, struct vm_area_struct *insert);
extern struct vm_area_struct *vma_merge(struct mm_struct *,
 struct vm_area_struct *prev, unsigned long addr, unsigned long end,
 unsigned long vm_flags, struct anon_vma *, struct file *, unsigned long,
 struct mempolicy *);
extern struct anon_vma *find_mergeable_anon_vma(struct vm_area_struct *);
extern int split_vma(struct mm_struct *,
 struct vm_area_struct *, unsigned long addr, int new_below);
extern int insert_vm_struct(struct mm_struct *, struct vm_area_struct *);
extern void __vma_link_rb(struct mm_struct *, struct vm_area_struct *,
 struct rb_node **, struct rb_node *);
extern void unlink_file_vma(struct vm_area_struct *);
extern struct vm_area_struct *copy_vma(struct vm_area_struct **,
 unsigned long addr, unsigned long len, unsigned long pgoff);
extern void exit_mmap(struct mm_struct *);

extern int mm_take_all_locks(struct mm_struct *mm);
extern void mm_drop_all_locks(struct mm_struct *mm);



extern void added_exe_file_vma(struct mm_struct *mm);
extern void removed_exe_file_vma(struct mm_struct *mm);
# 1208 "include/linux/mm.h"
extern int may_expand_vm(struct mm_struct *mm, unsigned long npages);
extern int install_special_mapping(struct mm_struct *mm,
       unsigned long addr, unsigned long len,
       unsigned long flags, struct page **pages);

extern unsigned long get_unmapped_area(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);

extern unsigned long do_mmap_pgoff(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long pgoff);
extern unsigned long mmap_region(struct file *file, unsigned long addr,
 unsigned long len, unsigned long flags,
 unsigned int vm_flags, unsigned long pgoff);

static inline __attribute__((always_inline)) unsigned long do_mmap(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot,
 unsigned long flag, unsigned long offset)
{
 unsigned long ret = -22;
 if ((offset + (((len)+((typeof(len))((1UL << 12))-1))&~((typeof(len))((1UL << 12))-1))) < offset)
  goto out;
 if (!(offset & ~(~((1UL << 12)-1))))
  ret = do_mmap_pgoff(file, addr, len, prot, flag, offset >> 12);
out:
 return ret;
}

extern int do_munmap(struct mm_struct *, unsigned long, size_t);

extern unsigned long do_brk(unsigned long, unsigned long);


extern unsigned long page_unuse(struct page *);
extern void truncate_inode_pages(struct address_space *, loff_t);
extern void truncate_inode_pages_range(struct address_space *,
           loff_t lstart, loff_t lend);


extern int filemap_fault(struct vm_area_struct *, struct vm_fault *);


int write_one_page(struct page *page, int wait);
void task_dirty_inc(struct task_struct *tsk);





int do_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);
int force_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);

void page_cache_sync_readahead(struct address_space *mapping,
          struct file_ra_state *ra,
          struct file *filp,
          unsigned long offset,
          unsigned long size);

void page_cache_async_readahead(struct address_space *mapping,
    struct file_ra_state *ra,
    struct file *filp,
    struct page *pg,
    unsigned long offset,
    unsigned long size);

unsigned long max_sane_readahead(unsigned long nr);


extern int expand_stack(struct vm_area_struct *vma, unsigned long address);



extern int expand_stack_downwards(struct vm_area_struct *vma,
      unsigned long address);


extern struct vm_area_struct * find_vma(struct mm_struct * mm, unsigned long addr);
extern struct vm_area_struct * find_vma_prev(struct mm_struct * mm, unsigned long addr,
          struct vm_area_struct **pprev);



static inline __attribute__((always_inline)) struct vm_area_struct * find_vma_intersection(struct mm_struct * mm, unsigned long start_addr, unsigned long end_addr)
{
 struct vm_area_struct * vma = find_vma(mm,start_addr);

 if (vma && end_addr <= vma->vm_start)
  vma = ((void *)0);
 return vma;
}

static inline __attribute__((always_inline)) unsigned long vma_pages(struct vm_area_struct *vma)
{
 return (vma->vm_end - vma->vm_start) >> 12;
}

pgprot_t vm_get_page_prot(unsigned long vm_flags);
struct vm_area_struct *find_extend_vma(struct mm_struct *, unsigned long addr);
int remap_pfn_range(struct vm_area_struct *, unsigned long addr,
   unsigned long pfn, unsigned long size, pgprot_t);
int vm_insert_page(struct vm_area_struct *, unsigned long addr, struct page *);
int vm_insert_pfn(struct vm_area_struct *vma, unsigned long addr,
   unsigned long pfn);
int vm_insert_mixed(struct vm_area_struct *vma, unsigned long addr,
   unsigned long pfn);

struct page *follow_page(struct vm_area_struct *, unsigned long address,
   unsigned int foll_flags);





typedef int (*pte_fn_t)(pte_t *pte, pgtable_t token, unsigned long addr,
   void *data);
extern int apply_to_page_range(struct mm_struct *mm, unsigned long address,
          unsigned long size, pte_fn_t fn, void *data);


void vm_stat_account(struct mm_struct *, unsigned long, struct file *, long);
# 1349 "include/linux/mm.h"
static inline __attribute__((always_inline)) void
kernel_map_pages(struct page *page, int numpages, int enable) {}
static inline __attribute__((always_inline)) void enable_debug_pagealloc(void)
{
}





extern struct vm_area_struct *get_gate_vma(struct task_struct *tsk);




int in_gate_area_no_task(unsigned long addr);



int drop_caches_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
unsigned long shrink_slab(unsigned long scanned, gfp_t gfp_mask,
   unsigned long lru_pages);




extern int randomize_va_space;


const char * arch_vma_name(struct vm_area_struct *vma);
void print_vma_addr(char *prefix, unsigned long rip);

struct page *sparse_mem_map_populate(unsigned long pnum, int nid);
pgd_t *vmemmap_pgd_populate(unsigned long addr, int node);
pgd_t *vmemmap_pud_populate(pgd_t *pgd, unsigned long addr, int node);
pmd_t *vmemmap_pmd_populate(pgd_t *pud, unsigned long addr, int node);
pte_t *vmemmap_pte_populate(pmd_t *pmd, unsigned long addr, int node);
void *vmemmap_alloc_block(unsigned long size, int node);
void vmemmap_verify(pte_t *, int, unsigned long, unsigned long);
int vmemmap_populate_basepages(struct page *start_page,
      unsigned long pages, int node);
int vmemmap_populate(struct page *start_page, unsigned long pages, int node);
void vmemmap_populate_print_last(void);

extern void *alloc_locked_buffer(size_t size);
extern void free_locked_buffer(void *buffer, size_t size);
extern void release_locked_buffer(void *buffer, size_t size);
# 19 "mm/page_alloc.c" 2
# 1 "include/linux/swap.h" 1







# 1 "include/linux/memcontrol.h" 1
# 22 "include/linux/memcontrol.h"
# 1 "include/linux/cgroup.h" 1
# 11 "include/linux/cgroup.h"
# 1 "include/linux/sched.h" 1
# 44 "include/linux/sched.h"
struct sched_param {
 int sched_priority;
};



# 1 "include/linux/capability.h" 1
# 18 "include/linux/capability.h"
struct task_struct;
# 40 "include/linux/capability.h"
typedef struct __user_cap_header_struct {
 __u32 version;
 int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
        __u32 effective;
        __u32 permitted;
        __u32 inheritable;
} *cap_user_data_t;
# 72 "include/linux/capability.h"
struct vfs_cap_data {
 __le32 magic_etc;
 struct {
  __le32 permitted;
  __le32 inheritable;
 } data[2];
};
# 99 "include/linux/capability.h"
typedef struct kernel_cap_struct {
 __u32 cap[2];
} kernel_cap_t;


struct cpu_vfs_cap_data {
 __u32 magic_etc;
 kernel_cap_t permitted;
 kernel_cap_t inheritable;
};
# 429 "include/linux/capability.h"
static inline __attribute__((always_inline)) kernel_cap_t cap_combine(const kernel_cap_t a,
           const kernel_cap_t b)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] | b.cap[__capi]; } } while (0);
 return dest;
}

static inline __attribute__((always_inline)) kernel_cap_t cap_intersect(const kernel_cap_t a,
      const kernel_cap_t b)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] & b.cap[__capi]; } } while (0);
 return dest;
}

static inline __attribute__((always_inline)) kernel_cap_t cap_drop(const kernel_cap_t a,
        const kernel_cap_t drop)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] &~ drop.cap[__capi]; } } while (0);
 return dest;
}

static inline __attribute__((always_inline)) kernel_cap_t cap_invert(const kernel_cap_t c)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = ~ c.cap[__capi]; } } while (0);
 return dest;
}

static inline __attribute__((always_inline)) int cap_isclear(const kernel_cap_t a)
{
 unsigned __capi;
 for (__capi = 0; __capi < 2; ++__capi) {
  if (a.cap[__capi] != 0)
   return 0;
 }
 return 1;
}
# 477 "include/linux/capability.h"
static inline __attribute__((always_inline)) int cap_issubset(const kernel_cap_t a, const kernel_cap_t set)
{
 kernel_cap_t dest;
 dest = cap_drop(a, set);
 return cap_isclear(dest);
}



static inline __attribute__((always_inline)) int cap_is_fs_cap(int cap)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))), ((1 << ((32) & 31))) } });
 return !!((1 << ((cap) & 31)) & __cap_fs_set.cap[((cap) >> 5)]);
}

static inline __attribute__((always_inline)) kernel_cap_t cap_drop_fs_set(const kernel_cap_t a)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))), ((1 << ((32) & 31))) } });
 return cap_drop(a, __cap_fs_set);
}

static inline __attribute__((always_inline)) kernel_cap_t cap_raise_fs_set(const kernel_cap_t a,
         const kernel_cap_t permitted)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))), ((1 << ((32) & 31))) } });
 return cap_combine(a,
      cap_intersect(permitted, __cap_fs_set));
}

static inline __attribute__((always_inline)) kernel_cap_t cap_drop_nfsd_set(const kernel_cap_t a)
{
 const kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))) | (1 << ((24) & 31)) | (1 << ((27) & 31)), ((1 << ((32) & 31))) } });
 return cap_drop(a, __cap_fs_set);
}

static inline __attribute__((always_inline)) kernel_cap_t cap_raise_nfsd_set(const kernel_cap_t a,
           const kernel_cap_t permitted)
{
 const kernel_cap_t __cap_nfsd_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))) | (1 << ((24) & 31)) | (1 << ((27) & 31)), ((1 << ((32) & 31))) } });
 return cap_combine(a,
      cap_intersect(permitted, __cap_nfsd_set));
}

extern const kernel_cap_t __cap_empty_set;
extern const kernel_cap_t __cap_full_set;
extern const kernel_cap_t __cap_init_eff_set;
# 550 "include/linux/capability.h"
extern int capable(int cap);


struct dentry;
extern int get_vfs_caps_from_disk(const struct dentry *dentry, struct cpu_vfs_cap_data *cpu_caps);
# 51 "include/linux/sched.h" 2



# 1 "include/linux/timex.h" 1
# 56 "include/linux/timex.h"
# 1 "include/linux/time.h" 1
# 9 "include/linux/time.h"
# 1 "include/linux/math64.h" 1




# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/div64.h" 1
# 6 "include/linux/math64.h" 2
# 41 "include/linux/math64.h"
static inline __attribute__((always_inline)) u64 div_u64_rem(u64 dividend, u32 divisor, u32 *remainder)
{
 *remainder = ({ unsigned int __r, __b = (divisor); if (!__builtin_constant_p(__b) || __b == 0 || (6 < 4 && (__b & (__b - 1)) != 0)) { __r = ({ register unsigned int __base asm("r4") = __b; register unsigned long long __n asm("r0") = dividend; register unsigned long long __res asm("r2"); register unsigned int __rem asm("r1"); asm( ".ifnc " "%0" "," "r1" " ; .err ; .endif\n\t" ".ifnc " "%1" "," "r2" " ; .err ; .endif\n\t" ".ifnc " "%2" "," "r0" " ; .err ; .endif\n\t" ".ifnc " "%3" "," "r4" " ; .err ; .endif\n\t" "bl	__do_div64" : "=r" (__rem), "=r" (__res) : "r" (__n), "r" (__base) : "ip", "lr", "cc"); dividend = __res; __rem; }); } else if ((__b & (__b - 1)) == 0) { __r = dividend; __r &= (__b - 1); dividend /= __b; } else { unsigned long long __res, __x, __t, __m, __n = dividend; unsigned int __c, __p, __z = 0; __r = __n; __p = 1 << ({ unsigned int __left = (__b), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m = (~0ULL / __b) * __p; __m += (((~0ULL % __b + 1) * __p) + __b - 1) / __b; __x = ~0ULL / __b * __b - 1; __res = (__m & 0xffffffff) * (__x & 0xffffffff); __res >>= 32; __res += (__m & 0xffffffff) * (__x >> 32); __t = __res; __res += (__x & 0xffffffff) * (__m >> 32); __t = (__res < __t) ? (1ULL << 32) : 0; __res = (__res >> 32) + __t; __res += (__m >> 32) * (__x >> 32); __res /= __p; if (~0ULL % (__b / (__b & -__b)) == 0) { __n /= (__b & -__b); __m = ~0ULL / (__b / (__b & -__b)); __p = 1; __c = 1; } else if (__res != __x / __b) { __c = 1; __m = (~0ULL / __b) * __p; __m += ((~0ULL % __b + 1) * __p) / __b; } else { unsigned int __bits = -(__m & -__m); __bits |= __m >> 32; __bits = (~__bits) << 1; if (!__bits) { __p /= (__m & -__m); __m /= (__m & -__m); } else { __p >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); } __c = 0; } if (!__c) { asm ( "umull	%Q0, %R0, %1, %Q2\n\t" "mov	%Q0, #0" : "=&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { __res = __m; asm ( "umlal	%Q0, %R0, %Q1, %Q2\n\t" "mov	%Q0, #0" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umull	%Q0, %R0, %Q1, %Q2\n\t" "cmn	%Q0, %Q1\n\t" "adcs	%R0, %R0, %R1\n\t" "adc	%Q0, %3, #0" : "=&r" (__res) : "r" (__m), "r" (__n), "r" (__z) : "cc" ); } if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { asm ( "umlal	%R0, %Q0, %R1, %Q2\n\t" "umlal	%R0, %Q0, %Q1, %R2\n\t" "mov	%R0, #0\n\t" "umlal	%Q0, %R0, %R1, %R2" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umlal	%R0, %Q0, %R2, %Q3\n\t" "umlal	%R0, %1, %Q2, %R3\n\t" "mov	%R0, #0\n\t" "adds	%Q0, %1, %Q0\n\t" "adc	%R0, %R0, #0\n\t" "umlal	%Q0, %R0, %R2, %R3" : "+&r" (__res), "+&r" (__z) : "r" (__m), "r" (__n) : "cc" ); } __res /= __p; { unsigned int __res0 = __res; unsigned int __b0 = __b; __r -= __res0 * __b0; } dividend = __res; } __r; });
 return dividend;
}



extern s64 div_s64_rem(s64 dividend, s32 divisor, s32 *remainder);



extern u64 div64_u64(u64 dividend, u64 divisor);
# 66 "include/linux/math64.h"
static inline __attribute__((always_inline)) u64 div_u64(u64 dividend, u32 divisor)
{
 u32 remainder;
 return div_u64_rem(dividend, divisor, &remainder);
}






static inline __attribute__((always_inline)) s64 div_s64(s64 dividend, s32 divisor)
{
 s32 remainder;
 return div_s64_rem(dividend, divisor, &remainder);
}


u32 iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder);

static inline __attribute__((always_inline)) __attribute__((always_inline)) u32
__iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder)
{
 u32 ret = 0;

 while (dividend >= divisor) {


  asm("" : "+rm"(dividend));

  dividend -= divisor;
  ret++;
 }

 *remainder = dividend;

 return ret;
}
# 10 "include/linux/time.h" 2




struct timespec {
 __kernel_time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 __kernel_time_t tv_sec;
 __kernel_suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};



extern struct timezone sys_tz;
# 45 "include/linux/time.h"
static inline __attribute__((always_inline)) int timespec_equal(const struct timespec *a,
                                 const struct timespec *b)
{
 return (a->tv_sec == b->tv_sec) && (a->tv_nsec == b->tv_nsec);
}






static inline __attribute__((always_inline)) int timespec_compare(const struct timespec *lhs, const struct timespec *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_nsec - rhs->tv_nsec;
}

static inline __attribute__((always_inline)) int timeval_compare(const struct timeval *lhs, const struct timeval *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_usec - rhs->tv_usec;
}

extern unsigned long mktime(const unsigned int year, const unsigned int mon,
       const unsigned int day, const unsigned int hour,
       const unsigned int min, const unsigned int sec);

extern void set_normalized_timespec(struct timespec *ts, time_t sec, long nsec);
extern struct timespec timespec_add_safe(const struct timespec lhs,
      const struct timespec rhs);




static inline __attribute__((always_inline)) struct timespec timespec_sub(struct timespec lhs,
      struct timespec rhs)
{
 struct timespec ts_delta;
 set_normalized_timespec(&ts_delta, lhs.tv_sec - rhs.tv_sec,
    lhs.tv_nsec - rhs.tv_nsec);
 return ts_delta;
}







extern struct timespec xtime;
extern struct timespec wall_to_monotonic;
extern raw_seqlock_t xtime_lock;

extern unsigned long read_persistent_clock(void);
extern int update_persistent_clock(struct timespec now);
extern int no_sync_cmos_clock ;
void timekeeping_init(void);
extern int timekeeping_suspended;

unsigned long get_seconds(void);
struct timespec current_kernel_time(void);




extern void do_gettimeofday(struct timeval *tv);
extern int do_settimeofday(struct timespec *tv);
extern int do_sys_settimeofday(struct timespec *tv, struct timezone *tz);

extern long do_utimes(int dfd, char *filename, struct timespec *times, int flags);
struct itimerval;
extern int do_setitimer(int which, struct itimerval *value,
   struct itimerval *ovalue);
extern unsigned int alarm_setitimer(unsigned int seconds);
extern int do_getitimer(int which, struct itimerval *value);
extern void getnstimeofday(struct timespec *tv);
extern void getrawmonotonic(struct timespec *ts);
extern void getboottime(struct timespec *ts);
extern void monotonic_to_bootbased(struct timespec *ts);

extern struct timespec timespec_trunc(struct timespec t, unsigned gran);
extern int timekeeping_valid_for_hres(void);
extern void update_wall_time(void);
extern void update_xtime_cache(u64 nsec);

struct tms;
extern void do_sys_times(struct tms *);
# 146 "include/linux/time.h"
static inline __attribute__((always_inline)) s64 timespec_to_ns(const struct timespec *ts)
{
 return ((s64) ts->tv_sec * 1000000000L) + ts->tv_nsec;
}
# 158 "include/linux/time.h"
static inline __attribute__((always_inline)) s64 timeval_to_ns(const struct timeval *tv)
{
 return ((s64) tv->tv_sec * 1000000000L) +
  tv->tv_usec * 1000L;
}







extern struct timespec ns_to_timespec(const s64 nsec);







extern struct timeval ns_to_timeval(const s64 nsec);
# 188 "include/linux/time.h"
static inline __attribute__((always_inline)) __attribute__((always_inline)) void timespec_add_ns(struct timespec *a, u64 ns)
{
 a->tv_sec += __iter_div_u64_rem(a->tv_nsec + ns, 1000000000L, &ns);
 a->tv_nsec = ns;
}
# 211 "include/linux/time.h"
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 57 "include/linux/timex.h" 2







struct timex {
 unsigned int modes;
 long offset;
 long freq;
 long maxerror;
 long esterror;
 int status;
 long constant;
 long precision;
 long tolerance;


 struct timeval time;
 long tick;

 long ppsfreq;
 long jitter;
 int shift;
 long stabil;
 long jitcnt;
 long calcnt;
 long errcnt;
 long stbcnt;

 int tai;

 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32;
};
# 170 "include/linux/timex.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/timex.h" 1
# 15 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/timex.h"
# 1 "arch/arm/plat-mxc/include/mach/timex.h" 1
# 16 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/timex.h" 2

typedef unsigned long cycles_t;

static inline __attribute__((always_inline)) cycles_t get_cycles (void)
{
 return 0;
}
# 171 "include/linux/timex.h" 2
# 210 "include/linux/timex.h"
extern unsigned long tick_usec;
extern unsigned long tick_nsec;
extern int tickadj;




extern int time_status;
extern long time_maxerror;
extern long time_esterror;

extern long time_adjust;

extern void ntp_init(void);
extern void ntp_clear(void);





static inline __attribute__((always_inline)) int ntp_synced(void)
{
 return !(time_status & 0x0040);
}
# 252 "include/linux/timex.h"
extern u64 tick_length;

extern void second_overflow(void);
extern void update_ntp_one_tick(void);
extern int do_adjtimex(struct timex *);




int read_current_timer(unsigned long *timer_val);
# 55 "include/linux/sched.h" 2
# 1 "include/linux/jiffies.h" 1
# 81 "include/linux/jiffies.h"
extern u64 __attribute__((section(".data"))) jiffies_64;
extern unsigned long volatile __attribute__((section(".data"))) jiffies;


u64 get_jiffies_64(void);
# 183 "include/linux/jiffies.h"
extern unsigned long preset_lpj;
# 296 "include/linux/jiffies.h"
extern unsigned int jiffies_to_msecs(const unsigned long j);
extern unsigned int jiffies_to_usecs(const unsigned long j);
extern unsigned long msecs_to_jiffies(const unsigned int m);
extern unsigned long usecs_to_jiffies(const unsigned int u);
extern unsigned long timespec_to_jiffies(const struct timespec *value);
extern void jiffies_to_timespec(const unsigned long jiffies,
    struct timespec *value);
extern unsigned long timeval_to_jiffies(const struct timeval *value);
extern void jiffies_to_timeval(const unsigned long jiffies,
          struct timeval *value);
extern clock_t jiffies_to_clock_t(long x);
extern unsigned long clock_t_to_jiffies(unsigned long x);
extern u64 jiffies_64_to_clock_t(u64 x);
extern u64 nsec_to_clock_t(u64 x);
# 56 "include/linux/sched.h" 2
# 66 "include/linux/sched.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cputime.h" 1



# 1 "include/asm-generic/cputime.h" 1






typedef unsigned long cputime_t;
# 24 "include/asm-generic/cputime.h"
typedef u64 cputime64_t;
# 5 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cputime.h" 2
# 67 "include/linux/sched.h" 2


# 1 "include/linux/sem.h" 1



# 1 "include/linux/ipc.h" 1
# 9 "include/linux/ipc.h"
struct ipc_perm
{
 __kernel_key_t key;
 __kernel_uid_t uid;
 __kernel_gid_t gid;
 __kernel_uid_t cuid;
 __kernel_gid_t cgid;
 __kernel_mode_t mode;
 unsigned short seq;
};


# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/ipcbuf.h" 1
# 14 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/ipcbuf.h"
struct ipc64_perm
{
 __kernel_key_t key;
 __kernel_uid32_t uid;
 __kernel_gid32_t gid;
 __kernel_uid32_t cuid;
 __kernel_gid32_t cgid;
 __kernel_mode_t mode;
 unsigned short __pad1;
 unsigned short seq;
 unsigned short __pad2;
 unsigned long __unused1;
 unsigned long __unused2;
};
# 22 "include/linux/ipc.h" 2
# 57 "include/linux/ipc.h"
struct ipc_kludge {
 struct msgbuf *msgp;
 long msgtyp;
};
# 82 "include/linux/ipc.h"
# 1 "include/linux/kref.h" 1
# 21 "include/linux/kref.h"
struct kref {
 atomic_t refcount;
};

void kref_set(struct kref *kref, int num);
void kref_init(struct kref *kref);
void kref_get(struct kref *kref);
int kref_put(struct kref *kref, void (*release) (struct kref *kref));
# 83 "include/linux/ipc.h" 2





struct kern_ipc_perm
{
 spinlock_t lock;
 int deleted;
 int id;
 key_t key;
 uid_t uid;
 gid_t gid;
 uid_t cuid;
 gid_t cgid;
 mode_t mode;
 unsigned long seq;
 void *security;
};
# 5 "include/linux/sem.h" 2
# 23 "include/linux/sem.h"
struct semid_ds {
 struct ipc_perm sem_perm;
 __kernel_time_t sem_otime;
 __kernel_time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned short sem_nsems;
};


# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/sembuf.h" 1
# 14 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/sembuf.h"
struct semid64_ds {
 struct ipc64_perm sem_perm;
 __kernel_time_t sem_otime;
 unsigned long __unused1;
 __kernel_time_t sem_ctime;
 unsigned long __unused2;
 unsigned long sem_nsems;
 unsigned long __unused3;
 unsigned long __unused4;
};
# 36 "include/linux/sem.h" 2


struct sembuf {
 unsigned short sem_num;
 short sem_op;
 short sem_flg;
};


union semun {
 int val;
 struct semid_ds *buf;
 unsigned short *array;
 struct seminfo *__buf;
 void *__pad;
};

struct seminfo {
 int semmap;
 int semmni;
 int semmns;
 int semmnu;
 int semmsl;
 int semopm;
 int semume;
 int semusz;
 int semvmx;
 int semaem;
};
# 83 "include/linux/sem.h"
struct task_struct;


struct sem {
 int semval;
 int sempid;
};


struct sem_array {
 struct kern_ipc_perm sem_perm;
 time_t sem_otime;
 time_t sem_ctime;
 struct sem *sem_base;
 struct list_head sem_pending;
 struct list_head list_id;
 unsigned long sem_nsems;
};


struct sem_queue {
 struct list_head list;
 struct task_struct *sleeper;
 struct sem_undo *undo;
 int pid;
 int status;
 struct sembuf *sops;
 int nsops;
 int alter;
};




struct sem_undo {
 struct list_head list_proc;

 struct rcu_head rcu;
 struct sem_undo_list *ulp;
 struct list_head list_id;
 int semid;
 short * semadj;
};




struct sem_undo_list {
 atomic_t refcnt;
 spinlock_t lock;
 struct list_head list_proc;
};

struct sysv_sem {
 struct sem_undo_list *undo_list;
};



extern int copy_semundo(unsigned long clone_flags, struct task_struct *tsk);
extern void exit_sem(struct task_struct *tsk);
# 70 "include/linux/sched.h" 2
# 1 "include/linux/signal.h" 1



# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/signal.h" 1






struct siginfo;
# 17 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/signal.h"
typedef unsigned long old_sigset_t;

typedef struct {
 unsigned long sig[(64 / 32)];
} sigset_t;
# 114 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/signal.h"
# 1 "include/asm-generic/signal.h" 1
# 17 "include/asm-generic/signal.h"
typedef void __signalfn_t(int);
typedef __signalfn_t *__sighandler_t;

typedef void __restorefn_t(void);
typedef __restorefn_t *__sigrestore_t;
# 115 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/signal.h" 2


struct old_sigaction {
 __sighandler_t sa_handler;
 old_sigset_t sa_mask;
 unsigned long sa_flags;
 __sigrestore_t sa_restorer;
};

struct sigaction {
 __sighandler_t sa_handler;
 unsigned long sa_flags;
 __sigrestore_t sa_restorer;
 sigset_t sa_mask;
};

struct k_sigaction {
 struct sigaction sa;
};
# 153 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/signal.h"
typedef struct sigaltstack {
 void *ss_sp;
 int ss_flags;
 size_t ss_size;
} stack_t;


# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/sigcontext.h" 1
# 9 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/sigcontext.h"
struct sigcontext {
 unsigned long trap_no;
 unsigned long error_code;
 unsigned long oldmask;
 unsigned long arm_r0;
 unsigned long arm_r1;
 unsigned long arm_r2;
 unsigned long arm_r3;
 unsigned long arm_r4;
 unsigned long arm_r5;
 unsigned long arm_r6;
 unsigned long arm_r7;
 unsigned long arm_r8;
 unsigned long arm_r9;
 unsigned long arm_r10;
 unsigned long arm_fp;
 unsigned long arm_ip;
 unsigned long arm_sp;
 unsigned long arm_lr;
 unsigned long arm_pc;
 unsigned long arm_cpsr;
 unsigned long fault_address;
};
# 161 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/signal.h" 2
# 5 "include/linux/signal.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/siginfo.h" 1



# 1 "include/asm-generic/siginfo.h" 1






typedef union sigval {
 int sival_int;
 void *sival_ptr;
} sigval_t;
# 40 "include/asm-generic/siginfo.h"
typedef struct siginfo {
 int si_signo;
 int si_errno;
 int si_code;

 union {
  int _pad[((128 - (3 * sizeof(int))) / sizeof(int))];


  struct {
   __kernel_pid_t _pid;
   __kernel_uid32_t _uid;
  } _kill;


  struct {
   __kernel_timer_t _tid;
   int _overrun;
   char _pad[sizeof( __kernel_uid32_t) - sizeof(int)];
   sigval_t _sigval;
   int _sys_private;
  } _timer;


  struct {
   __kernel_pid_t _pid;
   __kernel_uid32_t _uid;
   sigval_t _sigval;
  } _rt;


  struct {
   __kernel_pid_t _pid;
   __kernel_uid32_t _uid;
   int _status;
   __kernel_clock_t _utime;
   __kernel_clock_t _stime;
  } _sigchld;


  struct {
   void *_addr;



  } _sigfault;


  struct {
   long _band;
   int _fd;
  } _sigpoll;
 } _sifields;
} siginfo_t;
# 253 "include/asm-generic/siginfo.h"
typedef struct sigevent {
 sigval_t sigev_value;
 int sigev_signo;
 int sigev_notify;
 union {
  int _pad[((64 - (sizeof(int) * 2 + sizeof(sigval_t))) / sizeof(int))];
   int _tid;

  struct {
   void (*_function)(sigval_t);
   void *_attribute;
  } _sigev_thread;
 } _sigev_un;
} sigevent_t;







struct siginfo;
void do_schedule_next_timer(struct siginfo *info);





static inline __attribute__((always_inline)) void copy_siginfo(struct siginfo *to, struct siginfo *from)
{
 if (from->si_code < 0)
  memcpy(to, from, sizeof(*to));
 else

  memcpy(to, from, (3 * sizeof(int)) + sizeof(from->_sifields._sigchld));
}



extern int copy_siginfo_to_user(struct siginfo *to, struct siginfo *from);
# 5 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/siginfo.h" 2
# 6 "include/linux/signal.h" 2
# 14 "include/linux/signal.h"
struct sigqueue {
 struct list_head list;
 int flags;
 siginfo_t info;
 struct user_struct *user;
};




struct sigpending {
 struct list_head list;
 sigset_t signal;
};
# 38 "include/linux/signal.h"
static inline __attribute__((always_inline)) void sigaddset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 32) == 1)
  set->sig[0] |= 1UL << sig;
 else
  set->sig[sig / 32] |= 1UL << (sig % 32);
}

static inline __attribute__((always_inline)) void sigdelset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 32) == 1)
  set->sig[0] &= ~(1UL << sig);
 else
  set->sig[sig / 32] &= ~(1UL << (sig % 32));
}

static inline __attribute__((always_inline)) int sigismember(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 32) == 1)
  return 1 & (set->sig[0] >> sig);
 else
  return 1 & (set->sig[sig / 32] >> (sig % 32));
}

static inline __attribute__((always_inline)) int sigfindinword(unsigned long word)
{
 return (({ unsigned long __t = (~(~word)); fls(__t & -__t); }) - 1);
}



static inline __attribute__((always_inline)) int sigisemptyset(sigset_t *set)
{
 extern void _NSIG_WORDS_is_unsupported_size(void);
 switch ((64 / 32)) {
 case 4:
  return (set->sig[3] | set->sig[2] |
   set->sig[1] | set->sig[0]) == 0;
 case 2:
  return (set->sig[1] | set->sig[0]) == 0;
 case 1:
  return set->sig[0] == 0;
 default:
  _NSIG_WORDS_is_unsupported_size();
  return 0;
 }
}
# 119 "include/linux/signal.h"
static inline __attribute__((always_inline)) void sigorsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 32)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) | (b3)); r->sig[2] = ((a2) | (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) | (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) | (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline __attribute__((always_inline)) void sigandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 32)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & (b3)); r->sig[2] = ((a2) & (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline __attribute__((always_inline)) void signandsets(sigset_t *r, const sigset_t *a, const sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 32)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & ~(b3)); r->sig[2] = ((a2) & ~(b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & ~(b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & ~(b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }
# 149 "include/linux/signal.h"
static inline __attribute__((always_inline)) void signotset(sigset_t *set) { extern void _NSIG_WORDS_is_unsupported_size(void); switch ((64 / 32)) { case 4: set->sig[3] = (~(set->sig[3])); set->sig[2] = (~(set->sig[2])); case 2: set->sig[1] = (~(set->sig[1])); case 1: set->sig[0] = (~(set->sig[0])); break; default: _NSIG_WORDS_is_unsupported_size(); } }




static inline __attribute__((always_inline)) void sigemptyset(sigset_t *set)
{
 switch ((64 / 32)) {
 default:
  ({ void *__p = (set); size_t __n = sizeof(sigset_t); if ((__n) != 0) { if (__builtin_constant_p((0)) && (0) == 0) __memzero((__p),(__n)); else memset((__p),(0),(__n)); } (__p); });
  break;
 case 2: set->sig[1] = 0;
 case 1: set->sig[0] = 0;
  break;
 }
}

static inline __attribute__((always_inline)) void sigfillset(sigset_t *set)
{
 switch ((64 / 32)) {
 default:
  ({ void *__p = (set); size_t __n = sizeof(sigset_t); if ((__n) != 0) { if (__builtin_constant_p((-1)) && (-1) == 0) __memzero((__p),(__n)); else memset((__p),(-1),(__n)); } (__p); });
  break;
 case 2: set->sig[1] = -1;
 case 1: set->sig[0] = -1;
  break;
 }
}



static inline __attribute__((always_inline)) void sigaddsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] |= mask;
}

static inline __attribute__((always_inline)) void sigdelsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] &= ~mask;
}

static inline __attribute__((always_inline)) int sigtestsetmask(sigset_t *set, unsigned long mask)
{
 return (set->sig[0] & mask) != 0;
}

static inline __attribute__((always_inline)) void siginitset(sigset_t *set, unsigned long mask)
{
 set->sig[0] = mask;
 switch ((64 / 32)) {
 default:
  ({ void *__p = (&set->sig[1]); size_t __n = sizeof(long)*((64 / 32)-1); if ((__n) != 0) { if (__builtin_constant_p((0)) && (0) == 0) __memzero((__p),(__n)); else memset((__p),(0),(__n)); } (__p); });
  break;
 case 2: set->sig[1] = 0;
 case 1: ;
 }
}

static inline __attribute__((always_inline)) void siginitsetinv(sigset_t *set, unsigned long mask)
{
 set->sig[0] = ~mask;
 switch ((64 / 32)) {
 default:
  ({ void *__p = (&set->sig[1]); size_t __n = sizeof(long)*((64 / 32)-1); if ((__n) != 0) { if (__builtin_constant_p((-1)) && (-1) == 0) __memzero((__p),(__n)); else memset((__p),(-1),(__n)); } (__p); });
  break;
 case 2: set->sig[1] = -1;
 case 1: ;
 }
}



static inline __attribute__((always_inline)) void init_sigpending(struct sigpending *sig)
{
 sigemptyset(&sig->signal);
 INIT_LIST_HEAD(&sig->list);
}

extern void flush_sigqueue(struct sigpending *queue);
extern void flush_task_sigqueue(struct task_struct *tsk);


static inline __attribute__((always_inline)) int valid_signal(unsigned long sig)
{
 return sig <= 64 ? 1 : 0;
}

extern int next_signal(struct sigpending *pending, sigset_t *mask);
extern int group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p);
extern int __group_send_sig_info(int, struct siginfo *, struct task_struct *);
extern long do_sigpending(void *, unsigned long);
extern int sigprocmask(int, sigset_t *, sigset_t *);
extern int show_unhandled_signals;

struct pt_regs;
extern int get_signal_to_deliver(siginfo_t *info, struct k_sigaction *return_ka, struct pt_regs *regs, void *cookie);
extern void exit_signals(struct task_struct *tsk);

extern struct kmem_cache *sighand_cachep;

int unhandled_signal(struct task_struct *tsk, int sig);
# 374 "include/linux/signal.h"
void signals_init(void);
# 71 "include/linux/sched.h" 2
# 1 "include/linux/fs_struct.h" 1



# 1 "include/linux/path.h" 1



struct dentry;
struct vfsmount;

struct path {
 struct vfsmount *mnt;
 struct dentry *dentry;
};

extern void path_get(struct path *);
extern void path_put(struct path *);
# 5 "include/linux/fs_struct.h" 2

struct fs_struct {
 atomic_t count;
 rwlock_t lock;
 int umask;
 struct path root, pwd;
};

extern struct kmem_cache *fs_cachep;

extern void exit_fs(struct task_struct *);
extern void set_fs_root(struct fs_struct *, struct path *);
extern void set_fs_pwd(struct fs_struct *, struct path *);
extern struct fs_struct *copy_fs_struct(struct fs_struct *);
extern void put_fs_struct(struct fs_struct *);
# 72 "include/linux/sched.h" 2


# 1 "include/linux/perf_counter.h" 1
# 17 "include/linux/perf_counter.h"
# 1 "include/linux/ioctl.h" 1



# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/ioctl.h" 1
# 1 "include/asm-generic/ioctl.h" 1
# 73 "include/asm-generic/ioctl.h"
extern unsigned int __invalid_size_argument_for_IOC;
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/ioctl.h" 2
# 5 "include/linux/ioctl.h" 2
# 18 "include/linux/perf_counter.h" 2
# 27 "include/linux/perf_counter.h"
enum perf_event_types {
 PERF_TYPE_HARDWARE = 0,
 PERF_TYPE_SOFTWARE = 1,
 PERF_TYPE_TRACEPOINT = 2,





 PERF_TYPE_RAW = 128,
};





enum hw_event_ids {



 PERF_COUNT_CPU_CYCLES = 0,
 PERF_COUNT_INSTRUCTIONS = 1,
 PERF_COUNT_CACHE_REFERENCES = 2,
 PERF_COUNT_CACHE_MISSES = 3,
 PERF_COUNT_BRANCH_INSTRUCTIONS = 4,
 PERF_COUNT_BRANCH_MISSES = 5,
 PERF_COUNT_BUS_CYCLES = 6,

 PERF_HW_EVENTS_MAX = 7,
};







enum sw_event_ids {
 PERF_COUNT_CPU_CLOCK = 0,
 PERF_COUNT_TASK_CLOCK = 1,
 PERF_COUNT_PAGE_FAULTS = 2,
 PERF_COUNT_CONTEXT_SWITCHES = 3,
 PERF_COUNT_CPU_MIGRATIONS = 4,
 PERF_COUNT_PAGE_FAULTS_MIN = 5,
 PERF_COUNT_PAGE_FAULTS_MAJ = 6,

 PERF_SW_EVENTS_MAX = 7,
};




enum perf_counter_record_type {
 PERF_RECORD_SIMPLE = 0,
 PERF_RECORD_IRQ = 1,
 PERF_RECORD_GROUP = 2,
};
# 110 "include/linux/perf_counter.h"
enum perf_counter_read_format {
 PERF_FORMAT_TOTAL_TIME_ENABLED = 1,
 PERF_FORMAT_TOTAL_TIME_RUNNING = 2,
};




struct perf_counter_hw_event {






 __u64 config;

 __u64 irq_period;
 __u64 record_type;
 __u64 read_format;

 __u64 disabled : 1,
    nmi : 1,
    inherit : 1,
    pinned : 1,
    exclusive : 1,
    exclude_user : 1,
    exclude_kernel : 1,
    exclude_hv : 1,
    exclude_idle : 1,
    include_tid : 1,

    __reserved_1 : 54;

 __u32 extra_config_len;
 __u32 __reserved_4;

 __u64 __reserved_2;
 __u64 __reserved_3;
};
# 160 "include/linux/perf_counter.h"
struct perf_counter_mmap_page {
 __u32 version;
 __u32 compat_version;
 __u32 lock;
 __u32 index;
 __s64 offset;

 __u32 data_head;
};

struct perf_event_header {
 __u32 type;
 __u32 size;
};

enum perf_event_type {
 PERF_EVENT_IP = 0,
 PERF_EVENT_GROUP = 1,

 __PERF_EVENT_TID = 0x100,
};
# 193 "include/linux/perf_counter.h"
# 1 "include/linux/rculist.h" 1
# 18 "include/linux/rculist.h"
static inline __attribute__((always_inline)) void __list_add_rcu(struct list_head *new,
  struct list_head *prev, struct list_head *next)
{
 new->next = next;
 new->prev = prev;
 ({ if (!__builtin_constant_p(new) || ((new) != ((void *)0))) __asm__ __volatile__("": : :"memory"); (prev->next) = (new); });
 next->prev = new;
}
# 43 "include/linux/rculist.h"
static inline __attribute__((always_inline)) void list_add_rcu(struct list_head *new, struct list_head *head)
{
 __list_add_rcu(new, head, head->next);
}
# 64 "include/linux/rculist.h"
static inline __attribute__((always_inline)) void list_add_tail_rcu(struct list_head *new,
     struct list_head *head)
{
 __list_add_rcu(new, head->prev, head);
}
# 94 "include/linux/rculist.h"
static inline __attribute__((always_inline)) void list_del_rcu(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->prev = ((void *) 0x00200200 + 0);
}
# 120 "include/linux/rculist.h"
static inline __attribute__((always_inline)) void hlist_del_init_rcu(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  n->pprev = ((void *)0);
 }
}
# 136 "include/linux/rculist.h"
static inline __attribute__((always_inline)) void list_replace_rcu(struct list_head *old,
    struct list_head *new)
{
 new->next = old->next;
 new->prev = old->prev;
 ({ if (!__builtin_constant_p(new) || ((new) != ((void *)0))) __asm__ __volatile__("": : :"memory"); (new->prev->next) = (new); });
 new->next->prev = new;
 old->prev = ((void *) 0x00200200 + 0);
}
# 163 "include/linux/rculist.h"
static inline __attribute__((always_inline)) void list_splice_init_rcu(struct list_head *list,
     struct list_head *head,
     void (*sync)(void))
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 if (list_empty(head))
  return;



 INIT_LIST_HEAD(list);
# 185 "include/linux/rculist.h"
 sync();
# 195 "include/linux/rculist.h"
 last->next = at;
 ({ if (!__builtin_constant_p(first) || ((first) != ((void *)0))) __asm__ __volatile__("": : :"memory"); (head->next) = (first); });
 first->prev = head;
 at->prev = last;
}
# 257 "include/linux/rculist.h"
static inline __attribute__((always_inline)) void hlist_del_rcu(struct hlist_node *n)
{
 __hlist_del(n);
 n->pprev = ((void *) 0x00200200 + 0);
}
# 270 "include/linux/rculist.h"
static inline __attribute__((always_inline)) void hlist_replace_rcu(struct hlist_node *old,
     struct hlist_node *new)
{
 struct hlist_node *next = old->next;

 new->next = next;
 new->pprev = old->pprev;
 ({ if (!__builtin_constant_p(new) || ((new) != ((void *)0))) __asm__ __volatile__("": : :"memory"); (*new->pprev) = (new); });
 if (next)
  new->next->pprev = &new->next;
 old->pprev = ((void *) 0x00200200 + 0);
}
# 302 "include/linux/rculist.h"
static inline __attribute__((always_inline)) void hlist_add_head_rcu(struct hlist_node *n,
     struct hlist_head *h)
{
 struct hlist_node *first = h->first;

 n->next = first;
 n->pprev = &h->first;
 ({ if (!__builtin_constant_p(n) || ((n) != ((void *)0))) __asm__ __volatile__("": : :"memory"); (h->first) = (n); });
 if (first)
  first->pprev = &n->next;
}
# 332 "include/linux/rculist.h"
static inline __attribute__((always_inline)) void hlist_add_before_rcu(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 ({ if (!__builtin_constant_p(n) || ((n) != ((void *)0))) __asm__ __volatile__("": : :"memory"); (*(n->pprev)) = (n); });
 next->pprev = &n->next;
}
# 359 "include/linux/rculist.h"
static inline __attribute__((always_inline)) void hlist_add_after_rcu(struct hlist_node *prev,
           struct hlist_node *n)
{
 n->next = prev->next;
 n->pprev = &prev->next;
 ({ if (!__builtin_constant_p(n) || ((n) != ((void *)0))) __asm__ __volatile__("": : :"memory"); (prev->next) = (n); });
 if (n->next)
  n->next->pprev = &n->next;
}
# 194 "include/linux/perf_counter.h" 2


# 1 "include/linux/hrtimer.h" 1
# 19 "include/linux/hrtimer.h"
# 1 "include/linux/ktime.h" 1
# 46 "include/linux/ktime.h"
union ktime {
 s64 tv64;

 struct {



 s32 nsec, sec;

 } tv;

};

typedef union ktime ktime_t;
# 151 "include/linux/ktime.h"
static inline __attribute__((always_inline)) ktime_t ktime_set(const long secs, const unsigned long nsecs)
{
 return (ktime_t) { .tv = { .sec = secs, .nsec = nsecs } };
}
# 163 "include/linux/ktime.h"
static inline __attribute__((always_inline)) ktime_t ktime_sub(const ktime_t lhs, const ktime_t rhs)
{
 ktime_t res;

 res.tv64 = lhs.tv64 - rhs.tv64;
 if (res.tv.nsec < 0)
  res.tv.nsec += 1000000000L;

 return res;
}
# 181 "include/linux/ktime.h"
static inline __attribute__((always_inline)) ktime_t ktime_add(const ktime_t add1, const ktime_t add2)
{
 ktime_t res;

 res.tv64 = add1.tv64 + add2.tv64;
# 194 "include/linux/ktime.h"
 if (res.tv.nsec >= 1000000000L)
  res.tv64 += (u32)-1000000000L;

 return res;
}
# 207 "include/linux/ktime.h"
extern ktime_t ktime_add_ns(const ktime_t kt, u64 nsec);
# 216 "include/linux/ktime.h"
extern ktime_t ktime_sub_ns(const ktime_t kt, u64 nsec);







static inline __attribute__((always_inline)) ktime_t timespec_to_ktime(const struct timespec ts)
{
 return (ktime_t) { .tv = { .sec = (s32)ts.tv_sec,
          .nsec = (s32)ts.tv_nsec } };
}







static inline __attribute__((always_inline)) ktime_t timeval_to_ktime(const struct timeval tv)
{
 return (ktime_t) { .tv = { .sec = (s32)tv.tv_sec,
       .nsec = (s32)tv.tv_usec * 1000 } };
}







static inline __attribute__((always_inline)) struct timespec ktime_to_timespec(const ktime_t kt)
{
 return (struct timespec) { .tv_sec = (time_t) kt.tv.sec,
       .tv_nsec = (long) kt.tv.nsec };
}







static inline __attribute__((always_inline)) struct timeval ktime_to_timeval(const ktime_t kt)
{
 return (struct timeval) {
  .tv_sec = (time_t) kt.tv.sec,
  .tv_usec = (suseconds_t) (kt.tv.nsec / 1000L) };
}







static inline __attribute__((always_inline)) s64 ktime_to_ns(const ktime_t kt)
{
 return (s64) kt.tv.sec * 1000000000L + kt.tv.nsec;
}
# 287 "include/linux/ktime.h"
static inline __attribute__((always_inline)) int ktime_equal(const ktime_t cmp1, const ktime_t cmp2)
{
 return cmp1.tv64 == cmp2.tv64;
}

static inline __attribute__((always_inline)) s64 ktime_to_us(const ktime_t kt)
{
 struct timeval tv = ktime_to_timeval(kt);
 return (s64) tv.tv_sec * 1000000L + tv.tv_usec;
}

static inline __attribute__((always_inline)) s64 ktime_us_delta(const ktime_t later, const ktime_t earlier)
{
       return ktime_to_us(ktime_sub(later, earlier));
}

static inline __attribute__((always_inline)) ktime_t ktime_add_us(const ktime_t kt, const u64 usec)
{
 return ktime_add_ns(kt, usec * 1000);
}

static inline __attribute__((always_inline)) ktime_t ktime_sub_us(const ktime_t kt, const u64 usec)
{
 return ktime_sub_ns(kt, usec * 1000);
}

extern ktime_t ktime_add_safe(const ktime_t lhs, const ktime_t rhs);
# 325 "include/linux/ktime.h"
extern void ktime_get_ts(struct timespec *ts);




static inline __attribute__((always_inline)) ktime_t ns_to_ktime(u64 ns)
{
 static const ktime_t ktime_zero = { .tv64 = 0 };
 return ktime_add_ns(ktime_zero, ns);
}
# 20 "include/linux/hrtimer.h" 2






struct hrtimer_clock_base;
struct hrtimer_cpu_base;




enum hrtimer_mode {
 HRTIMER_MODE_ABS,
 HRTIMER_MODE_REL,
};




enum hrtimer_restart {
 HRTIMER_NORESTART,
 HRTIMER_RESTART,
};
# 100 "include/linux/hrtimer.h"
struct hrtimer {
 struct rb_node node;
 ktime_t _expires;
 ktime_t _softexpires;
 enum hrtimer_restart (*function)(struct hrtimer *);
 struct hrtimer_clock_base *base;
 unsigned long state;
 struct list_head cb_entry;
 int irqsafe;





};
# 123 "include/linux/hrtimer.h"
struct hrtimer_sleeper {
 struct hrtimer timer;
 struct task_struct *task;
};
# 140 "include/linux/hrtimer.h"
struct hrtimer_clock_base {
 struct hrtimer_cpu_base *cpu_base;
 clockid_t index;
 struct rb_root active;
 struct list_head expired;
 struct rb_node *first;
 ktime_t resolution;
 ktime_t (*get_time)(void);
 ktime_t softirq_time;



};
# 170 "include/linux/hrtimer.h"
struct hrtimer_cpu_base {
 raw_spinlock_t lock;
 struct hrtimer_clock_base clock_base[2];






 wait_queue_head_t wait;

};

static inline __attribute__((always_inline)) void hrtimer_set_expires(struct hrtimer *timer, ktime_t time)
{
 timer->_expires = time;
 timer->_softexpires = time;
}

static inline __attribute__((always_inline)) void hrtimer_set_expires_range(struct hrtimer *timer, ktime_t time, ktime_t delta)
{
 timer->_softexpires = time;
 timer->_expires = ktime_add_safe(time, delta);
}

static inline __attribute__((always_inline)) void hrtimer_set_expires_range_ns(struct hrtimer *timer, ktime_t time, unsigned long delta)
{
 timer->_softexpires = time;
 timer->_expires = ktime_add_safe(time, ns_to_ktime(delta));
}

static inline __attribute__((always_inline)) void hrtimer_set_expires_tv64(struct hrtimer *timer, s64 tv64)
{
 timer->_expires.tv64 = tv64;
 timer->_softexpires.tv64 = tv64;
}

static inline __attribute__((always_inline)) void hrtimer_add_expires(struct hrtimer *timer, ktime_t time)
{
 timer->_expires = ktime_add_safe(timer->_expires, time);
 timer->_softexpires = ktime_add_safe(timer->_softexpires, time);
}

static inline __attribute__((always_inline)) void hrtimer_add_expires_ns(struct hrtimer *timer, u64 ns)
{
 timer->_expires = ktime_add_ns(timer->_expires, ns);
 timer->_softexpires = ktime_add_ns(timer->_softexpires, ns);
}

static inline __attribute__((always_inline)) ktime_t hrtimer_get_expires(const struct hrtimer *timer)
{
 return timer->_expires;
}

static inline __attribute__((always_inline)) ktime_t hrtimer_get_softexpires(const struct hrtimer *timer)
{
 return timer->_softexpires;
}

static inline __attribute__((always_inline)) s64 hrtimer_get_expires_tv64(const struct hrtimer *timer)
{
 return timer->_expires.tv64;
}
static inline __attribute__((always_inline)) s64 hrtimer_get_softexpires_tv64(const struct hrtimer *timer)
{
 return timer->_softexpires.tv64;
}

static inline __attribute__((always_inline)) s64 hrtimer_get_expires_ns(const struct hrtimer *timer)
{
 return ktime_to_ns(timer->_expires);
}

static inline __attribute__((always_inline)) ktime_t hrtimer_expires_remaining(const struct hrtimer *timer)
{
    return ktime_sub(timer->_expires, timer->base->get_time());
}
# 291 "include/linux/hrtimer.h"
static inline __attribute__((always_inline)) void clock_was_set(void) { }
static inline __attribute__((always_inline)) void hrtimer_peek_ahead_timers(void) { }

static inline __attribute__((always_inline)) void hres_timers_resume(void) { }





static inline __attribute__((always_inline)) ktime_t hrtimer_cb_get_time(struct hrtimer *timer)
{
 return timer->base->softirq_time;
}

static inline __attribute__((always_inline)) int hrtimer_is_hres_active(struct hrtimer *timer)
{
 return 0;
}


extern ktime_t ktime_get(void);
extern ktime_t ktime_get_real(void);


extern __typeof__(struct tick_device) per_cpu__tick_cpu_device;





extern void hrtimer_init(struct hrtimer *timer, clockid_t which_clock,
    enum hrtimer_mode mode);







static inline __attribute__((always_inline)) void hrtimer_init_on_stack(struct hrtimer *timer,
      clockid_t which_clock,
      enum hrtimer_mode mode)
{
 hrtimer_init(timer, which_clock, mode);
}
static inline __attribute__((always_inline)) void destroy_hrtimer_on_stack(struct hrtimer *timer) { }



extern int hrtimer_start(struct hrtimer *timer, ktime_t tim,
    const enum hrtimer_mode mode);
extern int hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
   unsigned long range_ns, const enum hrtimer_mode mode);
extern int
__hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
    unsigned long delta_ns,
    const enum hrtimer_mode mode, int wakeup);

extern int hrtimer_cancel(struct hrtimer *timer);
extern int hrtimer_try_to_cancel(struct hrtimer *timer);

static inline __attribute__((always_inline)) int hrtimer_start_expires(struct hrtimer *timer,
      enum hrtimer_mode mode)
{
 unsigned long delta;
 ktime_t soft, hard;
 soft = hrtimer_get_softexpires(timer);
 hard = hrtimer_get_expires(timer);
 delta = ktime_to_ns(ktime_sub(hard, soft));
 return hrtimer_start_range_ns(timer, soft, delta, mode);
}

static inline __attribute__((always_inline)) int hrtimer_restart(struct hrtimer *timer)
{
 return hrtimer_start_expires(timer, HRTIMER_MODE_ABS);
}



  extern void hrtimer_wait_for_timer(const struct hrtimer *timer);





extern ktime_t hrtimer_get_remaining(const struct hrtimer *timer);
extern int hrtimer_get_res(const clockid_t which_clock, struct timespec *tp);

extern ktime_t hrtimer_get_next_event(void);





static inline __attribute__((always_inline)) int hrtimer_active(const struct hrtimer *timer)
{
 return timer->state != 0x00;
}




static inline __attribute__((always_inline)) int hrtimer_is_queued(struct hrtimer *timer)
{
 return timer->state & 0x01;
}





static inline __attribute__((always_inline)) int hrtimer_callback_running(struct hrtimer *timer)
{
 return timer->state & 0x02;
}


extern u64
hrtimer_forward(struct hrtimer *timer, ktime_t now, ktime_t interval);


static inline __attribute__((always_inline)) u64 hrtimer_forward_now(struct hrtimer *timer,
          ktime_t interval)
{
 return hrtimer_forward(timer, timer->base->get_time(), interval);
}


extern long hrtimer_nanosleep(struct timespec *rqtp,
         struct timespec *rmtp,
         const enum hrtimer_mode mode,
         const clockid_t clockid);
extern long hrtimer_nanosleep_restart(struct restart_block *restart_block);

extern void hrtimer_init_sleeper(struct hrtimer_sleeper *sl,
     struct task_struct *tsk);

extern int schedule_hrtimeout_range(ktime_t *expires, unsigned long delta,
      const enum hrtimer_mode mode);
extern int schedule_hrtimeout(ktime_t *expires, const enum hrtimer_mode mode);


extern void hrtimer_run_queues(void);
extern void hrtimer_run_pending(void);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) hrtimers_init(void);


extern u64 ktime_divns(const ktime_t kt, s64 div);





extern void sysrq_timer_list_show(void);
# 476 "include/linux/hrtimer.h"
static inline __attribute__((always_inline)) void timer_stats_account_hrtimer(struct hrtimer *timer)
{
}

static inline __attribute__((always_inline)) void timer_stats_hrtimer_set_start_info(struct hrtimer *timer)
{
}

static inline __attribute__((always_inline)) void timer_stats_hrtimer_clear_start_info(struct hrtimer *timer)
{
}
# 197 "include/linux/perf_counter.h" 2


struct task_struct;

static inline __attribute__((always_inline)) u64 perf_event_raw(struct perf_counter_hw_event *hw_event)
{
 return hw_event->config & (((1ULL << 1) - 1) << 63);
}

static inline __attribute__((always_inline)) u64 perf_event_config(struct perf_counter_hw_event *hw_event)
{
 return hw_event->config & (((1ULL << 63) - 1) << 0);
}

static inline __attribute__((always_inline)) u64 perf_event_type(struct perf_counter_hw_event *hw_event)
{
 return (hw_event->config & (((1ULL << 7) - 1) << 56)) >>
  56;
}

static inline __attribute__((always_inline)) u64 perf_event_id(struct perf_counter_hw_event *hw_event)
{
 return hw_event->config & (((1ULL << 56) - 1) << 0);
}




struct hw_perf_counter {
# 244 "include/linux/perf_counter.h"
};

struct perf_counter;




struct hw_perf_counter_ops {
 int (*enable) (struct perf_counter *counter);
 void (*disable) (struct perf_counter *counter);
 void (*read) (struct perf_counter *counter);
};




enum perf_counter_active_state {
 PERF_COUNTER_STATE_ERROR = -2,
 PERF_COUNTER_STATE_OFF = -1,
 PERF_COUNTER_STATE_INACTIVE = 0,
 PERF_COUNTER_STATE_ACTIVE = 1,
};

struct file;

struct perf_mmap_data {
 struct rcu_head rcu_head;
 int nr_pages;
 atomic_t wakeup;
 atomic_t head;
 struct perf_counter_mmap_page *user_page;
 void *data_pages[0];
};




struct perf_counter {
# 358 "include/linux/perf_counter.h"
};






struct perf_counter_context {
# 396 "include/linux/perf_counter.h"
};




struct perf_cpu_context {
 struct perf_counter_context ctx;
 struct perf_counter_context *task_ctx;
 int active_oncpu;
 int max_pertask;
 int exclusive;






 int recursion[4];
};




extern int perf_max_counters;
# 456 "include/linux/perf_counter.h"
static inline __attribute__((always_inline)) void
perf_counter_task_sched_in(struct task_struct *task, int cpu) { }
static inline __attribute__((always_inline)) void
perf_counter_task_sched_out(struct task_struct *task, int cpu) { }
static inline __attribute__((always_inline)) void
perf_counter_task_tick(struct task_struct *task, int cpu) { }
static inline __attribute__((always_inline)) void perf_counter_init_task(struct task_struct *child) { }
static inline __attribute__((always_inline)) void perf_counter_exit_task(struct task_struct *child) { }
static inline __attribute__((always_inline)) void perf_counter_notify(struct pt_regs *regs) { }
static inline __attribute__((always_inline)) void perf_counter_print_debug(void) { }
static inline __attribute__((always_inline)) void perf_counter_unthrottle(void) { }
static inline __attribute__((always_inline)) void hw_perf_restore(u64 ctrl) { }
static inline __attribute__((always_inline)) u64 hw_perf_save_disable(void) { return 0; }
static inline __attribute__((always_inline)) int perf_counter_task_disable(void) { return -22; }
static inline __attribute__((always_inline)) int perf_counter_task_enable(void) { return -22; }

static inline __attribute__((always_inline)) void perf_swcounter_event(u32 event, u64 nr,
     int nmi, struct pt_regs *regs) { }
# 75 "include/linux/sched.h" 2
# 1 "include/linux/pid.h" 1





enum pid_type
{
 PIDTYPE_PID,
 PIDTYPE_PGID,
 PIDTYPE_SID,
 PIDTYPE_MAX
};
# 50 "include/linux/pid.h"
struct upid {

 int nr;
 struct pid_namespace *ns;
 struct hlist_node pid_chain;
};

struct pid
{
 atomic_t count;
 unsigned int level;

 struct hlist_head tasks[PIDTYPE_MAX];
 struct rcu_head rcu;
 struct upid numbers[1];
};

extern struct pid init_struct_pid;

struct pid_link
{
 struct hlist_node node;
 struct pid *pid;
};

static inline __attribute__((always_inline)) struct pid *get_pid(struct pid *pid)
{
 if (pid)
  (void) atomic_add_return(1, &pid->count);
 return pid;
}

extern void put_pid(struct pid *pid);
extern struct task_struct *pid_task(struct pid *pid, enum pid_type);
extern struct task_struct *get_pid_task(struct pid *pid, enum pid_type);

extern struct pid *get_task_pid(struct task_struct *task, enum pid_type type);





extern void attach_pid(struct task_struct *task, enum pid_type type,
   struct pid *pid);
extern void detach_pid(struct task_struct *task, enum pid_type);
extern void change_pid(struct task_struct *task, enum pid_type,
   struct pid *pid);
extern void transfer_pid(struct task_struct *old, struct task_struct *new,
    enum pid_type);

struct pid_namespace;
extern struct pid_namespace init_pid_ns;
# 112 "include/linux/pid.h"
extern struct pid *find_pid_ns(int nr, struct pid_namespace *ns);
extern struct pid *find_vpid(int nr);




extern struct pid *find_get_pid(int nr);
extern struct pid *find_ge_pid(int nr, struct pid_namespace *);
int next_pidmap(struct pid_namespace *pid_ns, int last);

extern struct pid *alloc_pid(struct pid_namespace *ns);
extern void free_pid(struct pid *pid);
# 135 "include/linux/pid.h"
static inline __attribute__((always_inline)) struct pid_namespace *ns_of_pid(struct pid *pid)
{
 struct pid_namespace *ns = ((void *)0);
 if (pid)
  ns = pid->numbers[pid->level].ns;
 return ns;
}
# 154 "include/linux/pid.h"
static inline __attribute__((always_inline)) pid_t pid_nr(struct pid *pid)
{
 pid_t nr = 0;
 if (pid)
  nr = pid->numbers[0].nr;
 return nr;
}

pid_t pid_nr_ns(struct pid *pid, struct pid_namespace *ns);
pid_t pid_vnr(struct pid *pid);
# 76 "include/linux/sched.h" 2


# 1 "include/linux/proportions.h" 1
# 12 "include/linux/proportions.h"
# 1 "include/linux/percpu_counter.h" 1
# 82 "include/linux/percpu_counter.h"
struct percpu_counter {
 s64 count;
};

static inline __attribute__((always_inline)) int percpu_counter_init(struct percpu_counter *fbc, s64 amount)
{
 fbc->count = amount;
 return 0;
}

static inline __attribute__((always_inline)) void percpu_counter_destroy(struct percpu_counter *fbc)
{
}

static inline __attribute__((always_inline)) void percpu_counter_set(struct percpu_counter *fbc, s64 amount)
{
 fbc->count = amount;
}




static inline __attribute__((always_inline)) void
percpu_counter_add(struct percpu_counter *fbc, s64 amount)
{
 do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0);
 fbc->count += amount;
 do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0);
}

static inline __attribute__((always_inline)) s64 percpu_counter_read(struct percpu_counter *fbc)
{
 return fbc->count;
}

static inline __attribute__((always_inline)) s64 percpu_counter_read_positive(struct percpu_counter *fbc)
{
 return fbc->count;
}

static inline __attribute__((always_inline)) s64 percpu_counter_sum_positive(struct percpu_counter *fbc)
{
 return percpu_counter_read_positive(fbc);
}

static inline __attribute__((always_inline)) s64 percpu_counter_sum(struct percpu_counter *fbc)
{
 return percpu_counter_read(fbc);
}



static inline __attribute__((always_inline)) void percpu_counter_inc(struct percpu_counter *fbc)
{
 percpu_counter_add(fbc, 1);
}

static inline __attribute__((always_inline)) void percpu_counter_dec(struct percpu_counter *fbc)
{
 percpu_counter_add(fbc, -1);
}

static inline __attribute__((always_inline)) void percpu_counter_sub(struct percpu_counter *fbc, s64 amount)
{
 percpu_counter_add(fbc, -amount);
}
# 13 "include/linux/proportions.h" 2



struct prop_global {





 int shift;






 struct percpu_counter events;
};






struct prop_descriptor {
 int index;
 struct prop_global pg[2];
 struct mutex mutex;
};

int prop_descriptor_init(struct prop_descriptor *pd, int shift);
void prop_change_shift(struct prop_descriptor *pd, int new_shift);





struct prop_local_percpu {



 struct percpu_counter events;




 int shift;
 unsigned long period;
 raw_spinlock_t lock;
};

int prop_local_init_percpu(struct prop_local_percpu *pl);
void prop_local_destroy_percpu(struct prop_local_percpu *pl);
void __prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl);
void prop_fraction_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl,
  long *numerator, long *denominator);

static inline __attribute__((always_inline))
void prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl)
{
 unsigned long flags;

 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0);
 __prop_inc_percpu(pd, pl);
 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0);
}
# 89 "include/linux/proportions.h"
void __prop_inc_percpu_max(struct prop_descriptor *pd,
      struct prop_local_percpu *pl, long frac);






struct prop_local_single {



 unsigned long events;





 unsigned long period;
 int shift;
 raw_spinlock_t lock;
};





int prop_local_init_single(struct prop_local_single *pl);
void prop_local_destroy_single(struct prop_local_single *pl);
void __prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl);
void prop_fraction_single(struct prop_descriptor *pd, struct prop_local_single *pl,
  long *numerator, long *denominator);

static inline __attribute__((always_inline))
void prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl)
{
 unsigned long flags;

 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0);
 __prop_inc_single(pd, pl);
 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0);
}
# 79 "include/linux/sched.h" 2
# 1 "include/linux/seccomp.h" 1
# 24 "include/linux/seccomp.h"
typedef struct { } seccomp_t;



static inline __attribute__((always_inline)) long prctl_get_seccomp(void)
{
 return -22;
}

static inline __attribute__((always_inline)) long prctl_set_seccomp(unsigned long arg2)
{
 return -22;
}
# 80 "include/linux/sched.h" 2





# 1 "include/linux/resource.h" 1





struct task_struct;
# 24 "include/linux/resource.h"
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;
 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;
};

struct rlimit {
 unsigned long rlim_cur;
 unsigned long rlim_max;
};
# 71 "include/linux/resource.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/resource.h" 1



# 1 "include/asm-generic/resource.h" 1
# 5 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/resource.h" 2
# 72 "include/linux/resource.h" 2


int getrusage(struct task_struct *p, int who, struct rusage *ru);
# 86 "include/linux/sched.h" 2
# 1 "include/linux/timer.h" 1






# 1 "include/linux/debugobjects.h" 1






enum debug_obj_state {
 ODEBUG_STATE_NONE,
 ODEBUG_STATE_INIT,
 ODEBUG_STATE_INACTIVE,
 ODEBUG_STATE_ACTIVE,
 ODEBUG_STATE_DESTROYED,
 ODEBUG_STATE_NOTAVAILABLE,
 ODEBUG_STATE_MAX,
};

struct debug_obj_descr;
# 26 "include/linux/debugobjects.h"
struct debug_obj {
 struct hlist_node node;
 enum debug_obj_state state;
 void *object;
 struct debug_obj_descr *descr;
};
# 45 "include/linux/debugobjects.h"
struct debug_obj_descr {
 const char *name;

 int (*fixup_init) (void *addr, enum debug_obj_state state);
 int (*fixup_activate) (void *addr, enum debug_obj_state state);
 int (*fixup_destroy) (void *addr, enum debug_obj_state state);
 int (*fixup_free) (void *addr, enum debug_obj_state state);
};
# 66 "include/linux/debugobjects.h"
static inline __attribute__((always_inline)) void
debug_object_init (void *addr, struct debug_obj_descr *descr) { }
static inline __attribute__((always_inline)) void
debug_object_init_on_stack(void *addr, struct debug_obj_descr *descr) { }
static inline __attribute__((always_inline)) void
debug_object_activate (void *addr, struct debug_obj_descr *descr) { }
static inline __attribute__((always_inline)) void
debug_object_deactivate(void *addr, struct debug_obj_descr *descr) { }
static inline __attribute__((always_inline)) void
debug_object_destroy (void *addr, struct debug_obj_descr *descr) { }
static inline __attribute__((always_inline)) void
debug_object_free (void *addr, struct debug_obj_descr *descr) { }

static inline __attribute__((always_inline)) void debug_objects_early_init(void) { }
static inline __attribute__((always_inline)) void debug_objects_mem_init(void) { }





static inline __attribute__((always_inline)) void
debug_check_no_obj_freed(const void *address, unsigned long size) { }
# 8 "include/linux/timer.h" 2


struct tvec_base;

struct timer_list {
 struct list_head entry;
 unsigned long expires;

 void (*function)(unsigned long);
 unsigned long data;

 struct tvec_base *base;
# 28 "include/linux/timer.h"
};

extern struct tvec_base boot_tvec_bases;
# 59 "include/linux/timer.h"
void init_timer_key(struct timer_list *timer,
      const char *name,
      struct lock_class_key *key);
void init_timer_deferrable_key(struct timer_list *timer,
          const char *name,
          struct lock_class_key *key);
# 116 "include/linux/timer.h"
static inline __attribute__((always_inline)) void destroy_timer_on_stack(struct timer_list *timer) { }
static inline __attribute__((always_inline)) void init_timer_on_stack_key(struct timer_list *timer,
        const char *name,
        struct lock_class_key *key)
{
 init_timer_key(timer, name, key);
}


static inline __attribute__((always_inline)) void setup_timer_key(struct timer_list * timer,
    const char *name,
    struct lock_class_key *key,
    void (*function)(unsigned long),
    unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer_key(timer, name, key);
}

static inline __attribute__((always_inline)) void setup_timer_on_stack_key(struct timer_list *timer,
     const char *name,
     struct lock_class_key *key,
     void (*function)(unsigned long),
     unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer_on_stack_key(timer, name, key);
}
# 157 "include/linux/timer.h"
static inline __attribute__((always_inline)) int timer_pending(const struct timer_list * timer)
{
 return timer->entry.next != ((void *)0);
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer_pending(struct timer_list *timer, unsigned long expires);
# 177 "include/linux/timer.h"
extern unsigned long next_timer_interrupt(void);





extern unsigned long get_next_timer_interrupt(unsigned long now);
# 211 "include/linux/timer.h"
static inline __attribute__((always_inline)) void init_timer_stats(void)
{
}

static inline __attribute__((always_inline)) void timer_stats_timer_set_start_info(struct timer_list *timer)
{
}

static inline __attribute__((always_inline)) void timer_stats_timer_clear_start_info(struct timer_list *timer)
{
}


extern void add_timer(struct timer_list *timer);


  extern int timer_pending_sync(struct timer_list *timer);
  extern int try_to_del_timer_sync(struct timer_list *timer);
  extern int del_timer_sync(struct timer_list *timer);
# 238 "include/linux/timer.h"
extern void init_timers(void);
extern void run_local_timers(void);
struct hrtimer;
extern enum hrtimer_restart it_real_fn(struct hrtimer *);

unsigned long __round_jiffies(unsigned long j, int cpu);
unsigned long __round_jiffies_relative(unsigned long j, int cpu);
unsigned long round_jiffies(unsigned long j);
unsigned long round_jiffies_relative(unsigned long j);

unsigned long __round_jiffies_up(unsigned long j, int cpu);
unsigned long __round_jiffies_up_relative(unsigned long j, int cpu);
unsigned long round_jiffies_up(unsigned long j);
unsigned long round_jiffies_up_relative(unsigned long j);
# 87 "include/linux/sched.h" 2

# 1 "include/linux/task_io_accounting.h" 1
# 11 "include/linux/task_io_accounting.h"
struct task_io_accounting {
# 45 "include/linux/task_io_accounting.h"
};
# 89 "include/linux/sched.h" 2
# 1 "include/linux/kobject.h" 1
# 21 "include/linux/kobject.h"
# 1 "include/linux/sysfs.h" 1
# 20 "include/linux/sysfs.h"
struct kobject;
struct module;






struct attribute {
 const char *name;
 struct module *owner;
 mode_t mode;
};

struct attribute_group {
 const char *name;
 mode_t (*is_visible)(struct kobject *,
           struct attribute *, int);
 struct attribute **attrs;
};
# 63 "include/linux/sysfs.h"
struct vm_area_struct;

struct bin_attribute {
 struct attribute attr;
 size_t size;
 void *private;
 ssize_t (*read)(struct kobject *, struct bin_attribute *,
   char *, loff_t, size_t);
 ssize_t (*write)(struct kobject *, struct bin_attribute *,
    char *, loff_t, size_t);
 int (*mmap)(struct kobject *, struct bin_attribute *attr,
      struct vm_area_struct *vma);
};

struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *,char *);
 ssize_t (*store)(struct kobject *,struct attribute *,const char *, size_t);
};

struct sysfs_dirent;



int sysfs_schedule_callback(struct kobject *kobj, void (*func)(void *),
       void *data, struct module *owner);

int __attribute__((warn_unused_result)) sysfs_create_dir(struct kobject *kobj);
void sysfs_remove_dir(struct kobject *kobj);
int __attribute__((warn_unused_result)) sysfs_rename_dir(struct kobject *kobj, const char *new_name);
int __attribute__((warn_unused_result)) sysfs_move_dir(struct kobject *kobj,
    struct kobject *new_parent_kobj);

int __attribute__((warn_unused_result)) sysfs_create_file(struct kobject *kobj,
       const struct attribute *attr);
int __attribute__((warn_unused_result)) sysfs_chmod_file(struct kobject *kobj, struct attribute *attr,
      mode_t mode);
void sysfs_remove_file(struct kobject *kobj, const struct attribute *attr);

int __attribute__((warn_unused_result)) sysfs_create_bin_file(struct kobject *kobj,
           struct bin_attribute *attr);
void sysfs_remove_bin_file(struct kobject *kobj, struct bin_attribute *attr);

int __attribute__((warn_unused_result)) sysfs_create_link(struct kobject *kobj, struct kobject *target,
       const char *name);
int __attribute__((warn_unused_result)) sysfs_create_link_nowarn(struct kobject *kobj,
       struct kobject *target,
       const char *name);
void sysfs_remove_link(struct kobject *kobj, const char *name);

int __attribute__((warn_unused_result)) sysfs_create_group(struct kobject *kobj,
        const struct attribute_group *grp);
int sysfs_update_group(struct kobject *kobj,
         const struct attribute_group *grp);
void sysfs_remove_group(struct kobject *kobj,
   const struct attribute_group *grp);
int sysfs_add_file_to_group(struct kobject *kobj,
   const struct attribute *attr, const char *group);
void sysfs_remove_file_from_group(struct kobject *kobj,
   const struct attribute *attr, const char *group);

void sysfs_notify(struct kobject *kobj, const char *dir, const char *attr);
void sysfs_notify_dirent(struct sysfs_dirent *sd);
struct sysfs_dirent *sysfs_get_dirent(struct sysfs_dirent *parent_sd,
          const unsigned char *name);
struct sysfs_dirent *sysfs_get(struct sysfs_dirent *sd);
void sysfs_put(struct sysfs_dirent *sd);
void sysfs_printk_last_file(void);
int __attribute__((warn_unused_result)) sysfs_init(void);
# 22 "include/linux/kobject.h" 2
# 34 "include/linux/kobject.h"
extern char uevent_helper[];


extern u64 uevent_seqnum;
# 49 "include/linux/kobject.h"
enum kobject_action {
 KOBJ_ADD,
 KOBJ_REMOVE,
 KOBJ_CHANGE,
 KOBJ_MOVE,
 KOBJ_ONLINE,
 KOBJ_OFFLINE,
 KOBJ_MAX
};

struct kobject {
 const char *name;
 struct list_head entry;
 struct kobject *parent;
 struct kset *kset;
 struct kobj_type *ktype;
 struct sysfs_dirent *sd;
 struct kref kref;
 unsigned int state_initialized:1;
 unsigned int state_in_sysfs:1;
 unsigned int state_add_uevent_sent:1;
 unsigned int state_remove_uevent_sent:1;
};

extern int kobject_set_name(struct kobject *kobj, const char *name, ...)
       __attribute__((format(printf, 2, 3)));

static inline __attribute__((always_inline)) const char *kobject_name(const struct kobject *kobj)
{
 return kobj->name;
}

extern void kobject_init(struct kobject *kobj, struct kobj_type *ktype);
extern int __attribute__((warn_unused_result)) kobject_add(struct kobject *kobj,
        struct kobject *parent,
        const char *fmt, ...);
extern int __attribute__((warn_unused_result)) kobject_init_and_add(struct kobject *kobj,
          struct kobj_type *ktype,
          struct kobject *parent,
          const char *fmt, ...);

extern void kobject_del(struct kobject *kobj);

extern struct kobject * __attribute__((warn_unused_result)) kobject_create(void);
extern struct kobject * __attribute__((warn_unused_result)) kobject_create_and_add(const char *name,
      struct kobject *parent);

extern int __attribute__((warn_unused_result)) kobject_rename(struct kobject *, const char *new_name);
extern int __attribute__((warn_unused_result)) kobject_move(struct kobject *, struct kobject *);

extern struct kobject *kobject_get(struct kobject *kobj);
extern void kobject_put(struct kobject *kobj);

extern char *kobject_get_path(struct kobject *kobj, gfp_t flag);

struct kobj_type {
 void (*release)(struct kobject *kobj);
 struct sysfs_ops *sysfs_ops;
 struct attribute **default_attrs;
};

struct kobj_uevent_env {
 char *envp[32];
 int envp_idx;
 char buf[2048];
 int buflen;
};

struct kset_uevent_ops {
 int (*filter)(struct kset *kset, struct kobject *kobj);
 const char *(*name)(struct kset *kset, struct kobject *kobj);
 int (*uevent)(struct kset *kset, struct kobject *kobj,
        struct kobj_uevent_env *env);
};

struct kobj_attribute {
 struct attribute attr;
 ssize_t (*show)(struct kobject *kobj, struct kobj_attribute *attr,
   char *buf);
 ssize_t (*store)(struct kobject *kobj, struct kobj_attribute *attr,
    const char *buf, size_t count);
};

extern struct sysfs_ops kobj_sysfs_ops;
# 151 "include/linux/kobject.h"
struct kset {
 struct list_head list;
 spinlock_t list_lock;
 struct kobject kobj;
 struct kset_uevent_ops *uevent_ops;
};

extern void kset_init(struct kset *kset);
extern int __attribute__((warn_unused_result)) kset_register(struct kset *kset);
extern void kset_unregister(struct kset *kset);
extern struct kset * __attribute__((warn_unused_result)) kset_create_and_add(const char *name,
      struct kset_uevent_ops *u,
      struct kobject *parent_kobj);

static inline __attribute__((always_inline)) struct kset *to_kset(struct kobject *kobj)
{
 return kobj ? ({ const typeof( ((struct kset *)0)->kobj ) *__mptr = (kobj); (struct kset *)( (char *)__mptr - __builtin_offsetof(struct kset,kobj) );}) : ((void *)0);
}

static inline __attribute__((always_inline)) struct kset *kset_get(struct kset *k)
{
 return k ? to_kset(kobject_get(&k->kobj)) : ((void *)0);
}

static inline __attribute__((always_inline)) void kset_put(struct kset *k)
{
 kobject_put(&k->kobj);
}

static inline __attribute__((always_inline)) struct kobj_type *get_ktype(struct kobject *kobj)
{
 return kobj->ktype;
}

extern struct kobject *kset_find_obj(struct kset *, const char *);


extern struct kobject *kernel_kobj;

extern struct kobject *mm_kobj;

extern struct kobject *hypervisor_kobj;

extern struct kobject *power_kobj;

extern struct kobject *firmware_kobj;


int kobject_uevent(struct kobject *kobj, enum kobject_action action);
int kobject_uevent_env(struct kobject *kobj, enum kobject_action action,
   char *envp[]);

int add_uevent_var(struct kobj_uevent_env *env, const char *format, ...)
 __attribute__((format (printf, 2, 3)));

int kobject_action_type(const char *buf, size_t count,
   enum kobject_action *type);
# 90 "include/linux/sched.h" 2
# 1 "include/linux/latencytop.h" 1
# 41 "include/linux/latencytop.h"
static inline __attribute__((always_inline)) void
account_scheduler_latency(struct task_struct *task, int usecs, int inter)
{
}

static inline __attribute__((always_inline)) void clear_all_latency_tracing(struct task_struct *p)
{
}
# 91 "include/linux/sched.h" 2
# 1 "include/linux/cred.h" 1
# 16 "include/linux/cred.h"
# 1 "include/linux/key.h" 1
# 22 "include/linux/key.h"
# 1 "include/linux/sysctl.h" 1
# 32 "include/linux/sysctl.h"
struct file;
struct completion;






struct __sysctl_args {
 int *name;
 int nlen;
 void *oldval;
 size_t *oldlenp;
 void *newval;
 size_t newlen;
 unsigned long __unused[4];
};
# 60 "include/linux/sysctl.h"
enum
{
 CTL_KERN=1,
 CTL_VM=2,
 CTL_NET=3,
 CTL_PROC=4,
 CTL_FS=5,
 CTL_DEBUG=6,
 CTL_DEV=7,
 CTL_BUS=8,
 CTL_ABI=9,
 CTL_CPU=10,
 CTL_ARLAN=254,
 CTL_S390DBF=5677,
 CTL_SUNRPC=7249,
 CTL_PM=9899,
 CTL_FRV=9898,
};


enum
{
 CTL_BUS_ISA=1
};


enum
{
 INOTIFY_MAX_USER_INSTANCES=1,
 INOTIFY_MAX_USER_WATCHES=2,
 INOTIFY_MAX_QUEUED_EVENTS=3
};


enum
{
 KERN_OSTYPE=1,
 KERN_OSRELEASE=2,
 KERN_OSREV=3,
 KERN_VERSION=4,
 KERN_SECUREMASK=5,
 KERN_PROF=6,
 KERN_NODENAME=7,
 KERN_DOMAINNAME=8,

 KERN_PANIC=15,
 KERN_REALROOTDEV=16,

 KERN_SPARC_REBOOT=21,
 KERN_CTLALTDEL=22,
 KERN_PRINTK=23,
 KERN_NAMETRANS=24,
 KERN_PPC_HTABRECLAIM=25,
 KERN_PPC_ZEROPAGED=26,
 KERN_PPC_POWERSAVE_NAP=27,
 KERN_MODPROBE=28,
 KERN_SG_BIG_BUFF=29,
 KERN_ACCT=30,
 KERN_PPC_L2CR=31,

 KERN_RTSIGNR=32,
 KERN_RTSIGMAX=33,

 KERN_SHMMAX=34,
 KERN_MSGMAX=35,
 KERN_MSGMNB=36,
 KERN_MSGPOOL=37,
 KERN_SYSRQ=38,
 KERN_MAX_THREADS=39,
  KERN_RANDOM=40,
  KERN_SHMALL=41,
  KERN_MSGMNI=42,
  KERN_SEM=43,
  KERN_SPARC_STOP_A=44,
  KERN_SHMMNI=45,
 KERN_OVERFLOWUID=46,
 KERN_OVERFLOWGID=47,
 KERN_SHMPATH=48,
 KERN_HOTPLUG=49,
 KERN_IEEE_EMULATION_WARNINGS=50,
 KERN_S390_USER_DEBUG_LOGGING=51,
 KERN_CORE_USES_PID=52,
 KERN_TAINTED=53,
 KERN_CADPID=54,
 KERN_PIDMAX=55,
   KERN_CORE_PATTERN=56,
 KERN_PANIC_ON_OOPS=57,
 KERN_HPPA_PWRSW=58,
 KERN_HPPA_UNALIGNED=59,
 KERN_PRINTK_RATELIMIT=60,
 KERN_PRINTK_RATELIMIT_BURST=61,
 KERN_PTY=62,
 KERN_NGROUPS_MAX=63,
 KERN_SPARC_SCONS_PWROFF=64,
 KERN_HZ_TIMER=65,
 KERN_UNKNOWN_NMI_PANIC=66,
 KERN_BOOTLOADER_TYPE=67,
 KERN_RANDOMIZE=68,
 KERN_SETUID_DUMPABLE=69,
 KERN_SPIN_RETRY=70,
 KERN_ACPI_VIDEO_FLAGS=71,
 KERN_IA64_UNALIGNED=72,
 KERN_COMPAT_LOG=73,
 KERN_MAX_LOCK_DEPTH=74,
 KERN_NMI_WATCHDOG=75,
 KERN_PANIC_ON_NMI=76,
};




enum
{
 VM_UNUSED1=1,
 VM_UNUSED2=2,
 VM_UNUSED3=3,
 VM_UNUSED4=4,
 VM_OVERCOMMIT_MEMORY=5,
 VM_UNUSED5=6,
 VM_UNUSED7=7,
 VM_UNUSED8=8,
 VM_UNUSED9=9,
 VM_PAGE_CLUSTER=10,
 VM_DIRTY_BACKGROUND=11,
 VM_DIRTY_RATIO=12,
 VM_DIRTY_WB_CS=13,
 VM_DIRTY_EXPIRE_CS=14,
 VM_NR_PDFLUSH_THREADS=15,
 VM_OVERCOMMIT_RATIO=16,
 VM_PAGEBUF=17,
 VM_HUGETLB_PAGES=18,
 VM_SWAPPINESS=19,
 VM_LOWMEM_RESERVE_RATIO=20,
 VM_MIN_FREE_KBYTES=21,
 VM_MAX_MAP_COUNT=22,
 VM_LAPTOP_MODE=23,
 VM_BLOCK_DUMP=24,
 VM_HUGETLB_GROUP=25,
 VM_VFS_CACHE_PRESSURE=26,
 VM_LEGACY_VA_LAYOUT=27,
 VM_SWAP_TOKEN_TIMEOUT=28,
 VM_DROP_PAGECACHE=29,
 VM_PERCPU_PAGELIST_FRACTION=30,
 VM_ZONE_RECLAIM_MODE=31,
 VM_MIN_UNMAPPED=32,
 VM_PANIC_ON_OOM=33,
 VM_VDSO_ENABLED=34,
 VM_MIN_SLAB=35,
};



enum
{
 NET_CORE=1,
 NET_ETHER=2,
 NET_802=3,
 NET_UNIX=4,
 NET_IPV4=5,
 NET_IPX=6,
 NET_ATALK=7,
 NET_NETROM=8,
 NET_AX25=9,
 NET_BRIDGE=10,
 NET_ROSE=11,
 NET_IPV6=12,
 NET_X25=13,
 NET_TR=14,
 NET_DECNET=15,
 NET_ECONET=16,
 NET_SCTP=17,
 NET_LLC=18,
 NET_NETFILTER=19,
 NET_DCCP=20,
 NET_IRDA=412,
};


enum
{
 RANDOM_POOLSIZE=1,
 RANDOM_ENTROPY_COUNT=2,
 RANDOM_READ_THRESH=3,
 RANDOM_WRITE_THRESH=4,
 RANDOM_BOOT_ID=5,
 RANDOM_UUID=6
};


enum
{
 PTY_MAX=1,
 PTY_NR=2
};


enum
{
 BUS_ISA_MEM_BASE=1,
 BUS_ISA_PORT_BASE=2,
 BUS_ISA_PORT_SHIFT=3
};


enum
{
 NET_CORE_WMEM_MAX=1,
 NET_CORE_RMEM_MAX=2,
 NET_CORE_WMEM_DEFAULT=3,
 NET_CORE_RMEM_DEFAULT=4,

 NET_CORE_MAX_BACKLOG=6,
 NET_CORE_FASTROUTE=7,
 NET_CORE_MSG_COST=8,
 NET_CORE_MSG_BURST=9,
 NET_CORE_OPTMEM_MAX=10,
 NET_CORE_HOT_LIST_LENGTH=11,
 NET_CORE_DIVERT_VERSION=12,
 NET_CORE_NO_CONG_THRESH=13,
 NET_CORE_NO_CONG=14,
 NET_CORE_LO_CONG=15,
 NET_CORE_MOD_CONG=16,
 NET_CORE_DEV_WEIGHT=17,
 NET_CORE_SOMAXCONN=18,
 NET_CORE_BUDGET=19,
 NET_CORE_AEVENT_ETIME=20,
 NET_CORE_AEVENT_RSEQTH=21,
 NET_CORE_WARNINGS=22,
};







enum
{
 NET_UNIX_DESTROY_DELAY=1,
 NET_UNIX_DELETE_DELAY=2,
 NET_UNIX_MAX_DGRAM_QLEN=3,
};


enum
{
 NET_NF_CONNTRACK_MAX=1,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_NF_CONNTRACK_BUCKETS=14,
 NET_NF_CONNTRACK_LOG_INVALID=15,
 NET_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_NF_CONNTRACK_TCP_LOOSE=17,
 NET_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_NF_CONNTRACK_TCP_MAX_RETRANS=19,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_NF_CONNTRACK_COUNT=27,
 NET_NF_CONNTRACK_ICMPV6_TIMEOUT=28,
 NET_NF_CONNTRACK_FRAG6_TIMEOUT=29,
 NET_NF_CONNTRACK_FRAG6_LOW_THRESH=30,
 NET_NF_CONNTRACK_FRAG6_HIGH_THRESH=31,
 NET_NF_CONNTRACK_CHECKSUM=32,
};


enum
{

 NET_IPV4_FORWARD=8,
 NET_IPV4_DYNADDR=9,

 NET_IPV4_CONF=16,
 NET_IPV4_NEIGH=17,
 NET_IPV4_ROUTE=18,
 NET_IPV4_FIB_HASH=19,
 NET_IPV4_NETFILTER=20,

 NET_IPV4_TCP_TIMESTAMPS=33,
 NET_IPV4_TCP_WINDOW_SCALING=34,
 NET_IPV4_TCP_SACK=35,
 NET_IPV4_TCP_RETRANS_COLLAPSE=36,
 NET_IPV4_DEFAULT_TTL=37,
 NET_IPV4_AUTOCONFIG=38,
 NET_IPV4_NO_PMTU_DISC=39,
 NET_IPV4_TCP_SYN_RETRIES=40,
 NET_IPV4_IPFRAG_HIGH_THRESH=41,
 NET_IPV4_IPFRAG_LOW_THRESH=42,
 NET_IPV4_IPFRAG_TIME=43,
 NET_IPV4_TCP_MAX_KA_PROBES=44,
 NET_IPV4_TCP_KEEPALIVE_TIME=45,
 NET_IPV4_TCP_KEEPALIVE_PROBES=46,
 NET_IPV4_TCP_RETRIES1=47,
 NET_IPV4_TCP_RETRIES2=48,
 NET_IPV4_TCP_FIN_TIMEOUT=49,
 NET_IPV4_IP_MASQ_DEBUG=50,
 NET_TCP_SYNCOOKIES=51,
 NET_TCP_STDURG=52,
 NET_TCP_RFC1337=53,
 NET_TCP_SYN_TAILDROP=54,
 NET_TCP_MAX_SYN_BACKLOG=55,
 NET_IPV4_LOCAL_PORT_RANGE=56,
 NET_IPV4_ICMP_ECHO_IGNORE_ALL=57,
 NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS=58,
 NET_IPV4_ICMP_SOURCEQUENCH_RATE=59,
 NET_IPV4_ICMP_DESTUNREACH_RATE=60,
 NET_IPV4_ICMP_TIMEEXCEED_RATE=61,
 NET_IPV4_ICMP_PARAMPROB_RATE=62,
 NET_IPV4_ICMP_ECHOREPLY_RATE=63,
 NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES=64,
 NET_IPV4_IGMP_MAX_MEMBERSHIPS=65,
 NET_TCP_TW_RECYCLE=66,
 NET_IPV4_ALWAYS_DEFRAG=67,
 NET_IPV4_TCP_KEEPALIVE_INTVL=68,
 NET_IPV4_INET_PEER_THRESHOLD=69,
 NET_IPV4_INET_PEER_MINTTL=70,
 NET_IPV4_INET_PEER_MAXTTL=71,
 NET_IPV4_INET_PEER_GC_MINTIME=72,
 NET_IPV4_INET_PEER_GC_MAXTIME=73,
 NET_TCP_ORPHAN_RETRIES=74,
 NET_TCP_ABORT_ON_OVERFLOW=75,
 NET_TCP_SYNACK_RETRIES=76,
 NET_TCP_MAX_ORPHANS=77,
 NET_TCP_MAX_TW_BUCKETS=78,
 NET_TCP_FACK=79,
 NET_TCP_REORDERING=80,
 NET_TCP_ECN=81,
 NET_TCP_DSACK=82,
 NET_TCP_MEM=83,
 NET_TCP_WMEM=84,
 NET_TCP_RMEM=85,
 NET_TCP_APP_WIN=86,
 NET_TCP_ADV_WIN_SCALE=87,
 NET_IPV4_NONLOCAL_BIND=88,
 NET_IPV4_ICMP_RATELIMIT=89,
 NET_IPV4_ICMP_RATEMASK=90,
 NET_TCP_TW_REUSE=91,
 NET_TCP_FRTO=92,
 NET_TCP_LOW_LATENCY=93,
 NET_IPV4_IPFRAG_SECRET_INTERVAL=94,
 NET_IPV4_IGMP_MAX_MSF=96,
 NET_TCP_NO_METRICS_SAVE=97,
 NET_TCP_DEFAULT_WIN_SCALE=105,
 NET_TCP_MODERATE_RCVBUF=106,
 NET_TCP_TSO_WIN_DIVISOR=107,
 NET_TCP_BIC_BETA=108,
 NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR=109,
 NET_TCP_CONG_CONTROL=110,
 NET_TCP_ABC=111,
 NET_IPV4_IPFRAG_MAX_DIST=112,
  NET_TCP_MTU_PROBING=113,
 NET_TCP_BASE_MSS=114,
 NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS=115,
 NET_TCP_DMA_COPYBREAK=116,
 NET_TCP_SLOW_START_AFTER_IDLE=117,
 NET_CIPSOV4_CACHE_ENABLE=118,
 NET_CIPSOV4_CACHE_BUCKET_SIZE=119,
 NET_CIPSOV4_RBM_OPTFMT=120,
 NET_CIPSOV4_RBM_STRICTVALID=121,
 NET_TCP_AVAIL_CONG_CONTROL=122,
 NET_TCP_ALLOWED_CONG_CONTROL=123,
 NET_TCP_MAX_SSTHRESH=124,
 NET_TCP_FRTO_RESPONSE=125,
};

enum {
 NET_IPV4_ROUTE_FLUSH=1,
 NET_IPV4_ROUTE_MIN_DELAY=2,
 NET_IPV4_ROUTE_MAX_DELAY=3,
 NET_IPV4_ROUTE_GC_THRESH=4,
 NET_IPV4_ROUTE_MAX_SIZE=5,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL=6,
 NET_IPV4_ROUTE_GC_TIMEOUT=7,
 NET_IPV4_ROUTE_GC_INTERVAL=8,
 NET_IPV4_ROUTE_REDIRECT_LOAD=9,
 NET_IPV4_ROUTE_REDIRECT_NUMBER=10,
 NET_IPV4_ROUTE_REDIRECT_SILENCE=11,
 NET_IPV4_ROUTE_ERROR_COST=12,
 NET_IPV4_ROUTE_ERROR_BURST=13,
 NET_IPV4_ROUTE_GC_ELASTICITY=14,
 NET_IPV4_ROUTE_MTU_EXPIRES=15,
 NET_IPV4_ROUTE_MIN_PMTU=16,
 NET_IPV4_ROUTE_MIN_ADVMSS=17,
 NET_IPV4_ROUTE_SECRET_INTERVAL=18,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS=19,
};

enum
{
 NET_PROTO_CONF_ALL=-2,
 NET_PROTO_CONF_DEFAULT=-3


};

enum
{
 NET_IPV4_CONF_FORWARDING=1,
 NET_IPV4_CONF_MC_FORWARDING=2,
 NET_IPV4_CONF_PROXY_ARP=3,
 NET_IPV4_CONF_ACCEPT_REDIRECTS=4,
 NET_IPV4_CONF_SECURE_REDIRECTS=5,
 NET_IPV4_CONF_SEND_REDIRECTS=6,
 NET_IPV4_CONF_SHARED_MEDIA=7,
 NET_IPV4_CONF_RP_FILTER=8,
 NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE=9,
 NET_IPV4_CONF_BOOTP_RELAY=10,
 NET_IPV4_CONF_LOG_MARTIANS=11,
 NET_IPV4_CONF_TAG=12,
 NET_IPV4_CONF_ARPFILTER=13,
 NET_IPV4_CONF_MEDIUM_ID=14,
 NET_IPV4_CONF_NOXFRM=15,
 NET_IPV4_CONF_NOPOLICY=16,
 NET_IPV4_CONF_FORCE_IGMP_VERSION=17,
 NET_IPV4_CONF_ARP_ANNOUNCE=18,
 NET_IPV4_CONF_ARP_IGNORE=19,
 NET_IPV4_CONF_PROMOTE_SECONDARIES=20,
 NET_IPV4_CONF_ARP_ACCEPT=21,
 __NET_IPV4_CONF_MAX
};


enum
{
 NET_IPV4_NF_CONNTRACK_MAX=1,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_IPV4_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_IPV4_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_IPV4_NF_CONNTRACK_BUCKETS=14,
 NET_IPV4_NF_CONNTRACK_LOG_INVALID=15,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_IPV4_NF_CONNTRACK_TCP_LOOSE=17,
 NET_IPV4_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_IPV4_NF_CONNTRACK_TCP_MAX_RETRANS=19,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_IPV4_NF_CONNTRACK_COUNT=27,
 NET_IPV4_NF_CONNTRACK_CHECKSUM=28,
};


enum {
 NET_IPV6_CONF=16,
 NET_IPV6_NEIGH=17,
 NET_IPV6_ROUTE=18,
 NET_IPV6_ICMP=19,
 NET_IPV6_BINDV6ONLY=20,
 NET_IPV6_IP6FRAG_HIGH_THRESH=21,
 NET_IPV6_IP6FRAG_LOW_THRESH=22,
 NET_IPV6_IP6FRAG_TIME=23,
 NET_IPV6_IP6FRAG_SECRET_INTERVAL=24,
 NET_IPV6_MLD_MAX_MSF=25,
};

enum {
 NET_IPV6_ROUTE_FLUSH=1,
 NET_IPV6_ROUTE_GC_THRESH=2,
 NET_IPV6_ROUTE_MAX_SIZE=3,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL=4,
 NET_IPV6_ROUTE_GC_TIMEOUT=5,
 NET_IPV6_ROUTE_GC_INTERVAL=6,
 NET_IPV6_ROUTE_GC_ELASTICITY=7,
 NET_IPV6_ROUTE_MTU_EXPIRES=8,
 NET_IPV6_ROUTE_MIN_ADVMSS=9,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS=10
};

enum {
 NET_IPV6_FORWARDING=1,
 NET_IPV6_HOP_LIMIT=2,
 NET_IPV6_MTU=3,
 NET_IPV6_ACCEPT_RA=4,
 NET_IPV6_ACCEPT_REDIRECTS=5,
 NET_IPV6_AUTOCONF=6,
 NET_IPV6_DAD_TRANSMITS=7,
 NET_IPV6_RTR_SOLICITS=8,
 NET_IPV6_RTR_SOLICIT_INTERVAL=9,
 NET_IPV6_RTR_SOLICIT_DELAY=10,
 NET_IPV6_USE_TEMPADDR=11,
 NET_IPV6_TEMP_VALID_LFT=12,
 NET_IPV6_TEMP_PREFERED_LFT=13,
 NET_IPV6_REGEN_MAX_RETRY=14,
 NET_IPV6_MAX_DESYNC_FACTOR=15,
 NET_IPV6_MAX_ADDRESSES=16,
 NET_IPV6_FORCE_MLD_VERSION=17,
 NET_IPV6_ACCEPT_RA_DEFRTR=18,
 NET_IPV6_ACCEPT_RA_PINFO=19,
 NET_IPV6_ACCEPT_RA_RTR_PREF=20,
 NET_IPV6_RTR_PROBE_INTERVAL=21,
 NET_IPV6_ACCEPT_RA_RT_INFO_MAX_PLEN=22,
 NET_IPV6_PROXY_NDP=23,
 NET_IPV6_ACCEPT_SOURCE_ROUTE=25,
 __NET_IPV6_MAX
};


enum {
 NET_IPV6_ICMP_RATELIMIT=1
};


enum {
 NET_NEIGH_MCAST_SOLICIT=1,
 NET_NEIGH_UCAST_SOLICIT=2,
 NET_NEIGH_APP_SOLICIT=3,
 NET_NEIGH_RETRANS_TIME=4,
 NET_NEIGH_REACHABLE_TIME=5,
 NET_NEIGH_DELAY_PROBE_TIME=6,
 NET_NEIGH_GC_STALE_TIME=7,
 NET_NEIGH_UNRES_QLEN=8,
 NET_NEIGH_PROXY_QLEN=9,
 NET_NEIGH_ANYCAST_DELAY=10,
 NET_NEIGH_PROXY_DELAY=11,
 NET_NEIGH_LOCKTIME=12,
 NET_NEIGH_GC_INTERVAL=13,
 NET_NEIGH_GC_THRESH1=14,
 NET_NEIGH_GC_THRESH2=15,
 NET_NEIGH_GC_THRESH3=16,
 NET_NEIGH_RETRANS_TIME_MS=17,
 NET_NEIGH_REACHABLE_TIME_MS=18,
 __NET_NEIGH_MAX
};


enum {
 NET_DCCP_DEFAULT=1,
};


enum {
 NET_IPX_PPROP_BROADCASTING=1,
 NET_IPX_FORWARDING=2
};


enum {
 NET_LLC2=1,
 NET_LLC_STATION=2,
};


enum {
 NET_LLC2_TIMEOUT=1,
};


enum {
 NET_LLC_STATION_ACK_TIMEOUT=1,
};


enum {
 NET_LLC2_ACK_TIMEOUT=1,
 NET_LLC2_P_TIMEOUT=2,
 NET_LLC2_REJ_TIMEOUT=3,
 NET_LLC2_BUSY_TIMEOUT=4,
};


enum {
 NET_ATALK_AARP_EXPIRY_TIME=1,
 NET_ATALK_AARP_TICK_TIME=2,
 NET_ATALK_AARP_RETRANSMIT_LIMIT=3,
 NET_ATALK_AARP_RESOLVE_TIME=4
};



enum {
 NET_NETROM_DEFAULT_PATH_QUALITY=1,
 NET_NETROM_OBSOLESCENCE_COUNT_INITIALISER=2,
 NET_NETROM_NETWORK_TTL_INITIALISER=3,
 NET_NETROM_TRANSPORT_TIMEOUT=4,
 NET_NETROM_TRANSPORT_MAXIMUM_TRIES=5,
 NET_NETROM_TRANSPORT_ACKNOWLEDGE_DELAY=6,
 NET_NETROM_TRANSPORT_BUSY_DELAY=7,
 NET_NETROM_TRANSPORT_REQUESTED_WINDOW_SIZE=8,
 NET_NETROM_TRANSPORT_NO_ACTIVITY_TIMEOUT=9,
 NET_NETROM_ROUTING_CONTROL=10,
 NET_NETROM_LINK_FAILS_COUNT=11,
 NET_NETROM_RESET=12
};


enum {
 NET_AX25_IP_DEFAULT_MODE=1,
 NET_AX25_DEFAULT_MODE=2,
 NET_AX25_BACKOFF_TYPE=3,
 NET_AX25_CONNECT_MODE=4,
 NET_AX25_STANDARD_WINDOW=5,
 NET_AX25_EXTENDED_WINDOW=6,
 NET_AX25_T1_TIMEOUT=7,
 NET_AX25_T2_TIMEOUT=8,
 NET_AX25_T3_TIMEOUT=9,
 NET_AX25_IDLE_TIMEOUT=10,
 NET_AX25_N2=11,
 NET_AX25_PACLEN=12,
 NET_AX25_PROTOCOL=13,
 NET_AX25_DAMA_SLAVE_TIMEOUT=14
};


enum {
 NET_ROSE_RESTART_REQUEST_TIMEOUT=1,
 NET_ROSE_CALL_REQUEST_TIMEOUT=2,
 NET_ROSE_RESET_REQUEST_TIMEOUT=3,
 NET_ROSE_CLEAR_REQUEST_TIMEOUT=4,
 NET_ROSE_ACK_HOLD_BACK_TIMEOUT=5,
 NET_ROSE_ROUTING_CONTROL=6,
 NET_ROSE_LINK_FAIL_TIMEOUT=7,
 NET_ROSE_MAX_VCS=8,
 NET_ROSE_WINDOW_SIZE=9,
 NET_ROSE_NO_ACTIVITY_TIMEOUT=10
};


enum {
 NET_X25_RESTART_REQUEST_TIMEOUT=1,
 NET_X25_CALL_REQUEST_TIMEOUT=2,
 NET_X25_RESET_REQUEST_TIMEOUT=3,
 NET_X25_CLEAR_REQUEST_TIMEOUT=4,
 NET_X25_ACK_HOLD_BACK_TIMEOUT=5,
 NET_X25_FORWARD=6
};


enum
{
 NET_TR_RIF_TIMEOUT=1
};


enum {
 NET_DECNET_NODE_TYPE = 1,
 NET_DECNET_NODE_ADDRESS = 2,
 NET_DECNET_NODE_NAME = 3,
 NET_DECNET_DEFAULT_DEVICE = 4,
 NET_DECNET_TIME_WAIT = 5,
 NET_DECNET_DN_COUNT = 6,
 NET_DECNET_DI_COUNT = 7,
 NET_DECNET_DR_COUNT = 8,
 NET_DECNET_DST_GC_INTERVAL = 9,
 NET_DECNET_CONF = 10,
 NET_DECNET_NO_FC_MAX_CWND = 11,
 NET_DECNET_MEM = 12,
 NET_DECNET_RMEM = 13,
 NET_DECNET_WMEM = 14,
 NET_DECNET_DEBUG_LEVEL = 255
};


enum {
 NET_DECNET_CONF_LOOPBACK = -2,
 NET_DECNET_CONF_DDCMP = -3,
 NET_DECNET_CONF_PPP = -4,
 NET_DECNET_CONF_X25 = -5,
 NET_DECNET_CONF_GRE = -6,
 NET_DECNET_CONF_ETHER = -7


};


enum {
 NET_DECNET_CONF_DEV_PRIORITY = 1,
 NET_DECNET_CONF_DEV_T1 = 2,
 NET_DECNET_CONF_DEV_T2 = 3,
 NET_DECNET_CONF_DEV_T3 = 4,
 NET_DECNET_CONF_DEV_FORWARDING = 5,
 NET_DECNET_CONF_DEV_BLKSIZE = 6,
 NET_DECNET_CONF_DEV_STATE = 7
};


enum {
 NET_SCTP_RTO_INITIAL = 1,
 NET_SCTP_RTO_MIN = 2,
 NET_SCTP_RTO_MAX = 3,
 NET_SCTP_RTO_ALPHA = 4,
 NET_SCTP_RTO_BETA = 5,
 NET_SCTP_VALID_COOKIE_LIFE = 6,
 NET_SCTP_ASSOCIATION_MAX_RETRANS = 7,
 NET_SCTP_PATH_MAX_RETRANS = 8,
 NET_SCTP_MAX_INIT_RETRANSMITS = 9,
 NET_SCTP_HB_INTERVAL = 10,
 NET_SCTP_PRESERVE_ENABLE = 11,
 NET_SCTP_MAX_BURST = 12,
 NET_SCTP_ADDIP_ENABLE = 13,
 NET_SCTP_PRSCTP_ENABLE = 14,
 NET_SCTP_SNDBUF_POLICY = 15,
 NET_SCTP_SACK_TIMEOUT = 16,
 NET_SCTP_RCVBUF_POLICY = 17,
};


enum {
 NET_BRIDGE_NF_CALL_ARPTABLES = 1,
 NET_BRIDGE_NF_CALL_IPTABLES = 2,
 NET_BRIDGE_NF_CALL_IP6TABLES = 3,
 NET_BRIDGE_NF_FILTER_VLAN_TAGGED = 4,
 NET_BRIDGE_NF_FILTER_PPPOE_TAGGED = 5,
};


enum {
 NET_IRDA_DISCOVERY=1,
 NET_IRDA_DEVNAME=2,
 NET_IRDA_DEBUG=3,
 NET_IRDA_FAST_POLL=4,
 NET_IRDA_DISCOVERY_SLOTS=5,
 NET_IRDA_DISCOVERY_TIMEOUT=6,
 NET_IRDA_SLOT_TIMEOUT=7,
 NET_IRDA_MAX_BAUD_RATE=8,
 NET_IRDA_MIN_TX_TURN_TIME=9,
 NET_IRDA_MAX_TX_DATA_SIZE=10,
 NET_IRDA_MAX_TX_WINDOW=11,
 NET_IRDA_MAX_NOREPLY_TIME=12,
 NET_IRDA_WARN_NOREPLY_TIME=13,
 NET_IRDA_LAP_KEEPALIVE_TIME=14,
};



enum
{
 FS_NRINODE=1,
 FS_STATINODE=2,
 FS_MAXINODE=3,
 FS_NRDQUOT=4,
 FS_MAXDQUOT=5,
 FS_NRFILE=6,
 FS_MAXFILE=7,
 FS_DENTRY=8,
 FS_NRSUPER=9,
 FS_MAXSUPER=10,
 FS_OVERFLOWUID=11,
 FS_OVERFLOWGID=12,
 FS_LEASES=13,
 FS_DIR_NOTIFY=14,
 FS_LEASE_TIME=15,
 FS_DQSTATS=16,
 FS_XFS=17,
 FS_AIO_NR=18,
 FS_AIO_MAX_NR=19,
 FS_INOTIFY=20,
 FS_OCFS2=988,
};


enum {
 FS_DQ_LOOKUPS = 1,
 FS_DQ_DROPS = 2,
 FS_DQ_READS = 3,
 FS_DQ_WRITES = 4,
 FS_DQ_CACHE_HITS = 5,
 FS_DQ_ALLOCATED = 6,
 FS_DQ_FREE = 7,
 FS_DQ_SYNCS = 8,
 FS_DQ_WARNINGS = 9,
};




enum {
 DEV_CDROM=1,
 DEV_HWMON=2,
 DEV_PARPORT=3,
 DEV_RAID=4,
 DEV_MAC_HID=5,
 DEV_SCSI=6,
 DEV_IPMI=7,
};


enum {
 DEV_CDROM_INFO=1,
 DEV_CDROM_AUTOCLOSE=2,
 DEV_CDROM_AUTOEJECT=3,
 DEV_CDROM_DEBUG=4,
 DEV_CDROM_LOCK=5,
 DEV_CDROM_CHECK_MEDIA=6
};


enum {
 DEV_PARPORT_DEFAULT=-3
};


enum {
 DEV_RAID_SPEED_LIMIT_MIN=1,
 DEV_RAID_SPEED_LIMIT_MAX=2
};


enum {
 DEV_PARPORT_DEFAULT_TIMESLICE=1,
 DEV_PARPORT_DEFAULT_SPINTIME=2
};


enum {
 DEV_PARPORT_SPINTIME=1,
 DEV_PARPORT_BASE_ADDR=2,
 DEV_PARPORT_IRQ=3,
 DEV_PARPORT_DMA=4,
 DEV_PARPORT_MODES=5,
 DEV_PARPORT_DEVICES=6,
 DEV_PARPORT_AUTOPROBE=16
};


enum {
 DEV_PARPORT_DEVICES_ACTIVE=-3,
};


enum {
 DEV_PARPORT_DEVICE_TIMESLICE=1,
};


enum {
 DEV_MAC_HID_KEYBOARD_SENDS_LINUX_KEYCODES=1,
 DEV_MAC_HID_KEYBOARD_LOCK_KEYCODES=2,
 DEV_MAC_HID_MOUSE_BUTTON_EMULATION=3,
 DEV_MAC_HID_MOUSE_BUTTON2_KEYCODE=4,
 DEV_MAC_HID_MOUSE_BUTTON3_KEYCODE=5,
 DEV_MAC_HID_ADB_MOUSE_SENDS_KEYCODES=6
};


enum {
 DEV_SCSI_LOGGING_LEVEL=1,
};


enum {
 DEV_IPMI_POWEROFF_POWERCYCLE=1,
};


enum
{
 ABI_DEFHANDLER_COFF=1,
 ABI_DEFHANDLER_ELF=2,
 ABI_DEFHANDLER_LCALL7=3,
 ABI_DEFHANDLER_LIBCSO=4,
 ABI_TRACE=5,
 ABI_FAKE_UTSNAME=6,
};





struct ctl_table;
struct nsproxy;
struct ctl_table_root;

struct ctl_table_set {
 struct list_head list;
 struct ctl_table_set *parent;
 int (*is_seen)(struct ctl_table_set *);
};

extern void setup_sysctl_set(struct ctl_table_set *p,
 struct ctl_table_set *parent,
 int (*is_seen)(struct ctl_table_set *));

struct ctl_table_header;

extern void sysctl_head_get(struct ctl_table_header *);
extern void sysctl_head_put(struct ctl_table_header *);
extern int sysctl_is_seen(struct ctl_table_header *);
extern struct ctl_table_header *sysctl_head_grab(struct ctl_table_header *);
extern struct ctl_table_header *sysctl_head_next(struct ctl_table_header *prev);
extern struct ctl_table_header *__sysctl_head_next(struct nsproxy *namespaces,
      struct ctl_table_header *prev);
extern void sysctl_head_finish(struct ctl_table_header *prev);
extern int sysctl_perm(struct ctl_table_root *root,
  struct ctl_table *table, int op);

typedef struct ctl_table ctl_table;

typedef int ctl_handler (struct ctl_table *table,
    void *oldval, size_t *oldlenp,
    void *newval, size_t newlen);

typedef int proc_handler (struct ctl_table *ctl, int write, struct file * filp,
     void *buffer, size_t *lenp, loff_t *ppos);

extern int proc_dostring(struct ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec(struct ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec_minmax(struct ctl_table *, int, struct file *,
    void *, size_t *, loff_t *);
extern int proc_dointvec_jiffies(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int proc_dointvec_userhz_jiffies(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int proc_dointvec_ms_jiffies(struct ctl_table *, int, struct file *,
        void *, size_t *, loff_t *);
extern int proc_doulongvec_minmax(struct ctl_table *, int, struct file *,
      void *, size_t *, loff_t *);
extern int proc_doulongvec_ms_jiffies_minmax(struct ctl_table *table, int,
          struct file *, void *, size_t *, loff_t *);

extern int do_sysctl (int *name, int nlen,
        void *oldval, size_t *oldlenp,
        void *newval, size_t newlen);

extern ctl_handler sysctl_data;
extern ctl_handler sysctl_string;
extern ctl_handler sysctl_intvec;
extern ctl_handler sysctl_jiffies;
extern ctl_handler sysctl_ms_jiffies;
# 1051 "include/linux/sysctl.h"
struct ctl_table
{
 int ctl_name;
 const char *procname;
 void *data;
 int maxlen;
 mode_t mode;
 struct ctl_table *child;
 struct ctl_table *parent;
 proc_handler *proc_handler;
 ctl_handler *strategy;
 void *extra1;
 void *extra2;
};

struct ctl_table_root {
 struct list_head root_list;
 struct ctl_table_set default_set;
 struct ctl_table_set *(*lookup)(struct ctl_table_root *root,
        struct nsproxy *namespaces);
 int (*permissions)(struct ctl_table_root *root,
   struct nsproxy *namespaces, struct ctl_table *table);
};



struct ctl_table_header
{
 struct ctl_table *ctl_table;
 struct list_head ctl_entry;
 int used;
 int count;
 struct completion *unregistering;
 struct ctl_table *ctl_table_arg;
 struct ctl_table_root *root;
 struct ctl_table_set *set;
 struct ctl_table *attached_by;
 struct ctl_table *attached_to;
 struct ctl_table_header *parent;
};


struct ctl_path {
 const char *procname;
 int ctl_name;
};

void register_sysctl_root(struct ctl_table_root *root);
struct ctl_table_header *__register_sysctl_paths(
 struct ctl_table_root *root, struct nsproxy *namespaces,
 const struct ctl_path *path, struct ctl_table *table);
struct ctl_table_header *register_sysctl_table(struct ctl_table * table);
struct ctl_table_header *register_sysctl_paths(const struct ctl_path *path,
      struct ctl_table *table);

void unregister_sysctl_table(struct ctl_table_header * table);
int sysctl_check_table(struct nsproxy *namespaces, struct ctl_table *table);
# 23 "include/linux/key.h" 2






typedef int32_t key_serial_t;


typedef uint32_t key_perm_t;

struct key;
# 74 "include/linux/key.h"
struct seq_file;
struct user_struct;
struct signal_struct;
struct cred;

struct key_type;
struct key_owner;
struct keyring_list;
struct keyring_name;
# 98 "include/linux/key.h"
typedef struct __key_reference_with_attributes *key_ref_t;

static inline __attribute__((always_inline)) key_ref_t make_key_ref(const struct key *key,
         unsigned long possession)
{
 return (key_ref_t) ((unsigned long) key | possession);
}

static inline __attribute__((always_inline)) struct key *key_ref_to_ptr(const key_ref_t key_ref)
{
 return (struct key *) ((unsigned long) key_ref & ~1UL);
}

static inline __attribute__((always_inline)) unsigned long is_key_possessed(const key_ref_t key_ref)
{
 return (unsigned long) key_ref & 1UL;
}
# 124 "include/linux/key.h"
struct key {
 atomic_t usage;
 key_serial_t serial;
 struct rb_node serial_node;
 struct key_type *type;
 struct rw_semaphore sem;
 struct key_user *user;
 void *security;
 time_t expiry;
 uid_t uid;
 gid_t gid;
 key_perm_t perm;
 unsigned short quotalen;
 unsigned short datalen;
# 148 "include/linux/key.h"
 unsigned long flags;
# 161 "include/linux/key.h"
 char *description;




 union {
  struct list_head link;
  unsigned long x[2];
  void *p[2];
 } type_data;





 union {
  unsigned long value;
  void *data;
  struct keyring_list *subscriptions;
 } payload;
};

extern struct key *key_alloc(struct key_type *type,
        const char *desc,
        uid_t uid, gid_t gid,
        const struct cred *cred,
        key_perm_t perm,
        unsigned long flags);






extern void key_revoke(struct key *key);
extern void key_put(struct key *key);

static inline __attribute__((always_inline)) struct key *key_get(struct key *key)
{
 if (key)
  (void) atomic_add_return(1, &key->usage);
 return key;
}

static inline __attribute__((always_inline)) void key_ref_put(key_ref_t key_ref)
{
 key_put(key_ref_to_ptr(key_ref));
}

extern struct key *request_key(struct key_type *type,
          const char *description,
          const char *callout_info);

extern struct key *request_key_with_auxdata(struct key_type *type,
         const char *description,
         const void *callout_info,
         size_t callout_len,
         void *aux);

extern struct key *request_key_async(struct key_type *type,
         const char *description,
         const void *callout_info,
         size_t callout_len);

extern struct key *request_key_async_with_auxdata(struct key_type *type,
        const char *description,
        const void *callout_info,
        size_t callout_len,
        void *aux);

extern int wait_for_key_construction(struct key *key, bool intr);

extern int key_validate(struct key *key);

extern key_ref_t key_create_or_update(key_ref_t keyring,
          const char *type,
          const char *description,
          const void *payload,
          size_t plen,
          key_perm_t perm,
          unsigned long flags);

extern int key_update(key_ref_t key,
        const void *payload,
        size_t plen);

extern int key_link(struct key *keyring,
      struct key *key);

extern int key_unlink(struct key *keyring,
        struct key *key);

extern struct key *keyring_alloc(const char *description, uid_t uid, gid_t gid,
     const struct cred *cred,
     unsigned long flags,
     struct key *dest);

extern int keyring_clear(struct key *keyring);

extern key_ref_t keyring_search(key_ref_t keyring,
    struct key_type *type,
    const char *description);

extern int keyring_add_key(struct key *keyring,
      struct key *key);

extern struct key *key_lookup(key_serial_t id);

static inline __attribute__((always_inline)) key_serial_t key_serial(struct key *key)
{
 return key ? key->serial : 0;
}


extern ctl_table key_sysctls[];





extern int install_thread_keyring_to_cred(struct cred *cred);
extern void key_fsuid_changed(struct task_struct *tsk);
extern void key_fsgid_changed(struct task_struct *tsk);
extern void key_init(void);
# 17 "include/linux/cred.h" 2


struct user_struct;
struct cred;
struct inode;







struct group_info {
 atomic_t usage;
 int ngroups;
 int nblocks;
 gid_t small_block[32];
 gid_t *blocks[0];
};
# 46 "include/linux/cred.h"
static inline __attribute__((always_inline)) struct group_info *get_group_info(struct group_info *gi)
{
 (void) atomic_add_return(1, &gi->usage);
 return gi;
}
# 62 "include/linux/cred.h"
extern struct group_info *groups_alloc(int);
extern struct group_info init_groups;
extern void groups_free(struct group_info *);
extern int set_current_groups(struct group_info *);
extern int set_groups(struct cred *, struct group_info *);
extern int groups_search(const struct group_info *, gid_t);





extern int in_group_p(gid_t);
extern int in_egroup_p(gid_t);






struct thread_group_cred {
 atomic_t usage;
 pid_t tgid;
 spinlock_t lock;
 struct key *session_keyring;
 struct key *process_keyring;
 struct rcu_head rcu;
};
# 114 "include/linux/cred.h"
struct cred {
 atomic_t usage;
 uid_t uid;
 gid_t gid;
 uid_t suid;
 gid_t sgid;
 uid_t euid;
 gid_t egid;
 uid_t fsuid;
 gid_t fsgid;
 unsigned securebits;
 kernel_cap_t cap_inheritable;
 kernel_cap_t cap_permitted;
 kernel_cap_t cap_effective;
 kernel_cap_t cap_bset;

 unsigned char jit_keyring;

 struct key *thread_keyring;
 struct key *request_key_auth;
 struct thread_group_cred *tgcred;




 struct user_struct *user;
 struct group_info *group_info;
 struct rcu_head rcu;
};

extern void __put_cred(struct cred *);
extern int copy_creds(struct task_struct *, unsigned long);
extern struct cred *prepare_creds(void);
extern struct cred *prepare_exec_creds(void);
extern struct cred *prepare_usermodehelper_creds(void);
extern int commit_creds(struct cred *);
extern void abort_creds(struct cred *);
extern const struct cred *override_creds(const struct cred *);
extern void revert_creds(const struct cred *);
extern struct cred *prepare_kernel_cred(struct task_struct *);
extern int change_create_files_as(struct cred *, struct inode *);
extern int set_security_override(struct cred *, u32);
extern int set_security_override_from_ctx(struct cred *, const char *);
extern int set_create_files_as(struct cred *, struct inode *);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) cred_init(void);
# 167 "include/linux/cred.h"
static inline __attribute__((always_inline)) struct cred *get_new_cred(struct cred *cred)
{
 (void) atomic_add_return(1, &cred->usage);
 return cred;
}
# 186 "include/linux/cred.h"
static inline __attribute__((always_inline)) const struct cred *get_cred(const struct cred *cred)
{
 return get_new_cred((struct cred *) cred);
}
# 202 "include/linux/cred.h"
static inline __attribute__((always_inline)) void put_cred(const struct cred *_cred)
{
 struct cred *cred = (struct cred *) _cred;

 do { if (__builtin_expect(!!(((&(cred)->usage)->counter) <= 0), 0)) __bug("include/linux/cred.h", 206); } while(0);
 if ((atomic_sub_return(1, &(cred)->usage) == 0))
  __put_cred(cred);
}
# 92 "include/linux/sched.h" 2




extern int kernel_preemption;
# 106 "include/linux/sched.h"
extern int softirq_preemption;





extern int hardirq_preemption;




struct mem_cgroup;
struct exec_domain;
struct futex_pi_state;
struct robust_list_head;
struct bio;
struct bts_tracer;
# 140 "include/linux/sched.h"
extern unsigned long avenrun[];
# 154 "include/linux/sched.h"
extern unsigned long total_forks;
extern int nr_threads;
extern __typeof__(unsigned long) per_cpu__process_counts;
extern int nr_processes(void);
extern unsigned long nr_running(void);
extern unsigned long nr_uninterruptible(void);
extern unsigned long nr_active(void);
extern unsigned long nr_iowait(void);
extern u64 cpu_nr_migrations(int cpu);

extern unsigned long get_parent_ip(unsigned long addr);

struct seq_file;
struct cfs_rq;
struct task_group;

extern void proc_sched_show_task(struct task_struct *p, struct seq_file *m);
extern void proc_sched_set_task(struct task_struct *p);
extern void
print_cfs_rq(struct seq_file *m, int cpu, struct cfs_rq *cfs_rq);
# 188 "include/linux/sched.h"
extern unsigned long long time_sync_thresh;
extern struct semaphore kernel_sem;
# 252 "include/linux/sched.h"
# 1 "include/linux/securebits.h" 1
# 253 "include/linux/sched.h" 2
# 261 "include/linux/sched.h"
struct exec_domain;
# 290 "include/linux/sched.h"
extern rwlock_t tasklist_lock;
extern spinlock_t mmlist_lock;

struct task_struct;

extern void sched_init(void);
extern void sched_init_smp(void);
extern void schedule_tail(struct task_struct *prev);
extern void init_idle(struct task_struct *idle, int cpu);
extern void init_idle_bootup_task(struct task_struct *idle);

extern int runqueue_is_locked(void);
extern void task_rq_unlock_wait(struct task_struct *p);

extern cpumask_var_t nohz_cpu_mask;



static inline __attribute__((always_inline)) int select_nohz_load_balancer(int cpu)
{
 return 0;
}





extern void show_state_filter(unsigned long state_filter);

static inline __attribute__((always_inline)) void show_state(void)
{
 show_state_filter(0);
}

extern void show_regs(struct pt_regs *);






extern void show_stack(struct task_struct *task, unsigned long *sp);

void io_schedule(void);
long io_schedule_timeout(long timeout);

extern void cpu_init (void);
extern void trap_init(void);
extern void update_process_times(int user);
extern void scheduler_tick(void);

extern void sched_show_task(struct task_struct *p);


extern int debug_direct_keyboard;





extern void softlockup_tick(void);
extern void touch_softlockup_watchdog(void);
extern void touch_all_softlockup_watchdogs(void);
extern int proc_dosoftlockup_thresh(struct ctl_table *table, int write,
        struct file *filp, void *buffer,
        size_t *lenp, loff_t *ppos);
extern unsigned int softlockup_panic;
extern int softlockup_thresh;
# 371 "include/linux/sched.h"
extern unsigned int sysctl_hung_task_panic;
extern unsigned long sysctl_hung_task_check_count;
extern unsigned long sysctl_hung_task_timeout_secs;
extern unsigned long sysctl_hung_task_warnings;
extern int proc_dohung_task_timeout_secs(struct ctl_table *table, int write,
      struct file *filp, void *buffer,
      size_t *lenp, loff_t *ppos);






extern char __sched_text_start[], __sched_text_end[];


extern int in_sched_functions(unsigned long addr);


extern signed long schedule_timeout(signed long timeout);
extern signed long schedule_timeout_interruptible(signed long timeout);
extern signed long schedule_timeout_killable(signed long timeout);
extern signed long schedule_timeout_uninterruptible(signed long timeout);
 void __schedule(void);
 void schedule(void);
extern int mutex_spin_on_owner(struct mutex *lock, struct thread_info *owner);




 void __attribute__((__section__(".sched.text"))) __schedule(void);

struct nsproxy;
struct user_namespace;




extern int sysctl_max_map_count;

# 1 "include/linux/aio.h" 1




# 1 "include/linux/workqueue.h" 1
# 14 "include/linux/workqueue.h"
struct workqueue_struct;

struct work_struct;
typedef void (*work_func_t)(struct work_struct *work);







struct work_struct {
 atomic_long_t data;



 struct list_head entry;
 work_func_t func;



};



struct delayed_work {
 struct work_struct work;
 struct timer_list timer;
};

struct execute_work {
 struct work_struct work;
};
# 162 "include/linux/workqueue.h"
extern struct workqueue_struct *
__create_workqueue_key(const char *name, int singlethread,
         int freezeable, int rt, struct lock_class_key *key,
         const char *lock_name);
# 193 "include/linux/workqueue.h"
extern void set_workqueue_prio(struct workqueue_struct *wq, int policy,
          int rt_priority, int nice);

extern void destroy_workqueue(struct workqueue_struct *wq);

extern int queue_work(struct workqueue_struct *wq, struct work_struct *work);
extern int queue_work_on(int cpu, struct workqueue_struct *wq,
   struct work_struct *work);
extern int queue_delayed_work(struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);
extern int queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);

extern void flush_workqueue(struct workqueue_struct *wq);
extern void flush_scheduled_work(void);

extern int schedule_work(struct work_struct *work);
extern int schedule_work_on(int cpu, struct work_struct *work);
extern int schedule_delayed_work(struct delayed_work *work, unsigned long delay);
extern int schedule_delayed_work_on(int cpu, struct delayed_work *work,
     unsigned long delay);
extern int schedule_on_each_cpu(work_func_t func);
extern int current_is_keventd(void);
extern int keventd_up(void);

extern void init_workqueues(void);
int execute_in_process_context(work_func_t fn, struct execute_work *);

extern int flush_work(struct work_struct *work);

extern int cancel_work_sync(struct work_struct *work);







static inline __attribute__((always_inline)) int cancel_delayed_work(struct delayed_work *work)
{
 int ret;

 ret = del_timer_sync(&work->timer);
 if (ret)
  (__builtin_constant_p(0) ? ____atomic_clear_bit(0, ((unsigned long *)(&(&work->work)->data))) : _clear_bit_le(0,((unsigned long *)(&(&work->work)->data))));
 return ret;
}

extern int cancel_delayed_work_sync(struct delayed_work *work);


static inline __attribute__((always_inline))
void cancel_rearming_delayed_workqueue(struct workqueue_struct *wq,
     struct delayed_work *work)
{
 cancel_delayed_work_sync(work);
}


static inline __attribute__((always_inline))
void cancel_rearming_delayed_work(struct delayed_work *work)
{
 cancel_delayed_work_sync(work);
}


static inline __attribute__((always_inline)) long work_on_cpu(unsigned int cpu, long (*fn)(void *), void *arg)
{
 return fn(arg);
}
# 6 "include/linux/aio.h" 2
# 1 "include/linux/aio_abi.h" 1
# 33 "include/linux/aio_abi.h"
typedef unsigned long aio_context_t;

enum {
 IOCB_CMD_PREAD = 0,
 IOCB_CMD_PWRITE = 1,
 IOCB_CMD_FSYNC = 2,
 IOCB_CMD_FDSYNC = 3,




 IOCB_CMD_NOOP = 6,
 IOCB_CMD_PREADV = 7,
 IOCB_CMD_PWRITEV = 8,
};
# 58 "include/linux/aio_abi.h"
struct io_event {
 __u64 data;
 __u64 obj;
 __s64 res;
 __s64 res2;
};
# 79 "include/linux/aio_abi.h"
struct iocb {

 __u64 aio_data;
 __u32 aio_key, aio_reserved1;



 __u16 aio_lio_opcode;
 __s16 aio_reqprio;
 __u32 aio_fildes;

 __u64 aio_buf;
 __u64 aio_nbytes;
 __s64 aio_offset;


 __u64 aio_reserved2;


 __u32 aio_flags;





 __u32 aio_resfd;
};
# 7 "include/linux/aio.h" 2
# 1 "include/linux/uio.h" 1
# 16 "include/linux/uio.h"
struct iovec
{
 void *iov_base;
 __kernel_size_t iov_len;
};



struct kvec {
 void *iov_base;
 size_t iov_len;
};
# 45 "include/linux/uio.h"
static inline __attribute__((always_inline)) size_t iov_length(const struct iovec *iov, unsigned long nr_segs)
{
 unsigned long seg;
 size_t ret = 0;

 for (seg = 0; seg < nr_segs; seg++)
  ret += iov[seg].iov_len;
 return ret;
}

unsigned long iov_shorten(struct iovec *iov, unsigned long nr_segs, size_t to);
# 8 "include/linux/aio.h" 2







struct kioctx;
# 87 "include/linux/aio.h"
struct kiocb {
 struct list_head ki_run_list;
 unsigned long ki_flags;
 int ki_users;
 unsigned ki_key;

 struct file *ki_filp;
 struct kioctx *ki_ctx;
 int (*ki_cancel)(struct kiocb *, struct io_event *);
 ssize_t (*ki_retry)(struct kiocb *);
 void (*ki_dtor)(struct kiocb *);

 union {
  void *user;
  struct task_struct *tsk;
 } ki_obj;

 __u64 ki_user_data;
 wait_queue_t ki_wait;
 loff_t ki_pos;

 void *private;

 unsigned short ki_opcode;
 size_t ki_nbytes;
 char *ki_buf;
 size_t ki_left;
 struct iovec ki_inline_vec;
  struct iovec *ki_iovec;
  unsigned long ki_nr_segs;
  unsigned long ki_cur_seg;

 struct list_head ki_list;






 struct file *ki_eventfd;
};
# 149 "include/linux/aio.h"
struct aio_ring {
 unsigned id;
 unsigned nr;
 unsigned head;
 unsigned tail;

 unsigned magic;
 unsigned compat_features;
 unsigned incompat_features;
 unsigned header_length;


 struct io_event io_events[0];
};




struct aio_ring_info {
 unsigned long mmap_base;
 unsigned long mmap_size;

 struct page **ring_pages;
 spinlock_t ring_lock;
 long nr_pages;

 unsigned nr, tail;

 struct page *internal_pages[8];
};

struct kioctx {
 atomic_t users;
 int dead;
 struct mm_struct *mm;


 unsigned long user_id;
 struct hlist_node list;

 wait_queue_head_t wait;

 spinlock_t ctx_lock;

 int reqs_active;
 struct list_head active_reqs;
 struct list_head run_list;


 unsigned max_reqs;

 struct aio_ring_info ring_info;

 struct delayed_work wq;

 struct rcu_head rcu_head;
};


extern unsigned aio_max_size;


extern ssize_t wait_on_sync_kiocb(struct kiocb *iocb);
extern int aio_put_req(struct kiocb *iocb);
extern void kick_iocb(struct kiocb *iocb);
extern int aio_complete(struct kiocb *iocb, long res, long res2);
struct mm_struct;
extern void exit_aio(struct mm_struct *mm);
# 230 "include/linux/aio.h"
static inline __attribute__((always_inline)) struct kiocb *list_kiocb(struct list_head *h)
{
 return ({ const typeof( ((struct kiocb *)0)->ki_list ) *__mptr = (h); (struct kiocb *)( (char *)__mptr - __builtin_offsetof(struct kiocb,ki_list) );});
}


extern unsigned long aio_nr;
extern unsigned long aio_max_nr;
# 412 "include/linux/sched.h" 2

extern unsigned long
arch_get_unmapped_area(struct file *, unsigned long, unsigned long,
         unsigned long, unsigned long);
extern unsigned long
arch_get_unmapped_area_topdown(struct file *filp, unsigned long addr,
     unsigned long len, unsigned long pgoff,
     unsigned long flags);
extern void arch_unmap_area(struct mm_struct *, unsigned long);
extern void arch_unmap_area_topdown(struct mm_struct *, unsigned long);
# 462 "include/linux/sched.h"
extern void set_dumpable(struct mm_struct *mm, int value);
extern int get_dumpable(struct mm_struct *mm);
# 493 "include/linux/sched.h"
struct sighand_struct {
 atomic_t count;
 struct k_sigaction action[64];
 spinlock_t siglock;
 wait_queue_head_t signalfd_wqh;
};

struct pacct_struct {
 int ac_flag;
 long ac_exitcode;
 unsigned long ac_mem;
 cputime_t ac_utime, ac_stime;
 unsigned long ac_minflt, ac_majflt;
};
# 519 "include/linux/sched.h"
struct task_cputime {
 cputime_t utime;
 cputime_t stime;
 unsigned long long sum_exec_runtime;
};
# 546 "include/linux/sched.h"
struct thread_group_cputimer {
 struct task_cputime cputime;
 int running;
 raw_spinlock_t lock;
};
# 559 "include/linux/sched.h"
struct signal_struct {
 atomic_t count;
 atomic_t live;

 wait_queue_head_t wait_chldexit;


 struct task_struct *curr_target;


 struct sigpending shared_pending;


 int group_exit_code;





 int notify_count;
 struct task_struct *group_exit_task;


 int group_stop_count;
 unsigned int flags;


 struct list_head posix_timers;


 struct hrtimer real_timer;
 struct pid *leader_pid;
 ktime_t it_real_incr;


 cputime_t it_prof_expires, it_virt_expires;
 cputime_t it_prof_incr, it_virt_incr;





 struct thread_group_cputimer cputimer;


 struct task_cputime cputime_expires;

 struct list_head cpu_timers[3];
# 615 "include/linux/sched.h"
 union {
  pid_t pgrp __attribute__((deprecated));
  pid_t __pgrp;
 };

 struct pid *tty_old_pgrp;

 union {
  pid_t session __attribute__((deprecated));
  pid_t __session;
 };


 int leader;

 struct tty_struct *tty;







 cputime_t utime, stime, cutime, cstime;
 cputime_t gtime;
 cputime_t cgtime;
 unsigned long nvcsw, nivcsw, cnvcsw, cnivcsw;
 unsigned long min_flt, maj_flt, cmin_flt, cmaj_flt;
 unsigned long inblock, oublock, cinblock, coublock;
 struct task_io_accounting ioac;







 unsigned long long sum_sched_runtime;
# 663 "include/linux/sched.h"
 struct rlimit rlim[16];


 struct pacct_struct pacct;
# 675 "include/linux/sched.h"
};
# 699 "include/linux/sched.h"
static inline __attribute__((always_inline)) int signal_group_exit(const struct signal_struct *sig)
{
 return (sig->flags & 0x00000008) ||
  (sig->group_exit_task != ((void *)0));
}




struct user_struct {
 atomic_t __count;
 atomic_t processes;
 atomic_t files;
 atomic_t sigpending;

 atomic_t inotify_watches;
 atomic_t inotify_devs;


 atomic_t epoll_watches;



 unsigned long mq_bytes;

 unsigned long locked_shm;


 struct key *uid_keyring;
 struct key *session_keyring;



 struct hlist_node uidhash_node;
 uid_t uid;
 struct user_namespace *user_ns;
# 743 "include/linux/sched.h"
};

extern int uids_sysfs_init(void);

extern struct user_struct *find_user(uid_t);

extern struct user_struct root_user;



struct backing_dev_info;
struct reclaim_state;
# 806 "include/linux/sched.h"
static inline __attribute__((always_inline)) int sched_info_on(void)
{






 return 0;

}

enum cpu_idle_type {
 CPU_IDLE,
 CPU_NOT_IDLE,
 CPU_NEWLY_IDLE,
 CPU_MAX_IDLE_TYPES
};
# 1018 "include/linux/sched.h"
struct sched_domain_attr;

static inline __attribute__((always_inline)) void
partition_sched_domains(int ndoms_new, struct cpumask *doms_new,
   struct sched_domain_attr *dattr_new)
{
}


struct io_context;





static inline __attribute__((always_inline)) void prefetch_stack(struct task_struct *t) { }


struct audit_context;
struct mempolicy;
struct pipe_inode_info;
struct uts_namespace;

struct rq;
struct sched_domain;

struct sched_class {
 const struct sched_class *next;

 void (*enqueue_task) (struct rq *rq, struct task_struct *p, int wakeup);
 void (*dequeue_task) (struct rq *rq, struct task_struct *p, int sleep);
 void (*yield_task) (struct rq *rq);

 void (*check_preempt_curr) (struct rq *rq, struct task_struct *p, int sync);

 struct task_struct * (*pick_next_task) (struct rq *rq);
 void (*put_prev_task) (struct rq *rq, struct task_struct *p);
# 1079 "include/linux/sched.h"
 void (*set_curr_task) (struct rq *rq);
 void (*task_tick) (struct rq *rq, struct task_struct *p, int queued);
 void (*task_new) (struct rq *rq, struct task_struct *p);

 void (*switched_from) (struct rq *this_rq, struct task_struct *task,
          int running);
 void (*switched_to) (struct rq *this_rq, struct task_struct *task,
        int running);
 void (*prio_changed) (struct rq *this_rq, struct task_struct *task,
        int oldprio, int running);




};

struct load_weight {
 unsigned long weight, inv_weight;
};
# 1109 "include/linux/sched.h"
struct sched_entity {
 struct load_weight load;
 struct rb_node run_node;
 struct list_head group_node;
 unsigned int on_rq;

 u64 exec_start;
 u64 sum_exec_runtime;
 u64 vruntime;
 u64 prev_sum_exec_runtime;

 u64 last_wakeup;
 u64 avg_overlap;

 u64 nr_migrations;

 u64 start_runtime;
 u64 avg_wakeup;
# 1168 "include/linux/sched.h"
};

struct sched_rt_entity {
 struct list_head run_list;
 unsigned long timeout;
 unsigned int time_slice;
 int nr_cpus_allowed;

 struct sched_rt_entity *back;







};

struct task_struct {
 volatile long state;
 void *stack;
 atomic_t usage;
 unsigned int flags;
 unsigned int ptrace;

 int lock_depth;





 int prio, static_prio, normal_prio;
 unsigned int rt_priority;
 const struct sched_class *sched_class;
 struct sched_entity se;
 struct sched_rt_entity rt;
# 1218 "include/linux/sched.h"
 unsigned char fpu_counter;
 s8 oomkilladj;

 unsigned int btrace_seq;


 unsigned int policy;
 cpumask_t cpus_allowed;


 int rcu_read_lock_nesting;
 int rcu_flipctr_idx;






 struct list_head tasks;
 struct plist_node pushable_tasks;

 struct mm_struct *mm, *active_mm;


 struct linux_binfmt *binfmt;
 int exit_state;
 int exit_code, exit_signal;
 int pdeath_signal;

 unsigned int personality;
 unsigned did_exec:1;
 pid_t pid;
 pid_t tgid;


 unsigned long stack_canary;






 struct task_struct *real_parent;
 struct task_struct *parent;



 struct list_head children;
 struct list_head sibling;
 struct task_struct *group_leader;






 struct list_head ptraced;
 struct list_head ptrace_entry;
# 1291 "include/linux/sched.h"
 struct pid_link pids[PIDTYPE_MAX];
 struct list_head thread_group;

 struct completion *vfork_done;
 int *set_child_tid;
 int *clear_child_tid;

 cputime_t utime, stime, utimescaled, stimescaled;
 cputime_t gtime;
 cputime_t prev_utime, prev_stime;
 unsigned long nvcsw, nivcsw;
 struct timespec start_time;
 struct timespec real_start_time;

 unsigned long min_flt, maj_flt;

 struct task_cputime cputime_expires;
 struct list_head cpu_timers[3];

 struct task_struct* posix_timer_list;


 const struct cred *real_cred;

 const struct cred *cred;

 struct mutex cred_exec_mutex;

 char comm[16];




 int link_count, total_link_count;


 struct sysv_sem sysvsem;



 unsigned long last_switch_count;


 struct thread_struct thread;

 struct fs_struct *fs;

 struct files_struct *files;

 struct nsproxy *nsproxy;

 struct signal_struct *signal;
 struct sighand_struct *sighand;
 struct sigqueue *sigqueue_cache;

 sigset_t blocked, real_blocked;
 sigset_t saved_sigmask;
 struct sigpending pending;

 unsigned long sas_ss_sp;
 size_t sas_ss_size;
 int (*notifier)(void *priv);
 void *notifier_data;
 sigset_t *notifier_mask;
 struct audit_context *audit_context;




 seccomp_t seccomp;


    u32 parent_exec_id;
    u32 self_exec_id;

 spinlock_t alloc_lock;


 raw_spinlock_t pi_lock;



 struct plist_head pi_waiters;

 struct rt_mutex_waiter *pi_blocked_on;
# 1385 "include/linux/sched.h"
 int pagefault_disabled;
# 1421 "include/linux/sched.h"
 unsigned long softlockup_count;
# 1431 "include/linux/sched.h"
 void *journal_info;


 struct bio *bio_list, **bio_tail;


 struct reclaim_state *reclaim_state;

 struct backing_dev_info *backing_dev_info;

 struct io_context *io_context;

 unsigned long ptrace_message;
 siginfo_t *last_siginfo;
 struct task_io_accounting ioac;
# 1463 "include/linux/sched.h"
 struct robust_list_head *robust_list;



 struct list_head pi_state_list;
 struct futex_pi_state *pi_state_cache;

 struct perf_counter_context perf_counter_ctx;




 atomic_t fs_excl;
 struct rcu_head rcu;




 struct pipe_inode_info *splice_pipe;






 struct prop_local_single dirties;
# 1497 "include/linux/sched.h"
 unsigned long timer_slack_ns;
 unsigned long default_timer_slack_ns;

 struct list_head *scm_work_list;
# 1518 "include/linux/sched.h"
 unsigned long trace;






 int in_printk;

};
# 1557 "include/linux/sched.h"
static inline __attribute__((always_inline)) int rt_prio(int prio)
{
 if (__builtin_expect(!!(prio < 100), 0))
  return 1;
 return 0;
}

static inline __attribute__((always_inline)) int rt_task(struct task_struct *p)
{
 return rt_prio(p->prio);
}

static inline __attribute__((always_inline)) void set_task_session(struct task_struct *tsk, pid_t session)
{
 tsk->signal->__session = session;
}

static inline __attribute__((always_inline)) void set_task_pgrp(struct task_struct *tsk, pid_t pgrp)
{
 tsk->signal->__pgrp = pgrp;
}

static inline __attribute__((always_inline)) struct pid *task_pid(struct task_struct *task)
{
 return task->pids[PIDTYPE_PID].pid;
}

static inline __attribute__((always_inline)) struct pid *task_tgid(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_PID].pid;
}

static inline __attribute__((always_inline)) struct pid *task_pgrp(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_PGID].pid;
}

static inline __attribute__((always_inline)) struct pid *task_session(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_SID].pid;
}

struct pid_namespace;
# 1615 "include/linux/sched.h"
static inline __attribute__((always_inline)) pid_t task_pid_nr(struct task_struct *tsk)
{
 return tsk->pid;
}

pid_t task_pid_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline __attribute__((always_inline)) pid_t task_pid_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_pid(tsk));
}


static inline __attribute__((always_inline)) pid_t task_tgid_nr(struct task_struct *tsk)
{
 return tsk->tgid;
}

pid_t task_tgid_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline __attribute__((always_inline)) pid_t task_tgid_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_tgid(tsk));
}


static inline __attribute__((always_inline)) pid_t task_pgrp_nr(struct task_struct *tsk)
{
 return tsk->signal->__pgrp;
}

pid_t task_pgrp_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline __attribute__((always_inline)) pid_t task_pgrp_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_pgrp(tsk));
}


static inline __attribute__((always_inline)) pid_t task_session_nr(struct task_struct *tsk)
{
 return tsk->signal->__session;
}

pid_t task_session_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline __attribute__((always_inline)) pid_t task_session_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_session(tsk));
}
# 1675 "include/linux/sched.h"
static inline __attribute__((always_inline)) int pid_alive(struct task_struct *p)
{
 return p->pids[PIDTYPE_PID].pid != ((void *)0);
}







static inline __attribute__((always_inline)) int is_global_init(struct task_struct *tsk)
{
 return tsk->pid == 1;
}





extern int is_container_init(struct task_struct *tsk);

extern struct pid *cad_pid;

extern void free_task(struct task_struct *tsk);



extern void __put_task_struct_cb(struct rcu_head *rhp);

static inline __attribute__((always_inline)) void put_task_struct(struct task_struct *t)
{
 if ((atomic_sub_return(1, &t->usage) == 0))
  call_rcu(&t->rcu, __put_task_struct_cb);
}
# 1720 "include/linux/sched.h"
extern cputime_t task_utime(struct task_struct *p);
extern cputime_t task_stime(struct task_struct *p);
extern cputime_t task_gtime(struct task_struct *p);
# 1790 "include/linux/sched.h"
static inline __attribute__((always_inline)) int set_cpus_allowed_ptr(struct task_struct *p,
           const struct cpumask *new_mask)
{
 if (!test_bit(cpumask_check(0), (((new_mask))->bits)))
  return -22;
 return 0;
}

static inline __attribute__((always_inline)) int set_cpus_allowed(struct task_struct *p, cpumask_t new_mask)
{
 return set_cpus_allowed_ptr(p, &new_mask);
}
# 1813 "include/linux/sched.h"
extern unsigned long long sched_clock(void);

extern void sched_clock_init(void);
extern u64 sched_clock_cpu(int cpu);


static inline __attribute__((always_inline)) void sched_clock_tick(void)
{
}

static inline __attribute__((always_inline)) void sched_clock_idle_sleep_event(void)
{
}

static inline __attribute__((always_inline)) void sched_clock_idle_wakeup_event(u64 delta_ns)
{
}
# 1840 "include/linux/sched.h"
extern unsigned long long cpu_clock(int cpu);

extern unsigned long long
task_sched_runtime(struct task_struct *task);
extern unsigned long long thread_group_sched_runtime(struct task_struct *task);
# 1853 "include/linux/sched.h"
extern void sched_clock_idle_sleep_event(void);
extern void sched_clock_idle_wakeup_event(u64 delta_ns);




static inline __attribute__((always_inline)) void idle_task_exit(void) {}


extern void sched_idle_next(void);




static inline __attribute__((always_inline)) void wake_up_idle_cpu(int cpu) { }


extern unsigned int sysctl_sched_latency;
extern unsigned int sysctl_sched_min_granularity;
extern unsigned int sysctl_sched_wakeup_granularity;
extern unsigned int sysctl_sched_shares_ratelimit;
extern unsigned int sysctl_sched_shares_thresh;

extern unsigned int sysctl_sched_child_runs_first;
extern unsigned int sysctl_sched_features;
extern unsigned int sysctl_sched_migration_cost;
extern unsigned int sysctl_sched_nr_migrate;

int sched_nr_latency_handler(struct ctl_table *table, int write,
  struct file *file, void *buffer, size_t *length,
  loff_t *ppos);

extern unsigned int sysctl_sched_rt_period;
extern int sysctl_sched_rt_runtime;

int sched_rt_handler(struct ctl_table *table, int write,
  struct file *filp, void *buffer, size_t *lenp,
  loff_t *ppos);

extern unsigned int sysctl_sched_compat_yield;

extern void task_setprio(struct task_struct *p, int prio);


extern int rt_mutex_getprio(struct task_struct *p);
static inline __attribute__((always_inline)) void rt_mutex_setprio(struct task_struct *p, int prio)
{
 task_setprio(p, prio);
}
extern void rt_mutex_adjust_pi(struct task_struct *p);
# 1911 "include/linux/sched.h"
extern void set_user_nice(struct task_struct *p, long nice);
extern int task_prio(const struct task_struct *p);
extern int task_nice(const struct task_struct *p);
extern int can_nice(const struct task_struct *p, const int nice);
extern int task_curr(const struct task_struct *p);
extern int idle_cpu(int cpu);
extern int sched_setscheduler(struct task_struct *, int, struct sched_param *);
extern int sched_setscheduler_nocheck(struct task_struct *, int,
          struct sched_param *);
extern struct task_struct *idle_task(int cpu);
extern struct task_struct *curr_task(int cpu);
extern void set_curr_task(int cpu, struct task_struct *p);

void yield(void);
void __yield(void);




extern struct exec_domain default_exec_domain;

union thread_union {
 struct thread_info thread_info;
 unsigned long stack[8192/sizeof(long)];
};


static inline __attribute__((always_inline)) int kstack_end(void *addr)
{



 return !(((unsigned long)addr+sizeof(void*)-1) & (8192 -sizeof(void*)));
}


extern union thread_union init_thread_union;
extern struct task_struct init_task;

extern struct mm_struct init_mm;

extern struct pid_namespace init_pid_ns;
# 1968 "include/linux/sched.h"
extern struct task_struct *find_task_by_pid_type_ns(int type, int pid,
  struct pid_namespace *ns);

extern struct task_struct *find_task_by_vpid(pid_t nr);
extern struct task_struct *find_task_by_pid_ns(pid_t nr,
  struct pid_namespace *ns);

extern void __set_special_pids(struct pid *pid);


extern struct user_struct * alloc_uid(struct user_namespace *, uid_t);
static inline __attribute__((always_inline)) struct user_struct *get_uid(struct user_struct *u)
{
 (void) atomic_add_return(1, &u->__count);
 return u;
}
extern void free_uid(struct user_struct *);
extern void release_uids(struct user_namespace *ns);



extern void do_timer(unsigned long ticks);

extern int wake_up_state(struct task_struct *tsk, unsigned int state);
extern int wake_up_process(struct task_struct *tsk);
extern int wake_up_process_mutex(struct task_struct * tsk);
extern int wake_up_process_sync(struct task_struct * tsk);
extern int wake_up_process_mutex_sync(struct task_struct * tsk);
extern void wake_up_new_task(struct task_struct *tsk,
    unsigned long clone_flags);



 static inline __attribute__((always_inline)) void kick_process(struct task_struct *tsk) { }

extern void sched_fork(struct task_struct *p, int clone_flags);
extern void sched_dead(struct task_struct *p);

extern void proc_caches_init(void);
extern void flush_signals(struct task_struct *);
extern void ignore_signals(struct task_struct *);
extern void flush_signal_handlers(struct task_struct *, int force_default);
extern int dequeue_signal(struct task_struct *tsk, sigset_t *mask, siginfo_t *info);

static inline __attribute__((always_inline)) int dequeue_signal_lock(struct task_struct *tsk, sigset_t *mask, siginfo_t *info)
{
 unsigned long flags;
 int ret;

 do { ; flags = ({ unsigned long __ret; if (__builtin_types_compatible_p(typeof((&tsk->sighand->siglock)), raw_spinlock_t *)) __ret = ({ unsigned long __flags; do { ({ unsigned long __dummy; typeof(__flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (__flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0); do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&tsk->sighand->siglock)); } while (0); __flags; }); else if (__builtin_types_compatible_p(typeof((&tsk->sighand->siglock)), spinlock_t *)) __ret = _spin_lock_irqsave((spinlock_t *)(&tsk->sighand->siglock)); else __ret = __bad_func_type(); __ret; }); } while (0);
 ret = dequeue_signal(tsk, mask, info);
 do { ; do { if (__builtin_types_compatible_p(typeof((&tsk->sighand->siglock)), raw_spinlock_t *)) do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0); do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&tsk->sighand->siglock)); } while (0); } while (0); else if (__builtin_types_compatible_p(typeof((&tsk->sighand->siglock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&tsk->sighand->siglock)); else __bad_func_type(); } while (0); } while (0);

 return ret;
}

extern void block_all_signals(int (*notifier)(void *priv), void *priv,
         sigset_t *mask);
extern void unblock_all_signals(void);
extern void release_task(struct task_struct * p);
extern int send_sig_info(int, struct siginfo *, struct task_struct *);
extern int force_sigsegv(int, struct task_struct *);
extern int force_sig_info(int, struct siginfo *, struct task_struct *);
extern int __kill_pgrp_info(int sig, struct siginfo *info, struct pid *pgrp);
extern int kill_pid_info(int sig, struct siginfo *info, struct pid *pid);
extern int kill_pid_info_as_uid(int, struct siginfo *, struct pid *, uid_t, uid_t, u32);
extern int kill_pgrp(struct pid *pid, int sig, int priv);
extern int kill_pid(struct pid *pid, int sig, int priv);
extern int kill_proc_info(int, struct siginfo *, pid_t);
extern int do_notify_parent(struct task_struct *, int);
extern void force_sig(int, struct task_struct *);
extern void force_sig_specific(int, struct task_struct *);
extern int send_sig(int, struct task_struct *, int);
extern void zap_other_threads(struct task_struct *p);
extern struct sigqueue *sigqueue_alloc(void);
extern void sigqueue_free(struct sigqueue *);
extern int send_sigqueue(struct sigqueue *, struct task_struct *, int group);
extern int do_sigaction(int, struct k_sigaction *, struct k_sigaction *);
extern int do_sigaltstack(const stack_t *, stack_t *, unsigned long);

static inline __attribute__((always_inline)) int kill_cad_pid(int sig, int priv)
{
 return kill_pid(cad_pid, sig, priv);
}






static inline __attribute__((always_inline)) int is_si_special(const struct siginfo *info)
{
 return info <= ((struct siginfo *) 2);
}



static inline __attribute__((always_inline)) int on_sig_stack(unsigned long sp)
{
 return (sp - (get_current())->sas_ss_sp < (get_current())->sas_ss_size);
}

static inline __attribute__((always_inline)) int sas_ss_flags(unsigned long sp)
{
 return ((get_current())->sas_ss_size == 0 ? 2
  : on_sig_stack(sp) ? 1 : 0);
}




extern struct mm_struct * mm_alloc(void);


extern void __mmdrop(struct mm_struct *);
extern void __mmdrop_delayed(struct mm_struct *);

static inline __attribute__((always_inline)) void mmdrop(struct mm_struct * mm)
{
 if (__builtin_expect(!!((atomic_sub_return(1, &mm->mm_count) == 0)), 0))
  __mmdrop(mm);
}

static inline __attribute__((always_inline)) void mmdrop_delayed(struct mm_struct * mm)
{
 if ((atomic_sub_return(1, &mm->mm_count) == 0))
  __mmdrop_delayed(mm);
}


extern void mmput(struct mm_struct *);

extern struct mm_struct *get_task_mm(struct task_struct *task);

extern void mm_release(struct task_struct *, struct mm_struct *);

extern struct mm_struct *dup_mm(struct task_struct *tsk);

extern int copy_thread(int, unsigned long, unsigned long, unsigned long, struct task_struct *, struct pt_regs *);
extern void flush_thread(void);
extern void exit_thread(void);

extern void exit_files(struct task_struct *);
extern void __cleanup_signal(struct signal_struct *);
extern void __cleanup_sighand(struct sighand_struct *);

extern void exit_itimers(struct signal_struct *);
extern void flush_itimer_signals(void);

extern void do_group_exit(int);

extern void daemonize(const char *, ...);
extern int allow_signal(int);
extern int disallow_signal(int);

extern int do_execve(char *, char * *, char * *, struct pt_regs *);
extern long do_fork(unsigned long, unsigned long, struct pt_regs *, unsigned long, int *, int *);
struct task_struct *fork_idle(int);

extern void set_task_comm(struct task_struct *tsk, char *from);
extern char *get_task_comm(char *to, struct task_struct *tsk);




static inline __attribute__((always_inline)) unsigned long wait_task_inactive(struct task_struct *p,
            long match_state)
{
 return 1;
}







extern bool is_single_threaded(struct task_struct *);
# 2166 "include/linux/sched.h"
static inline __attribute__((always_inline)) int has_group_leader_pid(struct task_struct *p)
{
 return p->pid == p->tgid;
}

static inline __attribute__((always_inline))
int same_thread_group(struct task_struct *p1, struct task_struct *p2)
{
 return p1->tgid == p2->tgid;
}

static inline __attribute__((always_inline)) struct task_struct *next_thread(const struct task_struct *p)
{
 return ({ const typeof( ((struct task_struct *)0)->thread_group ) *__mptr = (({ typeof(p->thread_group.next) _________p1 = (*(volatile typeof(p->thread_group.next) *)&(p->thread_group.next)); do { } while(0); (_________p1); })); (struct task_struct *)( (char *)__mptr - __builtin_offsetof(struct task_struct,thread_group) );});

}

static inline __attribute__((always_inline)) int thread_group_empty(struct task_struct *p)
{
 return list_empty(&p->thread_group);
}
# 2201 "include/linux/sched.h"
static inline __attribute__((always_inline)) void task_lock(struct task_struct *p)
{
 do { if (__builtin_types_compatible_p(typeof((&p->alloc_lock)), raw_spinlock_t *)) do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&p->alloc_lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&p->alloc_lock)), spinlock_t *)) rt_spin_lock((spinlock_t *)(&p->alloc_lock)); else __bad_func_type(); } while (0);
}

static inline __attribute__((always_inline)) void task_unlock(struct task_struct *p)
{
 do { if (__builtin_types_compatible_p(typeof((&p->alloc_lock)), raw_spinlock_t *)) do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&p->alloc_lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&p->alloc_lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&p->alloc_lock)); else __bad_func_type(); } while (0);
}

extern struct sighand_struct *lock_task_sighand(struct task_struct *tsk,
       unsigned long *flags);

static inline __attribute__((always_inline)) void unlock_task_sighand(struct task_struct *tsk,
      unsigned long *flags)
{
 do { ; do { if (__builtin_types_compatible_p(typeof((&tsk->sighand->siglock)), raw_spinlock_t *)) do { do { ({ unsigned long __dummy; typeof(*flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((*flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (*flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (*flags) : "memory", "cc"); } } while (0); do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&tsk->sighand->siglock)); } while (0); } while (0); else if (__builtin_types_compatible_p(typeof((&tsk->sighand->siglock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&tsk->sighand->siglock)); else __bad_func_type(); } while (0); } while (0);
}






static inline __attribute__((always_inline)) void setup_thread_stack(struct task_struct *p, struct task_struct *org)
{
 *((struct thread_info *)(p)->stack) = *((struct thread_info *)(org)->stack);
 ((struct thread_info *)(p)->stack)->task = p;
}

static inline __attribute__((always_inline)) unsigned long *end_of_stack(struct task_struct *p)
{
 return (unsigned long *)(((struct thread_info *)(p)->stack) + 1);
}



static inline __attribute__((always_inline)) int object_is_on_stack(void *obj)
{
 void *stack = (((get_current()))->stack);

 return (obj >= stack) && (obj < (stack + 8192));
}

extern void thread_info_cache_init(void);
# 2263 "include/linux/sched.h"
static inline __attribute__((always_inline)) void set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 set_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((always_inline)) void clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 clear_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((always_inline)) int test_and_set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_set_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((always_inline)) int test_and_clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_clear_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((always_inline)) int test_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline __attribute__((always_inline)) void set_tsk_need_resched(struct task_struct *tsk)
{
 set_tsk_thread_flag(tsk,1);
}

static inline __attribute__((always_inline)) void clear_tsk_need_resched(struct task_struct *tsk)
{
 clear_tsk_thread_flag(tsk,1);
}

static inline __attribute__((always_inline)) int test_tsk_need_resched(struct task_struct *tsk)
{
 return __builtin_expect(!!(test_tsk_thread_flag(tsk,1)), 0);
}

static inline __attribute__((always_inline)) int signal_pending(struct task_struct *p)
{
 return __builtin_expect(!!(test_tsk_thread_flag(p,0)), 0);
}

extern int __fatal_signal_pending(struct task_struct *p);

static inline __attribute__((always_inline)) int fatal_signal_pending(struct task_struct *p)
{
 return signal_pending(p) && __fatal_signal_pending(p);
}

static inline __attribute__((always_inline)) int signal_pending_state(long state, struct task_struct *p)
{
 if (!(state & (2 | 256)))
  return 0;
 if (!signal_pending(p))
  return 0;

 return (state & 2) || __fatal_signal_pending(p);
}

static inline __attribute__((always_inline)) int need_resched(void)
{
 return __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0);
}
# 2337 "include/linux/sched.h"
extern int _cond_resched(void);






static inline __attribute__((always_inline)) int cond_resched(void)
{
 return _cond_resched();
}

extern int __cond_resched_raw_spinlock(raw_spinlock_t *lock);
extern int __cond_resched_spinlock(spinlock_t *spinlock);





extern int cond_resched_softirq(void);
static inline __attribute__((always_inline)) int cond_resched_bkl(void)
{
 return _cond_resched();
}
extern int cond_resched_softirq_context(void);
extern int cond_resched_hardirq_context(void);






static inline __attribute__((always_inline)) int __raw_spin_needbreak(raw_spinlock_t *lock)
{

 return (((void)(&(lock)->raw_lock), 0));



}




void thread_group_cputime(struct task_struct *tsk, struct task_cputime *times);
void thread_group_cputimer(struct task_struct *tsk, struct task_cputime *times);

static inline __attribute__((always_inline)) void thread_group_cputime_init(struct signal_struct *sig)
{
 sig->cputimer.cputime = (struct task_cputime) { .utime = (0UL), .stime = (0UL), .sum_exec_runtime = 0, };
 do { if (__builtin_types_compatible_p(typeof((&sig->cputimer.lock)), raw_spinlock_t *)) do { *((raw_spinlock_t *)(&sig->cputimer.lock)) = (raw_spinlock_t) { .raw_lock = { }, }; } while (0); else if (__builtin_types_compatible_p(typeof((&sig->cputimer.lock)), spinlock_t *)) do { static struct lock_class_key __key; __rt_spin_lock_init((spinlock_t *)(&sig->cputimer.lock), "&sig->cputimer.lock", &__key); } while (0); else __bad_func_type(); } while (0);
 sig->cputimer.running = 0;
}

static inline __attribute__((always_inline)) void thread_group_cputime_free(struct signal_struct *sig)
{
}


static inline __attribute__((always_inline)) int __spin_needbreak(spinlock_t *lock)
{
 struct task_struct *tsk = (get_current());


 return tsk->prio < tsk->normal_prio;
}
# 2415 "include/linux/sched.h"
static inline __attribute__((always_inline)) int softirq_need_resched(void)
{
 if (softirq_preemption && ((get_current())->flags & 0x08000000))
  return need_resched();
 return 0;
}

static inline __attribute__((always_inline)) int hardirq_need_resched(void)
{
 if (hardirq_preemption && ((get_current())->flags & 0x00000080))
  return need_resched();
 return 0;
}







extern void recalc_sigpending_and_wake(struct task_struct *t);
extern void recalc_sigpending(void);

extern void signal_wake_up(struct task_struct *t, int resume_stopped);
# 2454 "include/linux/sched.h"
static inline __attribute__((always_inline)) unsigned int task_cpu(const struct task_struct *p)
{
 return 0;
}

static inline __attribute__((always_inline)) void set_task_cpu(struct task_struct *p, unsigned int cpu)
{
}



extern void arch_pick_mmap_layout(struct mm_struct *mm);


extern void
__trace_special(void *__tr, void *__data,
  unsigned long arg1, unsigned long arg2, unsigned long arg3);
# 2479 "include/linux/sched.h"
extern long sched_setaffinity(pid_t pid, const struct cpumask *new_mask);
extern long sched_getaffinity(pid_t pid, struct cpumask *mask);

extern void normalize_rt_tasks(void);
# 2510 "include/linux/sched.h"
extern int task_can_switch_user(struct user_struct *up,
     struct task_struct *tsk);
# 2534 "include/linux/sched.h"
static inline __attribute__((always_inline)) void add_rchar(struct task_struct *tsk, ssize_t amt)
{
}

static inline __attribute__((always_inline)) void add_wchar(struct task_struct *tsk, ssize_t amt)
{
}

static inline __attribute__((always_inline)) void inc_syscr(struct task_struct *tsk)
{
}

static inline __attribute__((always_inline)) void inc_syscw(struct task_struct *tsk)
{
}
# 2558 "include/linux/sched.h"
extern void task_oncpu_function_call(struct task_struct *p,
         void (*func) (void *info), void *info);






static inline __attribute__((always_inline)) void mm_update_next_owner(struct mm_struct *mm)
{
}

static inline __attribute__((always_inline)) void mm_init_owner(struct mm_struct *mm, struct task_struct *p)
{
}




extern void clear_kernel_trace_flag_all_tasks(void);
extern void set_kernel_trace_flag_all_tasks(void);
# 2587 "include/linux/sched.h"
typedef cpumask_t migration_t;
# 2603 "include/linux/sched.h"
static inline __attribute__((always_inline)) void migration_disable(migration_t *saved)
{
}

static inline __attribute__((always_inline)) void migration_enable(migration_t saved)
{
}
# 12 "include/linux/cgroup.h" 2



# 1 "include/linux/cgroupstats.h" 1
# 19 "include/linux/cgroupstats.h"
# 1 "include/linux/taskstats.h" 1
# 40 "include/linux/taskstats.h"
struct taskstats {





 __u16 version;
 __u32 ac_exitcode;




 __u8 ac_flag;
 __u8 ac_nice;
# 71 "include/linux/taskstats.h"
 __u64 cpu_count __attribute__((aligned(8)));
 __u64 cpu_delay_total;






 __u64 blkio_count;
 __u64 blkio_delay_total;


 __u64 swapin_count;
 __u64 swapin_delay_total;







 __u64 cpu_run_real_total;







 __u64 cpu_run_virtual_total;




 char ac_comm[32];
 __u8 ac_sched __attribute__((aligned(8)));

 __u8 ac_pad[3];
 __u32 ac_uid __attribute__((aligned(8)));

 __u32 ac_gid;
 __u32 ac_pid;
 __u32 ac_ppid;
 __u32 ac_btime;
 __u64 ac_etime __attribute__((aligned(8)));

 __u64 ac_utime;
 __u64 ac_stime;
 __u64 ac_minflt;
 __u64 ac_majflt;
# 130 "include/linux/taskstats.h"
 __u64 coremem;



 __u64 virtmem;




 __u64 hiwater_rss;
 __u64 hiwater_vm;


 __u64 read_char;
 __u64 write_char;
 __u64 read_syscalls;
 __u64 write_syscalls;




 __u64 read_bytes;
 __u64 write_bytes;
 __u64 cancelled_write_bytes;

 __u64 nvcsw;
 __u64 nivcsw;


 __u64 ac_utimescaled;
 __u64 ac_stimescaled;
 __u64 cpu_scaled_run_real_total;


 __u64 freepages_count;
 __u64 freepages_delay_total;
};
# 175 "include/linux/taskstats.h"
enum {
 TASKSTATS_CMD_UNSPEC = 0,
 TASKSTATS_CMD_GET,
 TASKSTATS_CMD_NEW,
 __TASKSTATS_CMD_MAX,
};



enum {
 TASKSTATS_TYPE_UNSPEC = 0,
 TASKSTATS_TYPE_PID,
 TASKSTATS_TYPE_TGID,
 TASKSTATS_TYPE_STATS,
 TASKSTATS_TYPE_AGGR_PID,
 TASKSTATS_TYPE_AGGR_TGID,
 __TASKSTATS_TYPE_MAX,
};



enum {
 TASKSTATS_CMD_ATTR_UNSPEC = 0,
 TASKSTATS_CMD_ATTR_PID,
 TASKSTATS_CMD_ATTR_TGID,
 TASKSTATS_CMD_ATTR_REGISTER_CPUMASK,
 TASKSTATS_CMD_ATTR_DEREGISTER_CPUMASK,
 __TASKSTATS_CMD_ATTR_MAX,
};
# 20 "include/linux/cgroupstats.h" 2
# 31 "include/linux/cgroupstats.h"
struct cgroupstats {
 __u64 nr_sleeping;
 __u64 nr_running;
 __u64 nr_stopped;
 __u64 nr_uninterruptible;

 __u64 nr_io_wait;
};







enum {
 CGROUPSTATS_CMD_UNSPEC = __TASKSTATS_CMD_MAX,
 CGROUPSTATS_CMD_GET,
 CGROUPSTATS_CMD_NEW,
 __CGROUPSTATS_CMD_MAX,
};



enum {
 CGROUPSTATS_TYPE_UNSPEC = 0,
 CGROUPSTATS_TYPE_CGROUP_STATS,
 __CGROUPSTATS_TYPE_MAX,
};



enum {
 CGROUPSTATS_CMD_ATTR_UNSPEC = 0,
 CGROUPSTATS_CMD_ATTR_FD,
 __CGROUPSTATS_CMD_ATTR_MAX,
};
# 16 "include/linux/cgroup.h" 2
# 1 "include/linux/prio_heap.h" 1
# 18 "include/linux/prio_heap.h"
struct ptr_heap {
 void **ptrs;
 int max;
 int size;
 int (*gt)(void *, void *);
};
# 32 "include/linux/prio_heap.h"
extern int heap_init(struct ptr_heap *heap, size_t size, gfp_t gfp_mask,
       int (*gt)(void *, void *));





void heap_free(struct ptr_heap *heap);
# 54 "include/linux/prio_heap.h"
extern void *heap_insert(struct ptr_heap *heap, void *p);
# 17 "include/linux/cgroup.h" 2
# 444 "include/linux/cgroup.h"
static inline __attribute__((always_inline)) int cgroup_init_early(void) { return 0; }
static inline __attribute__((always_inline)) int cgroup_init(void) { return 0; }
static inline __attribute__((always_inline)) void cgroup_fork(struct task_struct *p) {}
static inline __attribute__((always_inline)) void cgroup_fork_callbacks(struct task_struct *p) {}
static inline __attribute__((always_inline)) void cgroup_post_fork(struct task_struct *p) {}
static inline __attribute__((always_inline)) void cgroup_exit(struct task_struct *p, int callbacks) {}

static inline __attribute__((always_inline)) void cgroup_lock(void) {}
static inline __attribute__((always_inline)) void cgroup_unlock(void) {}
static inline __attribute__((always_inline)) int cgroupstats_build(struct cgroupstats *stats,
     struct dentry *dentry)
{
 return -22;
}
# 23 "include/linux/memcontrol.h" 2
struct mem_cgroup;
struct page_cgroup;
struct page;
struct mm_struct;
# 122 "include/linux/memcontrol.h"
struct mem_cgroup;

static inline __attribute__((always_inline)) int mem_cgroup_newpage_charge(struct page *page,
     struct mm_struct *mm, gfp_t gfp_mask)
{
 return 0;
}

static inline __attribute__((always_inline)) int mem_cgroup_cache_charge(struct page *page,
     struct mm_struct *mm, gfp_t gfp_mask)
{
 return 0;
}

static inline __attribute__((always_inline)) int mem_cgroup_try_charge_swapin(struct mm_struct *mm,
  struct page *page, gfp_t gfp_mask, struct mem_cgroup **ptr)
{
 return 0;
}

static inline __attribute__((always_inline)) void mem_cgroup_commit_charge_swapin(struct page *page,
       struct mem_cgroup *ptr)
{
}

static inline __attribute__((always_inline)) void mem_cgroup_cancel_charge_swapin(struct mem_cgroup *ptr)
{
}

static inline __attribute__((always_inline)) void mem_cgroup_uncharge_page(struct page *page)
{
}

static inline __attribute__((always_inline)) void mem_cgroup_uncharge_cache_page(struct page *page)
{
}

static inline __attribute__((always_inline)) int mem_cgroup_shrink_usage(struct page *page,
   struct mm_struct *mm, gfp_t gfp_mask)
{
 return 0;
}

static inline __attribute__((always_inline)) void mem_cgroup_add_lru_list(struct page *page, int lru)
{
}

static inline __attribute__((always_inline)) void mem_cgroup_del_lru_list(struct page *page, int lru)
{
 return ;
}

static inline __attribute__((always_inline)) void mem_cgroup_rotate_lru_list(struct page *page, int lru)
{
 return ;
}

static inline __attribute__((always_inline)) void mem_cgroup_del_lru(struct page *page)
{
 return ;
}

static inline __attribute__((always_inline)) void
mem_cgroup_move_lists(struct page *page, enum lru_list from, enum lru_list to)
{
}

static inline __attribute__((always_inline)) int mm_match_cgroup(struct mm_struct *mm, struct mem_cgroup *mem)
{
 return 1;
}

static inline __attribute__((always_inline)) int task_in_mem_cgroup(struct task_struct *task,
         const struct mem_cgroup *mem)
{
 return 1;
}

static inline __attribute__((always_inline)) int
mem_cgroup_prepare_migration(struct page *page, struct mem_cgroup **ptr)
{
 return 0;
}

static inline __attribute__((always_inline)) void mem_cgroup_end_migration(struct mem_cgroup *mem,
     struct page *oldpage,
     struct page *newpage)
{
}

static inline __attribute__((always_inline)) int mem_cgroup_calc_mapped_ratio(struct mem_cgroup *mem)
{
 return 0;
}

static inline __attribute__((always_inline)) int mem_cgroup_reclaim_imbalance(struct mem_cgroup *mem)
{
 return 0;
}

static inline __attribute__((always_inline)) int mem_cgroup_get_reclaim_priority(struct mem_cgroup *mem)
{
 return 0;
}

static inline __attribute__((always_inline)) void mem_cgroup_note_reclaim_priority(struct mem_cgroup *mem,
      int priority)
{
}

static inline __attribute__((always_inline)) void mem_cgroup_record_reclaim_priority(struct mem_cgroup *mem,
      int priority)
{
}

static inline __attribute__((always_inline)) bool mem_cgroup_disabled(void)
{
 return true;
}

static inline __attribute__((always_inline)) bool mem_cgroup_oom_called(struct task_struct *task)
{
 return false;
}

static inline __attribute__((always_inline)) int
mem_cgroup_inactive_anon_is_low(struct mem_cgroup *memcg)
{
 return 1;
}

static inline __attribute__((always_inline)) unsigned long
mem_cgroup_zone_nr_pages(struct mem_cgroup *memcg, struct zone *zone,
    enum lru_list lru)
{
 return 0;
}


static inline __attribute__((always_inline)) struct zone_reclaim_stat*
mem_cgroup_get_reclaim_stat(struct mem_cgroup *memcg, struct zone *zone)
{
 return ((void *)0);
}

static inline __attribute__((always_inline)) struct zone_reclaim_stat*
mem_cgroup_get_reclaim_stat_from_page(struct page *page)
{
 return ((void *)0);
}
# 9 "include/linux/swap.h" 2

# 1 "include/linux/node.h" 1
# 22 "include/linux/node.h"
# 1 "include/linux/sysdev.h" 1
# 25 "include/linux/sysdev.h"
# 1 "include/linux/module.h" 1
# 10 "include/linux/module.h"
# 1 "include/linux/stat.h" 1





# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/stat.h" 1



struct __old_kernel_stat {
 unsigned short st_dev;
 unsigned short st_ino;
 unsigned short st_mode;
 unsigned short st_nlink;
 unsigned short st_uid;
 unsigned short st_gid;
 unsigned short st_rdev;
 unsigned long st_size;
 unsigned long st_atime;
 unsigned long st_mtime;
 unsigned long st_ctime;
};



struct stat {




 unsigned long st_dev;

 unsigned long st_ino;
 unsigned short st_mode;
 unsigned short st_nlink;
 unsigned short st_uid;
 unsigned short st_gid;




 unsigned long st_rdev;

 unsigned long st_size;
 unsigned long st_blksize;
 unsigned long st_blocks;
 unsigned long st_atime;
 unsigned long st_atime_nsec;
 unsigned long st_mtime;
 unsigned long st_mtime_nsec;
 unsigned long st_ctime;
 unsigned long st_ctime_nsec;
 unsigned long __unused4;
 unsigned long __unused5;
};






struct stat64 {
 unsigned long long st_dev;
 unsigned char __pad0[4];


 unsigned long __st_ino;
 unsigned int st_mode;
 unsigned int st_nlink;

 unsigned long st_uid;
 unsigned long st_gid;

 unsigned long long st_rdev;
 unsigned char __pad3[4];

 long long st_size;
 unsigned long st_blksize;
 unsigned long long st_blocks;

 unsigned long st_atime;
 unsigned long st_atime_nsec;

 unsigned long st_mtime;
 unsigned long st_mtime_nsec;

 unsigned long st_ctime;
 unsigned long st_ctime_nsec;

 unsigned long long st_ino;
};
# 7 "include/linux/stat.h" 2
# 62 "include/linux/stat.h"
struct kstat {
 u64 ino;
 dev_t dev;
 umode_t mode;
 unsigned int nlink;
 uid_t uid;
 gid_t gid;
 dev_t rdev;
 loff_t size;
 struct timespec atime;
 struct timespec mtime;
 struct timespec ctime;
 unsigned long blksize;
 unsigned long long blocks;
};
# 11 "include/linux/module.h" 2


# 1 "include/linux/kmod.h" 1
# 32 "include/linux/kmod.h"
extern int request_module(const char * name, ...) __attribute__ ((format (printf, 1, 2)));







struct key;
struct file;
struct subprocess_info;


struct subprocess_info *call_usermodehelper_setup(char *path, char **argv,
        char **envp, gfp_t gfp_mask);


void call_usermodehelper_setkeys(struct subprocess_info *info,
     struct key *session_keyring);
int call_usermodehelper_stdinpipe(struct subprocess_info *sub_info,
      struct file **filp);
void call_usermodehelper_setcleanup(struct subprocess_info *info,
        void (*cleanup)(char **argv, char **envp));

enum umh_wait {
 UMH_NO_WAIT = -1,
 UMH_WAIT_EXEC = 0,
 UMH_WAIT_PROC = 1,
};


int call_usermodehelper_exec(struct subprocess_info *info, enum umh_wait wait);



void call_usermodehelper_freeinfo(struct subprocess_info *info);

static inline __attribute__((always_inline)) int
call_usermodehelper(char *path, char **argv, char **envp, enum umh_wait wait)
{
 struct subprocess_info *info;
 gfp_t gfp_mask = (wait == UMH_NO_WAIT) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u));

 info = call_usermodehelper_setup(path, argv, envp, gfp_mask);
 if (info == ((void *)0))
  return -12;
 return call_usermodehelper_exec(info, wait);
}

static inline __attribute__((always_inline)) int
call_usermodehelper_keys(char *path, char **argv, char **envp,
    struct key *session_keyring, enum umh_wait wait)
{
 struct subprocess_info *info;
 gfp_t gfp_mask = (wait == UMH_NO_WAIT) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u));

 info = call_usermodehelper_setup(path, argv, envp, gfp_mask);
 if (info == ((void *)0))
  return -12;

 call_usermodehelper_setkeys(info, session_keyring);
 return call_usermodehelper_exec(info, wait);
}

extern void usermodehelper_init(void);

struct file;
extern int call_usermodehelper_pipe(char *path, char *argv[], char *envp[],
        struct file **filp);

extern int usermodehelper_disable(void);
extern void usermodehelper_enable(void);
# 14 "include/linux/module.h" 2
# 1 "include/linux/elf.h" 1




# 1 "include/linux/elf-em.h" 1
# 6 "include/linux/elf.h" 2

# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/elf.h" 1
# 10 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/elf.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/user.h" 1
# 33 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/user.h"
struct user_fp {
 struct fp_reg {
  unsigned int sign1:1;
  unsigned int unused:15;
  unsigned int sign2:1;
  unsigned int exponent:14;
  unsigned int j:1;
  unsigned int mantissa1:31;
  unsigned int mantissa0:32;
 } fpregs[8];
 unsigned int fpsr:32;
 unsigned int fpcr:32;
 unsigned char ftype[8];
 unsigned int init_flag;
};




struct user{


  struct pt_regs regs;

  int u_fpvalid;


  unsigned long int u_tsize;
  unsigned long int u_dsize;
  unsigned long int u_ssize;
  unsigned long start_code;
  unsigned long start_stack;



  long int signal;
  int reserved;
  unsigned long u_ar0;

  unsigned long magic;
  char u_comm[32];
  int u_debugreg[8];
  struct user_fp u_fp;
  struct user_fp_struct * u_fp0;

};
# 88 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/user.h"
struct user_vfp {
 unsigned long long fpregs[32];
 unsigned long fpscr;
};
# 11 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/elf.h" 2

typedef unsigned long elf_greg_t;
typedef unsigned long elf_freg_t[3];


typedef elf_greg_t elf_gregset_t[(sizeof (struct pt_regs) / sizeof(elf_greg_t))];

typedef struct user_fp elf_fpregset_t;
# 83 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/elf.h"
extern char elf_platform[];

struct elf32_hdr;




extern int elf_check_arch(const struct elf32_hdr *);


extern int arm_elf_read_implies_exec(const struct elf32_hdr *, int);
# 111 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/elf.h"
extern void elf_set_personality(const struct elf32_hdr *);
# 8 "include/linux/elf.h" 2


struct file;
# 20 "include/linux/elf.h"
typedef __u32 Elf32_Addr;
typedef __u16 Elf32_Half;
typedef __u32 Elf32_Off;
typedef __s32 Elf32_Sword;
typedef __u32 Elf32_Word;


typedef __u64 Elf64_Addr;
typedef __u16 Elf64_Half;
typedef __s16 Elf64_SHalf;
typedef __u64 Elf64_Off;
typedef __s32 Elf64_Sword;
typedef __u32 Elf64_Word;
typedef __u64 Elf64_Xword;
typedef __s64 Elf64_Sxword;
# 127 "include/linux/elf.h"
typedef struct dynamic{
  Elf32_Sword d_tag;
  union{
    Elf32_Sword d_val;
    Elf32_Addr d_ptr;
  } d_un;
} Elf32_Dyn;

typedef struct {
  Elf64_Sxword d_tag;
  union {
    Elf64_Xword d_val;
    Elf64_Addr d_ptr;
  } d_un;
} Elf64_Dyn;
# 150 "include/linux/elf.h"
typedef struct elf32_rel {
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;

typedef struct elf64_rel {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;

typedef struct elf32_rela{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct elf64_rela {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;

typedef struct elf32_sym{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Half st_shndx;
} Elf32_Sym;

typedef struct elf64_sym {
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Half st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct elf32_hdr{
  unsigned char e_ident[16];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct elf64_hdr {
  unsigned char e_ident[16];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;







typedef struct elf32_phdr{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct elf64_phdr {
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
# 289 "include/linux/elf.h"
typedef struct {
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct elf64_shdr {
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
# 367 "include/linux/elf.h"
typedef struct elf32_note {
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;


typedef struct elf64_note {
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;




extern Elf32_Dyn _DYNAMIC [];
# 401 "include/linux/elf.h"
static inline __attribute__((always_inline)) int elf_coredump_extra_notes_size(void) { return 0; }
static inline __attribute__((always_inline)) int elf_coredump_extra_notes_write(struct file *file,
   loff_t *foffset) { return 0; }
# 15 "include/linux/module.h" 2


# 1 "include/linux/moduleparam.h" 1
# 32 "include/linux/moduleparam.h"
struct kernel_param;


typedef int (*param_set_fn)(const char *val, struct kernel_param *kp);

typedef int (*param_get_fn)(char *buffer, struct kernel_param *kp);

struct kernel_param {
 const char *name;
 unsigned int perm;
 param_set_fn set;
 param_get_fn get;
 union {
  void *arg;
  const struct kparam_string *str;
  const struct kparam_array *arr;
 };
};


struct kparam_string {
 unsigned int maxlen;
 char *string;
};


struct kparam_array
{
 unsigned int max;
 unsigned int *num;
 param_set_fn set;
 param_get_fn get;
 unsigned int elemsize;
 void *elem;
};
# 135 "include/linux/moduleparam.h"
extern int parse_args(const char *name,
        char *args,
        struct kernel_param *params,
        unsigned num,
        int (*unknown)(char *param, char *val));







extern int param_set_byte(const char *val, struct kernel_param *kp);
extern int param_get_byte(char *buffer, struct kernel_param *kp);


extern int param_set_short(const char *val, struct kernel_param *kp);
extern int param_get_short(char *buffer, struct kernel_param *kp);


extern int param_set_ushort(const char *val, struct kernel_param *kp);
extern int param_get_ushort(char *buffer, struct kernel_param *kp);


extern int param_set_int(const char *val, struct kernel_param *kp);
extern int param_get_int(char *buffer, struct kernel_param *kp);


extern int param_set_uint(const char *val, struct kernel_param *kp);
extern int param_get_uint(char *buffer, struct kernel_param *kp);


extern int param_set_long(const char *val, struct kernel_param *kp);
extern int param_get_long(char *buffer, struct kernel_param *kp);


extern int param_set_ulong(const char *val, struct kernel_param *kp);
extern int param_get_ulong(char *buffer, struct kernel_param *kp);


extern int param_set_charp(const char *val, struct kernel_param *kp);
extern int param_get_charp(char *buffer, struct kernel_param *kp);


extern int param_set_bool(const char *val, struct kernel_param *kp);
extern int param_get_bool(char *buffer, struct kernel_param *kp);


extern int param_set_invbool(const char *val, struct kernel_param *kp);
extern int param_get_invbool(char *buffer, struct kernel_param *kp);
# 199 "include/linux/moduleparam.h"
extern int param_array_set(const char *val, struct kernel_param *kp);
extern int param_array_get(char *buffer, struct kernel_param *kp);

extern int param_set_copystring(const char *val, struct kernel_param *kp);
extern int param_get_string(char *buffer, struct kernel_param *kp);



struct module;


extern int module_param_sysfs_setup(struct module *mod,
        struct kernel_param *kparam,
        unsigned int num_params);

extern void module_param_sysfs_remove(struct module *mod);
# 18 "include/linux/module.h" 2

# 1 "include/linux/marker.h" 1
# 18 "include/linux/marker.h"
# 1 "include/linux/ltt-channels.h" 1
# 10 "include/linux/ltt-channels.h"
# 1 "include/linux/limits.h" 1
# 11 "include/linux/ltt-channels.h" 2





struct ltt_trace_struct;
struct rchan_buf;

struct ltt_channel_struct {

 struct ltt_trace_struct *trace;
 void *buf;
 void *trans_channel_data;
 int overwrite:1;
 int active:1;
 unsigned int n_subbufs_order;
 unsigned long commit_count_mask;
# 39 "include/linux/ltt-channels.h"
 void (*buffer_begin) (struct rchan_buf *buf,
   u64 tsc, unsigned int subbuf_idx);




 void (*buffer_end) (struct rchan_buf *buf,
   u64 tsc, unsigned int offset, unsigned int subbuf_idx);
 struct kref kref;
 unsigned int subbuf_size;
 unsigned int subbuf_cnt;
 const char *channel_name;
} __attribute__((__aligned__((1 << 5))));

struct ltt_channel_setting {
 unsigned int subbuf_size;
 unsigned int subbuf_cnt;
 struct kref kref;
 struct list_head list;
 unsigned int index;
 u16 free_event_id;
 char name[4096];
};

int ltt_channels_register(const char *name);
int ltt_channels_unregister(const char *name);
int ltt_channels_set_default(const char *name,
        unsigned int subbuf_size,
        unsigned int subbuf_cnt);
const char *ltt_channels_get_name_from_index(unsigned int index);
int ltt_channels_get_index_from_name(const char *name);
struct ltt_channel_struct *ltt_channels_trace_alloc(unsigned int *nr_channels,
          int overwrite,
          int active);
void ltt_channels_trace_free(struct ltt_channel_struct *channels);
int _ltt_channels_get_event_id(const char *channel, const char *name);
int ltt_channels_get_event_id(const char *channel, const char *name);
# 19 "include/linux/marker.h" 2

struct module;
struct marker;
# 36 "include/linux/marker.h"
typedef void marker_probe_func(const struct marker *mdata,
  void *probe_private, void *call_private,
  const char *fmt, va_list *args);

struct marker_probe_closure {
 marker_probe_func *func;
 void *probe_private;
};

struct marker {
 const char *channel;
 const char *name;
 const char *format;


 __typeof__(char) state__imv;
 char ptype;

 u16 channel_id;
 u16 event_id;
 void (*call)(const struct marker *mdata, void *call_private, ...);
 struct marker_probe_closure single;
 struct marker_probe_closure *multi;
 const char *tp_name;
 void *tp_cb;
} __attribute__((aligned(8)));
# 126 "include/linux/marker.h"
extern void marker_update_probe_range(struct marker *begin,
 struct marker *end);
# 198 "include/linux/marker.h"
extern void lock_markers(void);
extern void unlock_markers(void);

extern void markers_compact_event_ids(void);


static inline __attribute__((always_inline)) void __attribute__((format(printf,1,2))) ___mark_check_format(const char *fmt, ...)
{
}







extern marker_probe_func __mark_empty_function;

extern void marker_probe_cb(const struct marker *mdata,
 void *call_private, ...);





extern int marker_probe_register(const char *channel, const char *name,
 const char *format, marker_probe_func *probe, void *probe_private);




extern int marker_probe_unregister(const char *channel, const char *name,
 marker_probe_func *probe, void *probe_private);



extern int marker_probe_unregister_private_data(marker_probe_func *probe,
 void *probe_private);

extern void *marker_get_private_data(const char *channel, const char *name,
 marker_probe_func *probe, int num);
# 249 "include/linux/marker.h"
struct marker_iter {
 struct module *module;
 struct marker *marker;
};

extern void marker_iter_start(struct marker_iter *iter);
extern void marker_iter_next(struct marker_iter *iter);
extern void marker_iter_stop(struct marker_iter *iter);
extern void marker_iter_reset(struct marker_iter *iter);
extern int marker_get_iter_range(struct marker **marker, struct marker *begin,
 struct marker *end);
extern int is_marker_enabled(const char *channel, const char *name);
# 20 "include/linux/module.h" 2

# 1 "include/linux/kmc/kmc.h" 1
# 17 "include/linux/kmc/kmc.h"
# 1 "include/linux/kmc/__brk_code.h" 1
# 18 "include/linux/kmc/kmc.h" 2
# 22 "include/linux/module.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/local.h" 1
# 1 "include/asm-generic/local.h" 1
# 21 "include/asm-generic/local.h"
typedef struct
{
 atomic_long_t a;
} local_t;
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/local.h" 2
# 23 "include/linux/module.h" 2

# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/module.h" 1







struct unwind_table;

struct mod_arch_specific
{

 Elf32_Shdr *unw_sec_init;
 Elf32_Shdr *unw_sec_devinit;
 Elf32_Shdr *unw_sec_core;
 Elf32_Shdr *sec_init_text;
 Elf32_Shdr *sec_devinit_text;
 Elf32_Shdr *sec_core_text;
 struct unwind_table *unwind_init;
 struct unwind_table *unwind_devinit;
 struct unwind_table *unwind_core;

};
# 25 "include/linux/module.h" 2
# 36 "include/linux/module.h"
struct kernel_symbol
{
 unsigned long value;
 const char *name;
};

struct modversion_info
{
 unsigned long crc;
 char name[(64 - sizeof(unsigned long))];
};

struct module;

struct module_attribute {
        struct attribute attr;
        ssize_t (*show)(struct module_attribute *, struct module *, char *);
        ssize_t (*store)(struct module_attribute *, struct module *,
    const char *, size_t count);
 void (*setup)(struct module *, const char *);
 int (*test)(struct module *);
 void (*free)(struct module *);
};

struct module_kobject
{
 struct kobject kobj;
 struct module *mod;
 struct kobject *drivers_dir;
 struct module_param_attrs *mp;
};


extern int init_module(void);
extern void cleanup_module(void);


struct exception_table_entry;

const struct exception_table_entry *
search_extable(const struct exception_table_entry *first,
        const struct exception_table_entry *last,
        unsigned long value);
void sort_extable(struct exception_table_entry *start,
    struct exception_table_entry *finish);
void sort_main_extable(void);
# 185 "include/linux/module.h"
const struct exception_table_entry *search_exception_tables(unsigned long add);

struct notifier_block;




void *__symbol_get(const char *symbol);
void *__symbol_get_gpl(const char *symbol);
# 242 "include/linux/module.h"
enum module_state
{
 MODULE_STATE_LIVE,
 MODULE_STATE_COMING,
 MODULE_STATE_GOING,
};

struct module
{
 enum module_state state;


 struct list_head list;


 char name[(64 - sizeof(unsigned long))];


 struct module_kobject mkobj;
 struct module_attribute *modinfo_attrs;
 const char *version;
 const char *srcversion;
 struct kobject *holders_dir;


 const struct kernel_symbol *syms;
 const unsigned long *crcs;
 unsigned int num_syms;


 unsigned int num_gpl_syms;
 const struct kernel_symbol *gpl_syms;
 const unsigned long *gpl_crcs;
# 289 "include/linux/module.h"
 const struct kernel_symbol *gpl_future_syms;
 const unsigned long *gpl_future_crcs;
 unsigned int num_gpl_future_syms;


 unsigned int num_exentries;
 struct exception_table_entry *extable;


 int (*init)(void);


 void *module_init;


 void *module_core;


 unsigned int init_size, core_size;


 unsigned int init_text_size, core_text_size;


 struct mod_arch_specific arch;

 unsigned int taints;
# 326 "include/linux/module.h"
 Elf32_Sym *symtab;
 unsigned int num_symtab;
 char *strtab;


 struct module_sect_attrs *sect_attrs;


 struct module_notes_attrs *notes_attrs;







 void *percpu;



 char *args;





 struct marker *markers;
 unsigned int num_markers;


 struct tracepoint *tracepoints;
 unsigned int num_tracepoints;



 const char **trace_bprintk_fmt_start;
 unsigned int num_trace_bprintk_fmt;




 struct list_head modules_which_use_me;


 struct task_struct *waiter;


 void (*exit)(void);




 local_t ref;


};







static inline __attribute__((always_inline)) int module_is_live(struct module *mod)
{
 return mod->state != MODULE_STATE_GOING;
}


struct module *module_text_address(unsigned long addr);
struct module *__module_text_address(unsigned long addr);
int is_module_address(unsigned long addr);

static inline __attribute__((always_inline)) int within_module_core(unsigned long addr, struct module *mod)
{
 return (unsigned long)mod->module_core <= addr &&
        addr < (unsigned long)mod->module_core + mod->core_size;
}

static inline __attribute__((always_inline)) int within_module_init(unsigned long addr, struct module *mod)
{
 return (unsigned long)mod->module_init <= addr &&
        addr < (unsigned long)mod->module_init + mod->init_size;
}



int module_get_kallsym(unsigned int symnum, unsigned long *value, char *type,
   char *name, char *module_name, int *exported);


unsigned long module_kallsyms_lookup_name(const char *name);

extern void __module_put_and_exit(struct module *mod, long code)
 __attribute__((noreturn));



unsigned int module_refcount(struct module *mod);
void __symbol_put(const char *symbol);

void symbol_put_addr(void *addr);

static inline __attribute__((always_inline)) local_t *__module_ref_addr(struct module *mod, int cpu)
{



 return &mod->ref;

}



static inline __attribute__((always_inline)) void __module_get(struct module *module)
{
 if (module) {
  atomic_long_inc(&(__module_ref_addr(module, ({ do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); 0; })))->a);
  do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0);
 }
}

static inline __attribute__((always_inline)) int try_module_get(struct module *module)
{
 int ret = 1;

 if (module) {
  unsigned int cpu = ({ do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); 0; });
  if (__builtin_expect(!!(module_is_live(module)), 1))
   atomic_long_inc(&(__module_ref_addr(module, cpu))->a);
  else
   ret = 0;
  do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0);
 }
 return ret;
}

extern void module_put(struct module *module);
# 491 "include/linux/module.h"
const char *module_address_lookup(unsigned long addr,
       unsigned long *symbolsize,
       unsigned long *offset,
       char **modname,
       char *namebuf);
int lookup_module_symbol_name(unsigned long addr, char *symname);
int lookup_module_symbol_attrs(unsigned long addr, unsigned long *size, unsigned long *offset, char *modname, char *name);


const struct exception_table_entry *search_module_extables(unsigned long addr);

int register_module_notifier(struct notifier_block * nb);
int unregister_module_notifier(struct notifier_block * nb);

extern void print_modules(void);
extern void list_modules(void *call_data);

extern void module_update_markers(void);
extern int module_get_iter_markers(struct marker_iter *iter);

extern void module_update_tracepoints(void);
extern int module_get_iter_tracepoints(struct tracepoint_iter *iter);
# 642 "include/linux/module.h"
static inline __attribute__((always_inline)) void _module_imv_update(void)
{
}

static inline __attribute__((always_inline)) void module_imv_update(void)
{
}


struct device_driver;

struct module;

extern struct kset *module_kset;
extern struct kobj_type module_ktype;
extern int module_sysfs_initialized;

int mod_sysfs_init(struct module *mod);
int mod_sysfs_setup(struct module *mod,
      struct kernel_param *kparam,
      unsigned int num_params);
int module_add_modinfo_attrs(struct module *mod);
void module_remove_modinfo_attrs(struct module *mod);
# 26 "include/linux/sysdev.h" 2
# 1 "include/linux/pm.h" 1
# 29 "include/linux/pm.h"
extern void (*pm_idle)(void);
extern void (*pm_power_off)(void);
extern void (*pm_power_off_prepare)(void);





struct device;

typedef struct pm_message {
 int event;
} pm_message_t;
# 170 "include/linux/pm.h"
struct dev_pm_ops {
 int (*prepare)(struct device *dev);
 void (*complete)(struct device *dev);
 int (*suspend)(struct device *dev);
 int (*resume)(struct device *dev);
 int (*freeze)(struct device *dev);
 int (*thaw)(struct device *dev);
 int (*poweroff)(struct device *dev);
 int (*restore)(struct device *dev);
 int (*suspend_noirq)(struct device *dev);
 int (*resume_noirq)(struct device *dev);
 int (*freeze_noirq)(struct device *dev);
 int (*thaw_noirq)(struct device *dev);
 int (*poweroff_noirq)(struct device *dev);
 int (*restore_noirq)(struct device *dev);
};
# 308 "include/linux/pm.h"
enum dpm_state {
 DPM_INVALID,
 DPM_ON,
 DPM_PREPARING,
 DPM_RESUMING,
 DPM_SUSPENDING,
 DPM_OFF,
 DPM_OFF_IRQ,
};

struct dev_pm_info {
 pm_message_t power_state;
 unsigned can_wakeup:1;
 unsigned should_wakeup:1;
 enum dpm_state status;



};
# 403 "include/linux/pm.h"
static inline __attribute__((always_inline)) int device_suspend(pm_message_t state)
{
 return 0;
}
# 416 "include/linux/pm.h"
extern unsigned int pm_flags;
# 27 "include/linux/sysdev.h" 2


struct sys_device;

struct sysdev_class {
 const char *name;
 struct list_head drivers;


 int (*shutdown)(struct sys_device *);
 int (*suspend)(struct sys_device *, pm_message_t state);
 int (*resume)(struct sys_device *);
 struct kset kset;
};

struct sysdev_class_attribute {
 struct attribute attr;
 ssize_t (*show)(struct sysdev_class *, char *);
 ssize_t (*store)(struct sysdev_class *, const char *, size_t);
};
# 60 "include/linux/sysdev.h"
extern int sysdev_class_register(struct sysdev_class *);
extern void sysdev_class_unregister(struct sysdev_class *);

extern int sysdev_class_create_file(struct sysdev_class *,
 struct sysdev_class_attribute *);
extern void sysdev_class_remove_file(struct sysdev_class *,
 struct sysdev_class_attribute *);




struct sysdev_driver {
 struct list_head entry;
 int (*add)(struct sys_device *);
 int (*remove)(struct sys_device *);
 int (*shutdown)(struct sys_device *);
 int (*suspend)(struct sys_device *, pm_message_t state);
 int (*resume)(struct sys_device *);
};


extern int sysdev_driver_register(struct sysdev_class *, struct sysdev_driver *);
extern void sysdev_driver_unregister(struct sysdev_class *, struct sysdev_driver *);







struct sys_device {
 u32 id;
 struct sysdev_class * cls;
 struct kobject kobj;
};

extern int sysdev_register(struct sys_device *);
extern void sysdev_unregister(struct sys_device *);


struct sysdev_attribute {
 struct attribute attr;
 ssize_t (*show)(struct sys_device *, struct sysdev_attribute *, char *);
 ssize_t (*store)(struct sys_device *, struct sysdev_attribute *,
    const char *, size_t);
};
# 119 "include/linux/sysdev.h"
extern int sysdev_create_file(struct sys_device *, struct sysdev_attribute *);
extern void sysdev_remove_file(struct sys_device *, struct sysdev_attribute *);

struct sysdev_ext_attribute {
 struct sysdev_attribute attr;
 void *var;
};
# 134 "include/linux/sysdev.h"
extern ssize_t sysdev_show_ulong(struct sys_device *, struct sysdev_attribute *,
    char *);
extern ssize_t sysdev_store_ulong(struct sys_device *,
   struct sysdev_attribute *, const char *, size_t);
extern ssize_t sysdev_show_int(struct sys_device *, struct sysdev_attribute *,
    char *);
extern ssize_t sysdev_store_int(struct sys_device *,
   struct sysdev_attribute *, const char *, size_t);
# 23 "include/linux/node.h" 2


struct node {
 struct sys_device sysdev;
};

struct memory_block;
extern struct node node_devices[];

extern int register_node(struct node *, int, struct node *);
extern void unregister_node(struct node *node);
# 43 "include/linux/node.h"
static inline __attribute__((always_inline)) int register_one_node(int nid)
{
 return 0;
}
static inline __attribute__((always_inline)) int unregister_one_node(int nid)
{
 return 0;
}
static inline __attribute__((always_inline)) int register_cpu_under_node(unsigned int cpu, unsigned int nid)
{
 return 0;
}
static inline __attribute__((always_inline)) int unregister_cpu_under_node(unsigned int cpu, unsigned int nid)
{
 return 0;
}
static inline __attribute__((always_inline)) int register_mem_sect_under_node(struct memory_block *mem_blk,
       int nid)
{
 return 0;
}
static inline __attribute__((always_inline)) int unregister_mem_sect_under_nodes(struct memory_block *mem_blk)
{
 return 0;
}
# 11 "include/linux/swap.h" 2




struct notifier_block;

struct bio;





static inline __attribute__((always_inline)) int current_is_kswapd(void)
{
 return (get_current())->flags & 0x00040000;
}
# 58 "include/linux/swap.h"
union swap_header {
 struct {
  char reserved[(1UL << 12) - 10];
  char magic[10];
 } magic;
 struct {
  char bootbits[1024];
  __u32 version;
  __u32 last_page;
  __u32 nr_badpages;
  unsigned char sws_uuid[16];
  unsigned char sws_volume[16];
  __u32 padding[117];
  __u32 badpages[1];
 } info;
};





typedef struct {
 unsigned long val;
} swp_entry_t;





struct reclaim_state {
 unsigned long reclaimed_slab;
};



struct address_space;
struct sysinfo;
struct writeback_control;
struct zone;
# 106 "include/linux/swap.h"
struct swap_extent {
 struct list_head list;
 unsigned long start_page;
 unsigned long nr_pages;
 sector_t start_block;
};
# 120 "include/linux/swap.h"
enum {
 SWP_USED = (1 << 0),
 SWP_WRITEOK = (1 << 1),
 SWP_DISCARDABLE = (1 << 2),
 SWP_DISCARDING = (1 << 3),
 SWP_SOLIDSTATE = (1 << 4),

 SWP_SCANNING = (1 << 8),
};
# 138 "include/linux/swap.h"
struct swap_info_struct {
 unsigned long flags;
 int prio;
 int next;
 struct file *swap_file;
 struct block_device *bdev;
 struct list_head extent_list;
 struct swap_extent *curr_swap_extent;
 unsigned short *swap_map;
 unsigned int lowest_bit;
 unsigned int highest_bit;
 unsigned int lowest_alloc;
 unsigned int highest_alloc;
 unsigned int cluster_next;
 unsigned int cluster_nr;
 unsigned int pages;
 unsigned int max;
 unsigned int inuse_pages;
 unsigned int old_block_size;
};

struct swap_list_t {
 int head;
 int next;
};





extern unsigned long totalram_pages;
extern unsigned long totalreserve_pages;
extern unsigned int nr_free_buffer_pages(void);
extern unsigned int nr_free_pagecache_pages(void);






extern void __lru_cache_add(struct page *, enum lru_list lru);
extern void lru_cache_add_lru(struct page *, enum lru_list lru);
extern void activate_page(struct page *);
extern void mark_page_accessed(struct page *);
extern void lru_add_drain(void);
extern int lru_add_drain_all(void);
extern void rotate_reclaimable_page(struct page *page);
extern void swap_setup(void);

extern void add_page_to_unevictable_list(struct page *page);





static inline __attribute__((always_inline)) void lru_cache_add_anon(struct page *page)
{
 __lru_cache_add(page, LRU_INACTIVE_ANON);
}

static inline __attribute__((always_inline)) void lru_cache_add_active_anon(struct page *page)
{
 __lru_cache_add(page, LRU_ACTIVE_ANON);
}

static inline __attribute__((always_inline)) void lru_cache_add_file(struct page *page)
{
 __lru_cache_add(page, LRU_INACTIVE_FILE);
}

static inline __attribute__((always_inline)) void lru_cache_add_active_file(struct page *page)
{
 __lru_cache_add(page, LRU_ACTIVE_FILE);
}


extern unsigned long try_to_free_pages(struct zonelist *zonelist, int order,
     gfp_t gfp_mask);
extern unsigned long try_to_free_mem_cgroup_pages(struct mem_cgroup *mem,
        gfp_t gfp_mask, bool noswap,
        unsigned int swappiness);
extern int __isolate_lru_page(struct page *page, int mode, int file);
extern unsigned long shrink_all_memory(unsigned long nr_pages);
extern int vm_swappiness;
extern int remove_mapping(struct address_space *mapping, struct page *page);
extern long vm_total_pages;
# 232 "include/linux/swap.h"
static inline __attribute__((always_inline)) int zone_reclaim(struct zone *z, gfp_t mask, unsigned int order)
{
 return 0;
}



extern int page_evictable(struct page *page, struct vm_area_struct *vma);
extern void scan_mapping_unevictable_pages(struct address_space *);

extern unsigned long scan_unevictable_pages;
extern int scan_unevictable_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int scan_unevictable_register_node(struct node *node);
extern void scan_unevictable_unregister_node(struct node *node);
# 266 "include/linux/swap.h"
extern int kswapd_run(int nid);



extern int shmem_unuse(swp_entry_t entry, struct page *page);


extern void swap_unplug_io_fn(struct backing_dev_info *, struct page *);



extern int swap_readpage(struct file *, struct page *);
extern int swap_writepage(struct page *page, struct writeback_control *wbc);
extern void end_swap_bio_read(struct bio *bio, int err);


extern struct address_space swapper_space;

extern void show_swap_cache_info(void);
extern int add_to_swap(struct page *);
extern int add_to_swap_cache(struct page *, swp_entry_t, gfp_t);
extern void __delete_from_swap_cache(struct page *);
extern void delete_from_swap_cache(struct page *);
extern void free_page_and_swap_cache(struct page *);
extern void free_pages_and_swap_cache(struct page **, int);
extern struct page *lookup_swap_cache(swp_entry_t);
extern struct page *read_swap_cache_async(swp_entry_t, gfp_t,
   struct vm_area_struct *vma, unsigned long addr);
extern struct page *swapin_readahead(swp_entry_t, gfp_t,
   struct vm_area_struct *vma, unsigned long addr);


extern long nr_swap_pages;
extern long total_swap_pages;
extern void si_swapinfo(struct sysinfo *);
extern swp_entry_t get_swap_page(void);
extern swp_entry_t get_swap_page_of_type(int);
extern int swap_duplicate(swp_entry_t);
extern int valid_swaphandles(swp_entry_t, unsigned long *);
extern void swap_free(swp_entry_t);
extern int free_swap_and_cache(swp_entry_t);
extern int swap_type_of(dev_t, sector_t, struct block_device **);
extern unsigned int count_swap_pages(int, int);
extern sector_t map_swap_page(struct swap_info_struct *, unsigned long);
extern sector_t swapdev_block(int, unsigned long);
extern struct swap_info_struct *get_swap_info_struct(unsigned);
extern int reuse_swap_page(struct page *);
extern int try_to_free_swap(struct page *);
struct backing_dev_info;


extern struct mm_struct * swap_token_mm;
extern void grab_swap_token(void);
extern void __put_swap_token(struct mm_struct *);

static inline __attribute__((always_inline)) int has_swap_token(struct mm_struct *mm)
{
 return (mm == swap_token_mm);
}

static inline __attribute__((always_inline)) void put_swap_token(struct mm_struct *mm)
{
 if (has_swap_token(mm))
  __put_swap_token(mm);
}

static inline __attribute__((always_inline)) void disable_swap_token(void)
{
 put_swap_token(swap_token_mm);
}




static inline __attribute__((always_inline)) void
mem_cgroup_uncharge_swapcache(struct page *page, swp_entry_t ent)
{
}




static inline __attribute__((always_inline)) void mem_cgroup_uncharge_swap(swp_entry_t ent)
{
}


extern void ltt_dump_swap_files(void *call_data);
# 20 "mm/page_alloc.c" 2
# 1 "include/linux/interrupt.h" 1
# 10 "include/linux/interrupt.h"
# 1 "include/linux/irqreturn.h" 1
# 9 "include/linux/irqreturn.h"
enum irqreturn {
 IRQ_NONE,
 IRQ_HANDLED,
};

typedef enum irqreturn irqreturn_t;
# 11 "include/linux/interrupt.h" 2
# 1 "include/linux/irqnr.h" 1
# 26 "include/linux/irqnr.h"
extern int nr_irqs;
extern struct irq_desc *irq_to_desc(unsigned int irq);
# 12 "include/linux/interrupt.h" 2
# 1 "include/linux/hardirq.h" 1




# 1 "include/linux/smp_lock.h" 1
# 9 "include/linux/smp_lock.h"
extern int __attribute__((section(".spinlock.text"))) __reacquire_kernel_lock(void);
extern void __attribute__((section(".spinlock.text"))) __release_kernel_lock(void);
# 20 "include/linux/smp_lock.h"
static inline __attribute__((always_inline)) int reacquire_kernel_lock(struct task_struct *task)
{
 if (__builtin_expect(!!(task->lock_depth >= 0), 0))
  return __reacquire_kernel_lock();
 return 0;
}

extern void __attribute__((section(".spinlock.text"))) lock_kernel(void) ;
extern void __attribute__((section(".spinlock.text"))) unlock_kernel(void) ;







static inline __attribute__((always_inline)) void cycle_kernel_lock(void)
{
 lock_kernel();
 unlock_kernel();
}
# 6 "include/linux/hardirq.h" 2

# 1 "include/linux/ftrace_irq.h" 1
# 9 "include/linux/ftrace_irq.h"
static inline __attribute__((always_inline)) void ftrace_nmi_enter(void) { }
static inline __attribute__((always_inline)) void ftrace_nmi_exit(void) { }
# 8 "include/linux/hardirq.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/hardirq.h" 1





# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/irq.h" 1



# 1 "arch/arm/plat-mxc/include/mach/irqs.h" 1
# 48 "arch/arm/plat-mxc/include/mach/irqs.h"
extern void imx_irq_set_priority(unsigned char irq, unsigned char prio);




extern int mxc_set_irq_fiq(unsigned int irq, unsigned int type);
# 5 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/irq.h" 2
# 19 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/irq.h"
struct irqaction;
extern void migrate_irqs(void);

extern void asm_do_IRQ(unsigned int, struct pt_regs *);
void init_IRQ(void);
# 7 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/hardirq.h" 2

typedef struct {
 unsigned int __softirq_pending;
 unsigned int local_timer_irqs;
} __attribute__((__aligned__((1 << 5)))) irq_cpustat_t;

# 1 "include/linux/irq_cpustat.h" 1
# 20 "include/linux/irq_cpustat.h"
extern irq_cpustat_t irq_stat[];
# 14 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/hardirq.h" 2
# 9 "include/linux/hardirq.h" 2
# 108 "include/linux/hardirq.h"
struct task_struct;


static inline __attribute__((always_inline)) void account_system_vtime(struct task_struct *tsk)
{
}
# 144 "include/linux/hardirq.h"
extern void irq_enter(void);
# 159 "include/linux/hardirq.h"
extern void irq_exit(void);
# 13 "include/linux/interrupt.h" 2
# 64 "include/linux/interrupt.h"
typedef irqreturn_t (*irq_handler_t)(int, void *);
# 77 "include/linux/interrupt.h"
struct irqaction {
 irq_handler_t handler;
 unsigned long flags;
 cpumask_t mask;
 const char *name;
 void *dev_id;
 struct irqaction *next;
 int irq;
 struct proc_dir_entry *dir, *threaded;
};

extern irqreturn_t no_action(int cpl, void *dev_id);

extern int __attribute__((warn_unused_result))
request_irq(unsigned int irq, irq_handler_t handler, unsigned long flags,
     const char *name, void *dev);

extern void free_irq(unsigned int, void *);

struct device;

extern int __attribute__((warn_unused_result))
devm_request_irq(struct device *dev, unsigned int irq, irq_handler_t handler,
   unsigned long irqflags, const char *devname, void *dev_id);

extern void devm_free_irq(struct device *dev, unsigned int irq, void *dev_id);
# 122 "include/linux/interrupt.h"
extern void disable_irq_nosync(unsigned int irq);
extern void disable_irq(unsigned int irq);
extern void enable_irq(unsigned int irq);
# 136 "include/linux/interrupt.h"
static inline __attribute__((always_inline)) int irq_set_affinity(unsigned int irq, const struct cpumask *m)
{
 return -22;
}

static inline __attribute__((always_inline)) int irq_can_set_affinity(unsigned int irq)
{
 return 0;
}

static inline __attribute__((always_inline)) int irq_select_affinity(unsigned int irq) { return 0; }
# 162 "include/linux/interrupt.h"
static inline __attribute__((always_inline)) void disable_irq_nosync_lockdep(unsigned int irq)
{
 disable_irq_nosync(irq);



}

static inline __attribute__((always_inline)) void disable_irq_nosync_lockdep_irqsave(unsigned int irq, unsigned long *flags)
{
 disable_irq_nosync(irq);



}

static inline __attribute__((always_inline)) void disable_irq_lockdep(unsigned int irq)
{
 disable_irq(irq);



}

static inline __attribute__((always_inline)) void enable_irq_lockdep(unsigned int irq)
{



 enable_irq(irq);
}

static inline __attribute__((always_inline)) void enable_irq_lockdep_irqrestore(unsigned int irq, unsigned long *flags)
{



 enable_irq(irq);
}


extern int set_irq_wake(unsigned int irq, unsigned int on);

static inline __attribute__((always_inline)) int enable_irq_wake(unsigned int irq)
{
 return set_irq_wake(irq, 1);
}

static inline __attribute__((always_inline)) int disable_irq_wake(unsigned int irq)
{
 return set_irq_wake(irq, 0);
}
# 264 "include/linux/interrupt.h"
enum
{
 HI_SOFTIRQ=0,
 TIMER_SOFTIRQ,
 NET_TX_SOFTIRQ,
 NET_RX_SOFTIRQ,
 BLOCK_SOFTIRQ,
 TASKLET_SOFTIRQ,
 SCHED_SOFTIRQ,
 HRTIMER_SOFTIRQ,
 RCU_SOFTIRQ,

 MAX_SOFTIRQ,

 NR_SOFTIRQS
};




extern char *softirq_to_name[NR_SOFTIRQS];





struct softirq_action
{
 void (*action)(struct softirq_action *);
};
# 303 "include/linux/interrupt.h"
 void do_softirq(void);
 void __do_softirq(void);
extern void open_softirq(int nr, void (*action)(struct softirq_action *));
extern void softirq_init(void);
extern void raise_softirq_irqoff(unsigned int nr);
extern void raise_softirq(unsigned int nr);
extern void wakeup_irqd(void);
# 318 "include/linux/interrupt.h"
extern __typeof__(struct list_head [NR_SOFTIRQS]) per_cpu__softirq_work_list;

extern void wait_for_softirq(int softirq);







extern void send_remote_softirq(struct call_single_data *cp, int cpu, int softirq);




extern void __send_remote_softirq(struct call_single_data *cp, int cpu,
      int this_cpu, int softirq);
# 357 "include/linux/interrupt.h"
struct tasklet_struct
{
 struct tasklet_struct *next;
 unsigned long state;
 atomic_t count;
 void (*func)(unsigned long);
 unsigned long data;
};
# 373 "include/linux/interrupt.h"
enum
{
 TASKLET_STATE_SCHED,
 TASKLET_STATE_RUN,
 TASKLET_STATE_PENDING
};






static inline __attribute__((always_inline)) int tasklet_trylock(struct tasklet_struct *t)
{
 return !(__builtin_constant_p(TASKLET_STATE_RUN) ? ____atomic_test_and_set_bit(TASKLET_STATE_RUN, &(t)->state) : _test_and_set_bit_le(TASKLET_STATE_RUN,&(t)->state));
}

static inline __attribute__((always_inline)) int tasklet_tryunlock(struct tasklet_struct *t)
{
 return ((__typeof__(*((&t->state))))__cmpxchg_local_generic(((&t->state)), (unsigned long)(((1 << TASKLET_STATE_RUN))), (unsigned long)((0)), sizeof(*((&t->state))))) == (1 << TASKLET_STATE_RUN);
}

static inline __attribute__((always_inline)) void tasklet_unlock(struct tasklet_struct *t)
{
 do { if (0) __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 5" : : "r" (0) : "memory"); else __asm__ __volatile__("": : :"memory"); } while (0);
 (__builtin_constant_p(TASKLET_STATE_RUN) ? ____atomic_clear_bit(TASKLET_STATE_RUN, &(t)->state) : _clear_bit_le(TASKLET_STATE_RUN,&(t)->state));
}

extern void tasklet_unlock_wait(struct tasklet_struct *t);
# 410 "include/linux/interrupt.h"
extern void __tasklet_schedule(struct tasklet_struct *t);

static inline __attribute__((always_inline)) void tasklet_schedule(struct tasklet_struct *t)
{
 if (!(__builtin_constant_p(TASKLET_STATE_SCHED) ? ____atomic_test_and_set_bit(TASKLET_STATE_SCHED, &t->state) : _test_and_set_bit_le(TASKLET_STATE_SCHED,&t->state)))
  __tasklet_schedule(t);
}

extern void __tasklet_hi_schedule(struct tasklet_struct *t);

static inline __attribute__((always_inline)) void tasklet_hi_schedule(struct tasklet_struct *t)
{
 if (!(__builtin_constant_p(TASKLET_STATE_SCHED) ? ____atomic_test_and_set_bit(TASKLET_STATE_SCHED, &t->state) : _test_and_set_bit_le(TASKLET_STATE_SCHED,&t->state)))
  __tasklet_hi_schedule(t);
}

extern void __tasklet_hi_schedule_first(struct tasklet_struct *t);







static inline __attribute__((always_inline)) void tasklet_hi_schedule_first(struct tasklet_struct *t)
{
 if (!(__builtin_constant_p(TASKLET_STATE_SCHED) ? ____atomic_test_and_set_bit(TASKLET_STATE_SCHED, &t->state) : _test_and_set_bit_le(TASKLET_STATE_SCHED,&t->state)))
  __tasklet_hi_schedule_first(t);
}


static inline __attribute__((always_inline)) void tasklet_disable_nosync(struct tasklet_struct *t)
{
 (void) atomic_add_return(1, &t->count);
 __asm__ __volatile__("": : :"memory");
}

static inline __attribute__((always_inline)) void tasklet_disable(struct tasklet_struct *t)
{
 tasklet_disable_nosync(t);
 tasklet_unlock_wait(t);
 __asm__ __volatile__("": : :"memory");
}

extern void tasklet_enable(struct tasklet_struct *t);
extern void tasklet_hi_enable(struct tasklet_struct *t);

extern void tasklet_kill(struct tasklet_struct *t);
extern void tasklet_kill_immediate(struct tasklet_struct *t, unsigned int cpu);
extern void tasklet_init(struct tasklet_struct *t,
    void (*func)(unsigned long), unsigned long data);
void takeover_tasklets(unsigned int cpu);
# 505 "include/linux/interrupt.h"
extern unsigned long probe_irq_on(void);
extern int probe_irq_off(unsigned long);
extern unsigned int probe_irq_mask(unsigned long);




extern void init_irq_proc(void);
# 522 "include/linux/interrupt.h"
static inline __attribute__((always_inline)) void debug_poll_all_shared_irqs(void) { }


int show_interrupts(struct seq_file *p, void *v);

struct irq_desc;

extern int early_irq_init(void);
extern int arch_probe_nr_irqs(void);
extern int arch_early_irq_init(void);
extern int arch_init_chip_data(struct irq_desc *desc, int cpu);
# 21 "mm/page_alloc.c" 2
# 1 "include/linux/pagemap.h" 1







# 1 "include/linux/fs.h" 1
# 35 "include/linux/fs.h"
struct files_stat_struct {
 int nr_files;
 int nr_free_files;
 int max_files;
};

struct inodes_stat_t {
 int nr_inodes;
 int nr_unused;
 int dummy[5];
};
# 297 "include/linux/fs.h"
# 1 "include/linux/kdev_t.h" 1
# 21 "include/linux/kdev_t.h"
static inline __attribute__((always_inline)) int old_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < 256 && ((unsigned int) ((dev) & ((1U << 20) - 1))) < 256;
}

static inline __attribute__((always_inline)) u16 old_encode_dev(dev_t dev)
{
 return (((unsigned int) ((dev) >> 20)) << 8) | ((unsigned int) ((dev) & ((1U << 20) - 1)));
}

static inline __attribute__((always_inline)) dev_t old_decode_dev(u16 val)
{
 return ((((val >> 8) & 255) << 20) | (val & 255));
}

static inline __attribute__((always_inline)) int new_valid_dev(dev_t dev)
{
 return 1;
}

static inline __attribute__((always_inline)) u32 new_encode_dev(dev_t dev)
{
 unsigned major = ((unsigned int) ((dev) >> 20));
 unsigned minor = ((unsigned int) ((dev) & ((1U << 20) - 1)));
 return (minor & 0xff) | (major << 8) | ((minor & ~0xff) << 12);
}

static inline __attribute__((always_inline)) dev_t new_decode_dev(u32 dev)
{
 unsigned major = (dev & 0xfff00) >> 8;
 unsigned minor = (dev & 0xff) | ((dev >> 12) & 0xfff00);
 return (((major) << 20) | (minor));
}

static inline __attribute__((always_inline)) int huge_valid_dev(dev_t dev)
{
 return 1;
}

static inline __attribute__((always_inline)) u64 huge_encode_dev(dev_t dev)
{
 return new_encode_dev(dev);
}

static inline __attribute__((always_inline)) dev_t huge_decode_dev(u64 dev)
{
 return new_decode_dev(dev);
}

static inline __attribute__((always_inline)) int sysv_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < (1<<14) && ((unsigned int) ((dev) & ((1U << 20) - 1))) < (1<<18);
}

static inline __attribute__((always_inline)) u32 sysv_encode_dev(dev_t dev)
{
 return ((unsigned int) ((dev) & ((1U << 20) - 1))) | (((unsigned int) ((dev) >> 20)) << 18);
}

static inline __attribute__((always_inline)) unsigned sysv_major(u32 dev)
{
 return (dev >> 18) & 0x3fff;
}

static inline __attribute__((always_inline)) unsigned sysv_minor(u32 dev)
{
 return dev & 0x3ffff;
}
# 298 "include/linux/fs.h" 2
# 1 "include/linux/dcache.h" 1
# 11 "include/linux/dcache.h"
struct nameidata;
struct path;
struct vfsmount;
# 33 "include/linux/dcache.h"
struct qstr {
 unsigned int hash;
 unsigned int len;
 const unsigned char *name;
};

struct dentry_stat_t {
 int nr_dentry;
 int nr_unused;
 int age_limit;
 int want_pages;
 int dummy[2];
};
extern struct dentry_stat_t dentry_stat;






static inline __attribute__((always_inline)) unsigned long
partial_name_hash(unsigned long c, unsigned long prevhash)
{
 return (prevhash + (c << 4) + (c >> 4)) * 11;
}





static inline __attribute__((always_inline)) unsigned long end_name_hash(unsigned long hash)
{
 return (unsigned int) hash;
}


static inline __attribute__((always_inline)) unsigned int
full_name_hash(const unsigned char *name, unsigned int len)
{
 unsigned long hash = 0;
 while (len--)
  hash = partial_name_hash(*name++, hash);
 return end_name_hash(hash);
}
# 89 "include/linux/dcache.h"
struct dentry {
 atomic_t d_count;
 unsigned int d_flags;
 spinlock_t d_lock;
 int d_mounted;
 struct inode *d_inode;





 struct hlist_node d_hash;
 struct dentry *d_parent;
 struct qstr d_name;

 struct list_head d_lru;



 union {
  struct list_head d_child;
   struct rcu_head d_rcu;
 } d_u;
 struct list_head d_subdirs;
 struct list_head d_alias;
 unsigned long d_time;
 struct dentry_operations *d_op;
 struct super_block *d_sb;
 void *d_fsdata;

 unsigned char d_iname[40];
};







enum dentry_d_lock_class
{
 DENTRY_D_LOCK_NORMAL,
 DENTRY_D_LOCK_NESTED
};

struct dentry_operations {
 int (*d_revalidate)(struct dentry *, struct nameidata *);
 int (*d_hash) (struct dentry *, struct qstr *);
 int (*d_compare) (struct dentry *, struct qstr *, struct qstr *);
 int (*d_delete)(struct dentry *);
 void (*d_release)(struct dentry *);
 void (*d_iput)(struct dentry *, struct inode *);
 char *(*d_dname)(struct dentry *, char *, int);
};
# 187 "include/linux/dcache.h"
extern spinlock_t dcache_lock;
extern seqlock_t rename_lock;
# 206 "include/linux/dcache.h"
static inline __attribute__((always_inline)) void __d_drop(struct dentry *dentry)
{
 if (!(dentry->d_flags & 0x0010)) {
  dentry->d_flags |= 0x0010;
  hlist_del_rcu(&dentry->d_hash);
 }
}

static inline __attribute__((always_inline)) void d_drop(struct dentry *dentry)
{
 do { if (__builtin_types_compatible_p(typeof((&dcache_lock)), raw_spinlock_t *)) do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&dcache_lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&dcache_lock)), spinlock_t *)) rt_spin_lock((spinlock_t *)(&dcache_lock)); else __bad_func_type(); } while (0);
 do { if (__builtin_types_compatible_p(typeof((&dentry->d_lock)), raw_spinlock_t *)) do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&dentry->d_lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&dentry->d_lock)), spinlock_t *)) rt_spin_lock((spinlock_t *)(&dentry->d_lock)); else __bad_func_type(); } while (0);
  __d_drop(dentry);
 do { if (__builtin_types_compatible_p(typeof((&dentry->d_lock)), raw_spinlock_t *)) do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&dentry->d_lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&dentry->d_lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&dentry->d_lock)); else __bad_func_type(); } while (0);
 do { if (__builtin_types_compatible_p(typeof((&dcache_lock)), raw_spinlock_t *)) do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&dcache_lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&dcache_lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&dcache_lock)); else __bad_func_type(); } while (0);
}

static inline __attribute__((always_inline)) int dname_external(struct dentry *dentry)
{
 return dentry->d_name.name != dentry->d_iname;
}




extern void d_instantiate(struct dentry *, struct inode *);
extern struct dentry * d_instantiate_unique(struct dentry *, struct inode *);
extern struct dentry * d_materialise_unique(struct dentry *, struct inode *);
extern void d_delete(struct dentry *);


extern struct dentry * d_alloc(struct dentry *, const struct qstr *);
extern struct dentry * d_splice_alias(struct inode *, struct dentry *);
extern struct dentry * d_add_ci(struct dentry *, struct inode *, struct qstr *);
extern struct dentry * d_obtain_alias(struct inode *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern void shrink_dcache_for_umount(struct super_block *);
extern int d_invalidate(struct dentry *);


extern struct dentry * d_alloc_root(struct inode *);


extern void d_genocide(struct dentry *);

extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);


extern int have_submounts(struct dentry *);




extern void d_rehash(struct dentry *);
# 272 "include/linux/dcache.h"
static inline __attribute__((always_inline)) void d_add(struct dentry *entry, struct inode *inode)
{
 d_instantiate(entry, inode);
 d_rehash(entry);
}
# 286 "include/linux/dcache.h"
static inline __attribute__((always_inline)) struct dentry *d_add_unique(struct dentry *entry, struct inode *inode)
{
 struct dentry *res;

 res = d_instantiate_unique(entry, inode);
 d_rehash(res != ((void *)0) ? res : entry);
 return res;
}


extern void d_move(struct dentry *, struct dentry *);
extern struct dentry *d_ancestor(struct dentry *, struct dentry *);


extern struct dentry * d_lookup(struct dentry *, struct qstr *);
extern struct dentry * __d_lookup(struct dentry *, struct qstr *);
extern struct dentry * d_hash_and_lookup(struct dentry *, struct qstr *);


extern int d_validate(struct dentry *, struct dentry *);




extern char *dynamic_dname(struct dentry *, char *, int, const char *, ...);

extern char *__d_path(const struct path *path, struct path *root, char *, int);
extern char *d_path(const struct path *, char *, int);
extern char *dentry_path(struct dentry *, char *, int);
# 331 "include/linux/dcache.h"
static inline __attribute__((always_inline)) struct dentry *dget(struct dentry *dentry)
{
 if (dentry) {
  do { if (__builtin_expect(!!(!((&dentry->d_count)->counter)), 0)) __bug("include/linux/dcache.h", 334); } while(0);
  (void) atomic_add_return(1, &dentry->d_count);
 }
 return dentry;
}

extern struct dentry * dget_locked(struct dentry *);
# 349 "include/linux/dcache.h"
static inline __attribute__((always_inline)) int d_unhashed(struct dentry *dentry)
{
 return (dentry->d_flags & 0x0010);
}

static inline __attribute__((always_inline)) struct dentry *dget_parent(struct dentry *dentry)
{
 struct dentry *ret;

 do { if (__builtin_types_compatible_p(typeof((&dentry->d_lock)), raw_spinlock_t *)) do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&dentry->d_lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&dentry->d_lock)), spinlock_t *)) rt_spin_lock((spinlock_t *)(&dentry->d_lock)); else __bad_func_type(); } while (0);
 ret = dget(dentry->d_parent);
 do { if (__builtin_types_compatible_p(typeof((&dentry->d_lock)), raw_spinlock_t *)) do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&dentry->d_lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&dentry->d_lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&dentry->d_lock)); else __bad_func_type(); } while (0);
 return ret;
}

extern void dput(struct dentry *);

static inline __attribute__((always_inline)) int d_mountpoint(struct dentry *dentry)
{
 return dentry->d_mounted;
}

extern struct vfsmount *lookup_mnt(struct vfsmount *, struct dentry *);
extern struct dentry *lookup_create(struct nameidata *nd, int is_dir);

extern int sysctl_vfs_cache_pressure;
# 299 "include/linux/fs.h" 2





# 1 "include/linux/radix-tree.h" 1
# 41 "include/linux/radix-tree.h"
static inline __attribute__((always_inline)) void *radix_tree_ptr_to_indirect(void *ptr)
{
 return (void *)((unsigned long)ptr | 1);
}

static inline __attribute__((always_inline)) void *radix_tree_indirect_to_ptr(void *ptr)
{
 return (void *)((unsigned long)ptr & ~1);
}

static inline __attribute__((always_inline)) int radix_tree_is_indirect_ptr(void *ptr)
{
 return (int)((unsigned long)ptr & 1);
}






struct radix_tree_root {
 unsigned int height;
 gfp_t gfp_mask;
 struct radix_tree_node *rnode;
};
# 137 "include/linux/radix-tree.h"
static inline __attribute__((always_inline)) void *radix_tree_deref_slot(void **pslot)
{
 void *ret = ({ typeof(*pslot) _________p1 = (*(volatile typeof(*pslot) *)&(*pslot)); do { } while(0); (_________p1); });
 if (__builtin_expect(!!(radix_tree_is_indirect_ptr(ret)), 0))
  ret = ((void *)-1UL);
 return ret;
}
# 152 "include/linux/radix-tree.h"
static inline __attribute__((always_inline)) void radix_tree_replace_slot(void **pslot, void *item)
{
 do { if (__builtin_expect(!!(radix_tree_is_indirect_ptr(item)), 0)) __bug("include/linux/radix-tree.h", 154); } while(0);
 ({ if (!__builtin_constant_p(item) || ((item) != ((void *)0))) __asm__ __volatile__("": : :"memory"); (*pslot) = (item); });
}

int radix_tree_insert(struct radix_tree_root *, unsigned long, void *);
void *radix_tree_lookup(struct radix_tree_root *, unsigned long);
void **radix_tree_lookup_slot(struct radix_tree_root *, unsigned long);
void *radix_tree_delete(struct radix_tree_root *, unsigned long);
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
   unsigned long first_index, unsigned int max_items);
unsigned int
radix_tree_gang_lookup_slot(struct radix_tree_root *root, void ***results,
   unsigned long first_index, unsigned int max_items);
unsigned long radix_tree_next_hole(struct radix_tree_root *root,
    unsigned long index, unsigned long max_scan);




static inline __attribute__((always_inline)) int radix_tree_preload(gfp_t gfp_mask)
{
 return 0;
}




void radix_tree_init(void);
void *radix_tree_tag_set(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
void *radix_tree_tag_clear(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
int radix_tree_tag_get(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
unsigned int
radix_tree_gang_lookup_tag(struct radix_tree_root *root, void **results,
  unsigned long first_index, unsigned int max_items,
  unsigned int tag);
unsigned int
radix_tree_gang_lookup_tag_slot(struct radix_tree_root *root, void ***results,
  unsigned long first_index, unsigned int max_items,
  unsigned int tag);
int radix_tree_tagged(struct radix_tree_root *root, unsigned int tag);

static inline __attribute__((always_inline)) void radix_tree_preload_end(void)
{



}
# 305 "include/linux/fs.h" 2





# 1 "include/linux/semaphore.h" 1
# 20 "include/linux/semaphore.h"
struct compat_semaphore {
 spinlock_t lock;
 unsigned int count;
 struct list_head wait_list;
};
# 37 "include/linux/semaphore.h"
static inline __attribute__((always_inline)) void compat_sema_init(struct compat_semaphore *sem, int val)
{
 static struct lock_class_key __key;
 *sem = (struct compat_semaphore) { .lock = (spinlock_t) { .lock = { .wait_lock = { .raw_lock = { }, } }, }, .count = val, .wait_list = { &((*sem).wait_list), &((*sem).wait_list) }, };

 do { if (__builtin_types_compatible_p(typeof((&sem->lock)), raw_spinlock_t *)) do { *((raw_spinlock_t *)(&sem->lock)) = (raw_spinlock_t) { .raw_lock = { }, }; } while (0); else if (__builtin_types_compatible_p(typeof((&sem->lock)), spinlock_t *)) do { static struct lock_class_key __key; __rt_spin_lock_init((spinlock_t *)(&sem->lock), "&sem->lock", &__key); } while (0); else __bad_func_type(); } while (0);
 do { (void)("semaphore->lock"); (void)(&__key); } while (0);
}




extern void compat_down(struct compat_semaphore *sem);
extern int __attribute__((warn_unused_result)) compat_down_interruptible(struct compat_semaphore *sem);
extern int __attribute__((warn_unused_result)) compat_down_killable(struct compat_semaphore *sem);
extern int __attribute__((warn_unused_result)) compat_down_trylock(struct compat_semaphore *sem);
extern int __attribute__((warn_unused_result)) compat_down_timeout(struct compat_semaphore *sem, long jiffies);
extern void compat_up(struct compat_semaphore *sem);
# 311 "include/linux/fs.h" 2
# 1 "include/linux/fiemap.h" 1
# 14 "include/linux/fiemap.h"
struct fiemap_extent {
 __u64 fe_logical;

 __u64 fe_physical;

 __u64 fe_length;
 __u64 fe_reserved64[2];
 __u32 fe_flags;
 __u32 fe_reserved[3];
};

struct fiemap {
 __u64 fm_start;

 __u64 fm_length;

 __u32 fm_flags;
 __u32 fm_mapped_extents;
 __u32 fm_extent_count;
 __u32 fm_reserved;
 struct fiemap_extent fm_extents[0];
};
# 312 "include/linux/fs.h" 2




struct export_operations;
struct hd_geometry;
struct iovec;
struct nameidata;
struct kiocb;
struct pipe_inode_info;
struct poll_table_struct;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;
struct cred;

extern void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) inode_init(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) inode_init_early(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) files_init(unsigned long);

extern struct files_stat_struct files_stat;
extern int get_max_files(void);
extern int sysctl_nr_open;
extern struct inodes_stat_t inodes_stat;
extern int leases_enable, lease_break_time;

extern int dir_notify_enable;


struct buffer_head;
typedef int (get_block_t)(struct inode *inode, sector_t iblock,
   struct buffer_head *bh_result, int create);
typedef void (dio_iodone_t)(struct kiocb *iocb, loff_t offset,
   ssize_t bytes, void *private);
# 378 "include/linux/fs.h"
struct iattr {
 unsigned int ia_valid;
 umode_t ia_mode;
 uid_t ia_uid;
 gid_t ia_gid;
 loff_t ia_size;
 struct timespec ia_atime;
 struct timespec ia_mtime;
 struct timespec ia_ctime;






 struct file *ia_file;
};




# 1 "include/linux/quota.h" 1
# 86 "include/linux/quota.h"
enum {
 QIF_BLIMITS_B = 0,
 QIF_SPACE_B,
 QIF_ILIMITS_B,
 QIF_INODES_B,
 QIF_BTIME_B,
 QIF_ITIME_B,
};
# 106 "include/linux/quota.h"
struct if_dqblk {
 __u64 dqb_bhardlimit;
 __u64 dqb_bsoftlimit;
 __u64 dqb_curspace;
 __u64 dqb_ihardlimit;
 __u64 dqb_isoftlimit;
 __u64 dqb_curinodes;
 __u64 dqb_btime;
 __u64 dqb_itime;
 __u32 dqb_valid;
};
# 127 "include/linux/quota.h"
struct if_dqinfo {
 __u64 dqi_bgrace;
 __u64 dqi_igrace;
 __u32 dqi_flags;
 __u32 dqi_valid;
};
# 149 "include/linux/quota.h"
enum {
 QUOTA_NL_C_UNSPEC,
 QUOTA_NL_C_WARNING,
 __QUOTA_NL_C_MAX,
};


enum {
 QUOTA_NL_A_UNSPEC,
 QUOTA_NL_A_QTYPE,
 QUOTA_NL_A_EXCESS_ID,
 QUOTA_NL_A_WARNING,
 QUOTA_NL_A_DEV_MAJOR,
 QUOTA_NL_A_DEV_MINOR,
 QUOTA_NL_A_CAUSED_ID,
 __QUOTA_NL_A_MAX,
};
# 176 "include/linux/quota.h"
# 1 "include/linux/dqblk_xfs.h" 1
# 50 "include/linux/dqblk_xfs.h"
typedef struct fs_disk_quota {
 __s8 d_version;
 __s8 d_flags;
 __u16 d_fieldmask;
 __u32 d_id;
 __u64 d_blk_hardlimit;
 __u64 d_blk_softlimit;
 __u64 d_ino_hardlimit;
 __u64 d_ino_softlimit;
 __u64 d_bcount;
 __u64 d_icount;
 __s32 d_itimer;

 __s32 d_btimer;
 __u16 d_iwarns;
 __u16 d_bwarns;
 __s32 d_padding2;
 __u64 d_rtb_hardlimit;
 __u64 d_rtb_softlimit;
 __u64 d_rtbcount;
 __s32 d_rtbtimer;
 __u16 d_rtbwarns;
 __s16 d_padding3;
 char d_padding4[8];
} fs_disk_quota_t;
# 137 "include/linux/dqblk_xfs.h"
typedef struct fs_qfilestat {
 __u64 qfs_ino;
 __u64 qfs_nblks;
 __u32 qfs_nextents;
} fs_qfilestat_t;

typedef struct fs_quota_stat {
 __s8 qs_version;
 __u16 qs_flags;
 __s8 qs_pad;
 fs_qfilestat_t qs_uquota;
 fs_qfilestat_t qs_gquota;
 __u32 qs_incoredqs;
 __s32 qs_btimelimit;
 __s32 qs_itimelimit;
 __s32 qs_rtbtimelimit;
 __u16 qs_bwarnlimit;
 __u16 qs_iwarnlimit;
} fs_quota_stat_t;
# 177 "include/linux/quota.h" 2
# 1 "include/linux/dqblk_v1.h" 1
# 178 "include/linux/quota.h" 2
# 1 "include/linux/dqblk_v2.h" 1







# 1 "include/linux/dqblk_qtree.h" 1
# 17 "include/linux/dqblk_qtree.h"
struct dquot;


struct qtree_fmt_operations {
 void (*mem2disk_dqblk)(void *disk, struct dquot *dquot);
 void (*disk2mem_dqblk)(struct dquot *dquot, void *disk);
 int (*is_id)(void *disk, struct dquot *dquot);
};


struct qtree_mem_dqinfo {
 struct super_block *dqi_sb;
 int dqi_type;
 unsigned int dqi_blocks;
 unsigned int dqi_free_blk;
 unsigned int dqi_free_entry;
 unsigned int dqi_blocksize_bits;
 unsigned int dqi_entry_size;
 unsigned int dqi_usable_bs;
 unsigned int dqi_qtree_depth;
 struct qtree_fmt_operations *dqi_ops;
};

int qtree_write_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_read_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_delete_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_release_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_entry_unused(struct qtree_mem_dqinfo *info, char *disk);
static inline __attribute__((always_inline)) int qtree_depth(struct qtree_mem_dqinfo *info)
{
 unsigned int epb = info->dqi_usable_bs >> 2;
 unsigned long long entries = epb;
 int i;

 for (i = 1; entries < (1ULL << 32); i++)
  entries *= epb;
 return i;
}
# 9 "include/linux/dqblk_v2.h" 2
# 179 "include/linux/quota.h" 2



typedef __kernel_uid32_t qid_t;
typedef long long qsize_t;

extern spinlock_t dq_data_lock;
# 197 "include/linux/quota.h"
struct mem_dqblk {
 qsize_t dqb_bhardlimit;
 qsize_t dqb_bsoftlimit;
 qsize_t dqb_curspace;
 qsize_t dqb_ihardlimit;
 qsize_t dqb_isoftlimit;
 qsize_t dqb_curinodes;
 time_t dqb_btime;
 time_t dqb_itime;
};




struct quota_format_type;

struct mem_dqinfo {
 struct quota_format_type *dqi_format;
 int dqi_fmt_id;

 struct list_head dqi_dirty_list;
 unsigned long dqi_flags;
 unsigned int dqi_bgrace;
 unsigned int dqi_igrace;
 qsize_t dqi_maxblimit;
 qsize_t dqi_maxilimit;
 void *dqi_priv;
};

struct super_block;





extern void mark_info_dirty(struct super_block *sb, int type);
static inline __attribute__((always_inline)) int info_dirty(struct mem_dqinfo *info)
{
 return test_bit(16, &info->dqi_flags);
}

struct dqstats {
 int lookups;
 int drops;
 int reads;
 int writes;
 int cache_hits;
 int allocated_dquots;
 int free_dquots;
 int syncs;
};

extern struct dqstats dqstats;
# 263 "include/linux/quota.h"
struct dquot {
 struct hlist_node dq_hash;
 struct list_head dq_inuse;
 struct list_head dq_free;
 struct list_head dq_dirty;
 struct mutex dq_lock;
 atomic_t dq_count;
 wait_queue_head_t dq_wait_unused;
 struct super_block *dq_sb;
 unsigned int dq_id;
 loff_t dq_off;
 unsigned long dq_flags;
 short dq_type;
 struct mem_dqblk dq_dqb;
};







struct quota_format_ops {
 int (*check_quota_file)(struct super_block *sb, int type);
 int (*read_file_info)(struct super_block *sb, int type);
 int (*write_file_info)(struct super_block *sb, int type);
 int (*free_file_info)(struct super_block *sb, int type);
 int (*read_dqblk)(struct dquot *dquot);
 int (*commit_dqblk)(struct dquot *dquot);
 int (*release_dqblk)(struct dquot *dquot);
};


struct dquot_operations {
 int (*initialize) (struct inode *, int);
 int (*drop) (struct inode *);
 int (*alloc_space) (struct inode *, qsize_t, int);
 int (*alloc_inode) (const struct inode *, qsize_t);
 int (*free_space) (struct inode *, qsize_t);
 int (*free_inode) (const struct inode *, qsize_t);
 int (*transfer) (struct inode *, struct iattr *);
 int (*write_dquot) (struct dquot *);
 struct dquot *(*alloc_dquot)(struct super_block *, int);
 void (*destroy_dquot)(struct dquot *);
 int (*acquire_dquot) (struct dquot *);
 int (*release_dquot) (struct dquot *);
 int (*mark_dirty) (struct dquot *);
 int (*write_info) (struct super_block *, int);
};


struct quotactl_ops {
 int (*quota_on)(struct super_block *, int, int, char *, int);
 int (*quota_off)(struct super_block *, int, int);
 int (*quota_sync)(struct super_block *, int);
 int (*get_info)(struct super_block *, int, struct if_dqinfo *);
 int (*set_info)(struct super_block *, int, struct if_dqinfo *);
 int (*get_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*set_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*get_xstate)(struct super_block *, struct fs_quota_stat *);
 int (*set_xstate)(struct super_block *, unsigned int, int);
 int (*get_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
 int (*set_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
};

struct quota_format_type {
 int qf_fmt_id;
 struct quota_format_ops *qf_ops;
 struct module *qf_owner;
 struct quota_format_type *qf_next;
};


enum {
 _DQUOT_USAGE_ENABLED = 0,
 _DQUOT_LIMITS_ENABLED,
 _DQUOT_SUSPENDED,


 _DQUOT_STATE_FLAGS
};
# 358 "include/linux/quota.h"
static inline __attribute__((always_inline)) unsigned int dquot_state_flag(unsigned int flags, int type)
{
 if (type == 0)
  return flags;
 return flags << _DQUOT_STATE_FLAGS;
}

static inline __attribute__((always_inline)) unsigned int dquot_generic_flag(unsigned int flags, int type)
{
 if (type == 0)
  return flags;
 return flags >> _DQUOT_STATE_FLAGS;
}

struct quota_info {
 unsigned int flags;
 struct mutex dqio_mutex;
 struct mutex dqonoff_mutex;
 struct rw_semaphore dqptr_sem;
 struct inode *files[2];
 struct mem_dqinfo info[2];
 struct quota_format_ops *ops[2];
};

int register_quota_format(struct quota_format_type *fmt);
void unregister_quota_format(struct quota_format_type *fmt);

struct quota_module_name {
 int qm_fmt_id;
 char *qm_mod_name;
};
# 400 "include/linux/fs.h" 2
# 427 "include/linux/fs.h"
enum positive_aop_returns {
 AOP_WRITEPAGE_ACTIVATE = 0x80000,
 AOP_TRUNCATED_PAGE = 0x80001,
};
# 441 "include/linux/fs.h"
struct page;
struct address_space;
struct writeback_control;

struct iov_iter {
 const struct iovec *iov;
 unsigned long nr_segs;
 size_t iov_offset;
 size_t count;
};

size_t iov_iter_copy_from_user_atomic(struct page *page,
  struct iov_iter *i, unsigned long offset, size_t bytes);
size_t iov_iter_copy_from_user(struct page *page,
  struct iov_iter *i, unsigned long offset, size_t bytes);
void iov_iter_advance(struct iov_iter *i, size_t bytes);
int iov_iter_fault_in_readable(struct iov_iter *i, size_t bytes);
size_t iov_iter_single_seg_count(struct iov_iter *i);

static inline __attribute__((always_inline)) void iov_iter_init(struct iov_iter *i,
   const struct iovec *iov, unsigned long nr_segs,
   size_t count, size_t written)
{
 i->iov = iov;
 i->nr_segs = nr_segs;
 i->iov_offset = 0;
 i->count = count + written;

 iov_iter_advance(i, written);
}

static inline __attribute__((always_inline)) size_t iov_iter_count(struct iov_iter *i)
{
 return i->count;
}
# 486 "include/linux/fs.h"
typedef struct {
 size_t written;
 size_t count;
 union {
  char *buf;
  void *data;
 } arg;
 int error;
} read_descriptor_t;

typedef int (*read_actor_t)(read_descriptor_t *, struct page *,
  unsigned long, unsigned long);

struct address_space_operations {
 int (*writepage)(struct page *page, struct writeback_control *wbc);
 int (*readpage)(struct file *, struct page *);
 void (*sync_page)(struct page *);


 int (*writepages)(struct address_space *, struct writeback_control *);


 int (*set_page_dirty)(struct page *page);

 int (*readpages)(struct file *filp, struct address_space *mapping,
   struct list_head *pages, unsigned nr_pages);

 int (*write_begin)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned flags,
    struct page **pagep, void **fsdata);
 int (*write_end)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned copied,
    struct page *page, void *fsdata);


 sector_t (*bmap)(struct address_space *, sector_t);
 void (*invalidatepage) (struct page *, unsigned long);
 int (*releasepage) (struct page *, gfp_t);
 ssize_t (*direct_IO)(int, struct kiocb *, const struct iovec *iov,
   loff_t offset, unsigned long nr_segs);
 int (*get_xip_mem)(struct address_space *, unsigned long, int,
      void **, unsigned long *);

 int (*migratepage) (struct address_space *,
   struct page *, struct page *);
 int (*launder_page) (struct page *);
 int (*is_partially_uptodate) (struct page *, read_descriptor_t *,
     unsigned long);
};





int pagecache_write_begin(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned flags,
    struct page **pagep, void **fsdata);

int pagecache_write_end(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned copied,
    struct page *page, void *fsdata);

struct backing_dev_info;
struct address_space {
 struct inode *host;
 struct radix_tree_root page_tree;
 spinlock_t tree_lock;
 unsigned int i_mmap_writable;
 struct prio_tree_root i_mmap;
 struct list_head i_mmap_nonlinear;
 spinlock_t i_mmap_lock;
 unsigned int truncate_count;
 unsigned long nrpages;
 unsigned long writeback_index;
 const struct address_space_operations *a_ops;
 unsigned long flags;
 struct backing_dev_info *backing_dev_info;
 spinlock_t private_lock;
 struct list_head private_list;
 struct address_space *assoc_mapping;
} __attribute__((aligned(sizeof(long))));






struct block_device {
 dev_t bd_dev;
 struct inode * bd_inode;
 struct super_block * bd_super;
 int bd_openers;
 struct mutex bd_mutex;
 struct semaphore bd_mount_sem;
 struct list_head bd_inodes;
 void * bd_holder;
 int bd_holders;

 struct list_head bd_holder_list;

 struct block_device * bd_contains;
 unsigned bd_block_size;
 struct hd_struct * bd_part;

 unsigned bd_part_count;
 int bd_invalidated;
 struct gendisk * bd_disk;
 struct list_head bd_list;
 struct backing_dev_info *bd_inode_backing_dev_info;






 unsigned long bd_private;


 int bd_fsfreeze_count;

 struct mutex bd_fsfreeze_mutex;
};
# 616 "include/linux/fs.h"
int mapping_tagged(struct address_space *mapping, int tag);




static inline __attribute__((always_inline)) int mapping_mapped(struct address_space *mapping)
{
 return !prio_tree_empty(&mapping->i_mmap) ||
  !list_empty(&mapping->i_mmap_nonlinear);
}







static inline __attribute__((always_inline)) int mapping_writably_mapped(struct address_space *mapping)
{
 return mapping->i_mmap_writable != 0;
}
# 649 "include/linux/fs.h"
struct inode {
 struct hlist_node i_hash;
 struct list_head i_list;
 struct list_head i_sb_list;
 struct list_head i_dentry;
 unsigned long i_ino;
 atomic_t i_count;
 unsigned int i_nlink;
 uid_t i_uid;
 gid_t i_gid;
 dev_t i_rdev;
 u64 i_version;
 loff_t i_size;



 struct timespec i_atime;
 struct timespec i_mtime;
 struct timespec i_ctime;
 unsigned int i_blkbits;
 blkcnt_t i_blocks;
 unsigned short i_bytes;
 umode_t i_mode;
 spinlock_t i_lock;
 struct mutex i_mutex;
 struct compat_rw_semaphore i_alloc_sem;
 const struct inode_operations *i_op;
 const struct file_operations *i_fop;
 struct super_block *i_sb;
 struct file_lock *i_flock;
 struct address_space *i_mapping;
 struct address_space i_data;



 struct list_head i_devices;
 union {
  struct pipe_inode_info *i_pipe;
  struct block_device *i_bdev;
  struct cdev *i_cdev;
 };
 int i_cindex;

 __u32 i_generation;


 unsigned long i_dnotify_mask;
 struct dnotify_struct *i_dnotify;



 struct list_head inotify_watches;
 struct mutex inotify_mutex;


 unsigned long i_state;
 unsigned long dirtied_when;

 unsigned int i_flags;

 atomic_t i_writecount;



 void *i_private;
};
# 727 "include/linux/fs.h"
enum inode_i_mutex_lock_class
{
 I_MUTEX_NORMAL,
 I_MUTEX_PARENT,
 I_MUTEX_CHILD,
 I_MUTEX_XATTR,
 I_MUTEX_QUOTA
};

extern void inode_double_lock(struct inode *inode1, struct inode *inode2);
extern void inode_double_unlock(struct inode *inode1, struct inode *inode2);
# 749 "include/linux/fs.h"
static inline __attribute__((always_inline)) loff_t i_size_read(const struct inode *inode)
{
# 761 "include/linux/fs.h"
 loff_t i_size;

 do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0);
 i_size = inode->i_size;
 do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0);
 return i_size;



}






static inline __attribute__((always_inline)) void i_size_write(struct inode *inode, loff_t i_size)
{





 do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0);
 inode->i_size = i_size;
 do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0);



}

static inline __attribute__((always_inline)) unsigned iminor(const struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) & ((1U << 20) - 1)));
}

static inline __attribute__((always_inline)) unsigned imajor(const struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) >> 20));
}

extern struct block_device *I_BDEV(struct inode *inode);

struct fown_struct {
 rwlock_t lock;
 struct pid *pid;
 enum pid_type pid_type;
 uid_t uid, euid;
 int signum;
};




struct file_ra_state {
 unsigned long start;
 unsigned int size;
 unsigned int async_size;


 unsigned int ra_pages;
 int mmap_miss;
 loff_t prev_pos;
};




static inline __attribute__((always_inline)) int ra_has_index(struct file_ra_state *ra, unsigned long index)
{
 return (index >= ra->start &&
  index < ra->start + ra->size);
}




struct file {




 union {
  struct list_head fu_list;
  struct rcu_head fu_rcuhead;
 } f_u;
 struct path f_path;


 const struct file_operations *f_op;
 atomic_long_t f_count;
 unsigned int f_flags;
 fmode_t f_mode;
 loff_t f_pos;
 struct fown_struct f_owner;
 const struct cred *f_cred;
 struct file_ra_state f_ra;

 u64 f_version;




 void *private_data;



 struct list_head f_ep_links;
 spinlock_t f_ep_lock;

 struct address_space *f_mapping;



};
extern spinlock_t files_lock;
# 916 "include/linux/fs.h"
static inline __attribute__((always_inline)) void file_take_write(struct file *filp) {}
static inline __attribute__((always_inline)) void file_release_write(struct file *filp) {}
static inline __attribute__((always_inline)) void file_reset_write(struct file *filp) {}
static inline __attribute__((always_inline)) void file_check_state(struct file *filp) {}
static inline __attribute__((always_inline)) int file_check_writeable(struct file *filp)
{
 return 0;
}
# 957 "include/linux/fs.h"
typedef struct files_struct *fl_owner_t;

struct file_lock_operations {
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
};

struct lock_manager_operations {
 int (*fl_compare_owner)(struct file_lock *, struct file_lock *);
 void (*fl_notify)(struct file_lock *);
 int (*fl_grant)(struct file_lock *, struct file_lock *, int);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
 void (*fl_break)(struct file_lock *);
 int (*fl_mylease)(struct file_lock *, struct file_lock *);
 int (*fl_change)(struct file_lock **, int);
};

struct lock_manager {
 struct list_head list;
};

void locks_start_grace(struct lock_manager *);
void locks_end_grace(struct lock_manager *);
int locks_in_grace(void);


# 1 "include/linux/nfs_fs_i.h" 1





# 1 "include/linux/nfs.h" 1
# 39 "include/linux/nfs.h"
 enum nfs_stat {
 NFS_OK = 0,
 NFSERR_PERM = 1,
 NFSERR_NOENT = 2,
 NFSERR_IO = 5,
 NFSERR_NXIO = 6,
 NFSERR_EAGAIN = 11,
 NFSERR_ACCES = 13,
 NFSERR_EXIST = 17,
 NFSERR_XDEV = 18,
 NFSERR_NODEV = 19,
 NFSERR_NOTDIR = 20,
 NFSERR_ISDIR = 21,
 NFSERR_INVAL = 22,
 NFSERR_FBIG = 27,
 NFSERR_NOSPC = 28,
 NFSERR_ROFS = 30,
 NFSERR_MLINK = 31,
 NFSERR_OPNOTSUPP = 45,
 NFSERR_NAMETOOLONG = 63,
 NFSERR_NOTEMPTY = 66,
 NFSERR_DQUOT = 69,
 NFSERR_STALE = 70,
 NFSERR_REMOTE = 71,
 NFSERR_WFLUSH = 99,
 NFSERR_BADHANDLE = 10001,
 NFSERR_NOT_SYNC = 10002,
 NFSERR_BAD_COOKIE = 10003,
 NFSERR_NOTSUPP = 10004,
 NFSERR_TOOSMALL = 10005,
 NFSERR_SERVERFAULT = 10006,
 NFSERR_BADTYPE = 10007,
 NFSERR_JUKEBOX = 10008,
 NFSERR_SAME = 10009,
 NFSERR_DENIED = 10010,
 NFSERR_EXPIRED = 10011,
 NFSERR_LOCKED = 10012,
 NFSERR_GRACE = 10013,
 NFSERR_FHEXPIRED = 10014,
 NFSERR_SHARE_DENIED = 10015,
 NFSERR_WRONGSEC = 10016,
 NFSERR_CLID_INUSE = 10017,
 NFSERR_RESOURCE = 10018,
 NFSERR_MOVED = 10019,
 NFSERR_NOFILEHANDLE = 10020,
 NFSERR_MINOR_VERS_MISMATCH = 10021,
 NFSERR_STALE_CLIENTID = 10022,
 NFSERR_STALE_STATEID = 10023,
 NFSERR_OLD_STATEID = 10024,
 NFSERR_BAD_STATEID = 10025,
 NFSERR_BAD_SEQID = 10026,
 NFSERR_NOT_SAME = 10027,
 NFSERR_LOCK_RANGE = 10028,
 NFSERR_SYMLINK = 10029,
 NFSERR_RESTOREFH = 10030,
 NFSERR_LEASE_MOVED = 10031,
 NFSERR_ATTRNOTSUPP = 10032,
 NFSERR_NO_GRACE = 10033,
 NFSERR_RECLAIM_BAD = 10034,
 NFSERR_RECLAIM_CONFLICT = 10035,
 NFSERR_BAD_XDR = 10036,
 NFSERR_LOCKS_HELD = 10037,
 NFSERR_OPENMODE = 10038,
 NFSERR_BADOWNER = 10039,
 NFSERR_BADCHAR = 10040,
 NFSERR_BADNAME = 10041,
 NFSERR_BAD_RANGE = 10042,
 NFSERR_LOCK_NOTSUPP = 10043,
 NFSERR_OP_ILLEGAL = 10044,
 NFSERR_DEADLOCK = 10045,
 NFSERR_FILE_OPEN = 10046,
 NFSERR_ADMIN_REVOKED = 10047,
 NFSERR_CB_PATH_DOWN = 10048,
 NFSERR_REPLAY_ME = 10049
};



enum nfs_ftype {
 NFNON = 0,
 NFREG = 1,
 NFDIR = 2,
 NFBLK = 3,
 NFCHR = 4,
 NFLNK = 5,
 NFSOCK = 6,
 NFBAD = 7,
 NFFIFO = 8
};


# 1 "include/linux/sunrpc/msg_prot.h" 1
# 18 "include/linux/sunrpc/msg_prot.h"
typedef u32 rpc_authflavor_t;

enum rpc_auth_flavors {
 RPC_AUTH_NULL = 0,
 RPC_AUTH_UNIX = 1,
 RPC_AUTH_SHORT = 2,
 RPC_AUTH_DES = 3,
 RPC_AUTH_KRB = 4,
 RPC_AUTH_GSS = 6,
 RPC_AUTH_MAXFLAVOR = 8,

 RPC_AUTH_GSS_KRB5 = 390003,
 RPC_AUTH_GSS_KRB5I = 390004,
 RPC_AUTH_GSS_KRB5P = 390005,
 RPC_AUTH_GSS_LKEY = 390006,
 RPC_AUTH_GSS_LKEYI = 390007,
 RPC_AUTH_GSS_LKEYP = 390008,
 RPC_AUTH_GSS_SPKM = 390009,
 RPC_AUTH_GSS_SPKMI = 390010,
 RPC_AUTH_GSS_SPKMP = 390011,
};




enum rpc_msg_type {
 RPC_CALL = 0,
 RPC_REPLY = 1
};

enum rpc_reply_stat {
 RPC_MSG_ACCEPTED = 0,
 RPC_MSG_DENIED = 1
};

enum rpc_accept_stat {
 RPC_SUCCESS = 0,
 RPC_PROG_UNAVAIL = 1,
 RPC_PROG_MISMATCH = 2,
 RPC_PROC_UNAVAIL = 3,
 RPC_GARBAGE_ARGS = 4,
 RPC_SYSTEM_ERR = 5,

 RPC_DROP_REPLY = 60000,
};

enum rpc_reject_stat {
 RPC_MISMATCH = 0,
 RPC_AUTH_ERROR = 1
};

enum rpc_auth_stat {
 RPC_AUTH_OK = 0,
 RPC_AUTH_BADCRED = 1,
 RPC_AUTH_REJECTEDCRED = 2,
 RPC_AUTH_BADVERF = 3,
 RPC_AUTH_REJECTEDVERF = 4,
 RPC_AUTH_TOOWEAK = 5,

 RPCSEC_GSS_CREDPROBLEM = 13,
 RPCSEC_GSS_CTXPROBLEM = 14
};
# 102 "include/linux/sunrpc/msg_prot.h"
typedef __be32 rpc_fraghdr;
# 131 "include/linux/nfs.h" 2






struct nfs_fh {
 unsigned short size;
 unsigned char data[128];
};





static inline __attribute__((always_inline)) int nfs_compare_fh(const struct nfs_fh *a, const struct nfs_fh *b)
{
 return a->size != b->size || memcmp(a->data, b->data, a->size) != 0;
}

static inline __attribute__((always_inline)) void nfs_copy_fh(struct nfs_fh *target, const struct nfs_fh *source)
{
 target->size = source->size;
 memcpy(target->data, source->data, source->size);
}
# 165 "include/linux/nfs.h"
enum nfs3_stable_how {
 NFS_UNSTABLE = 0,
 NFS_DATA_SYNC = 1,
 NFS_FILE_SYNC = 2
};
# 7 "include/linux/nfs_fs_i.h" 2

struct nlm_lockowner;




struct nfs_lock_info {
 u32 state;
 struct nlm_lockowner *owner;
 struct list_head list;
};

struct nfs4_lock_state;
struct nfs4_lock_info {
 struct nfs4_lock_state *owner;
};
# 985 "include/linux/fs.h" 2

struct file_lock {
 struct file_lock *fl_next;
 struct list_head fl_link;
 struct list_head fl_block;
 fl_owner_t fl_owner;
 unsigned char fl_flags;
 unsigned char fl_type;
 unsigned int fl_pid;
 struct pid *fl_nspid;
 wait_queue_head_t fl_wait;
 struct file *fl_file;
 loff_t fl_start;
 loff_t fl_end;

 struct fasync_struct * fl_fasync;
 unsigned long fl_break_time;

 struct file_lock_operations *fl_ops;
 struct lock_manager_operations *fl_lmops;
 union {
  struct nfs_lock_info nfs_fl;
  struct nfs4_lock_info nfs4_fl;
  struct {
   struct list_head link;
   int state;
  } afs;
 } fl_u;
};
# 1022 "include/linux/fs.h"
# 1 "include/linux/fcntl.h" 1



# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/fcntl.h" 1
# 9 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/fcntl.h"
# 1 "include/asm-generic/fcntl.h" 1
# 117 "include/asm-generic/fcntl.h"
struct flock {
 short l_type;
 short l_whence;
 __kernel_off_t l_start;
 __kernel_off_t l_len;
 __kernel_pid_t l_pid;

};
# 140 "include/asm-generic/fcntl.h"
struct flock64 {
 short l_type;
 short l_whence;
 __kernel_loff_t l_start;
 __kernel_loff_t l_len;
 __kernel_pid_t l_pid;

};
# 10 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/fcntl.h" 2
# 5 "include/linux/fcntl.h" 2
# 1023 "include/linux/fs.h" 2

extern void send_sigio(struct fown_struct *fown, int fd, int band);


extern int do_sync_mapping_range(struct address_space *mapping, loff_t offset,
   loff_t endbyte, unsigned int flags);


extern int fcntl_getlk(struct file *, struct flock *);
extern int fcntl_setlk(unsigned int, struct file *, unsigned int,
   struct flock *);


extern int fcntl_getlk64(struct file *, struct flock64 *);
extern int fcntl_setlk64(unsigned int, struct file *, unsigned int,
   struct flock64 *);


extern int fcntl_setlease(unsigned int fd, struct file *filp, long arg);
extern int fcntl_getlease(struct file *filp);


extern void locks_init_lock(struct file_lock *);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void __locks_copy_lock(struct file_lock *, const struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern void posix_test_lock(struct file *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file_wait(struct file *, struct file_lock *);
extern int posix_unblock_lock(struct file *, struct file_lock *);
extern int vfs_test_lock(struct file *, struct file_lock *);
extern int vfs_lock_file(struct file *, unsigned int, struct file_lock *, struct file_lock *);
extern int vfs_cancel_lock(struct file *filp, struct file_lock *fl);
extern int flock_lock_file_wait(struct file *filp, struct file_lock *fl);
extern int __break_lease(struct inode *inode, unsigned int flags);
extern void lease_get_mtime(struct inode *, struct timespec *time);
extern int generic_setlease(struct file *, long, struct file_lock **);
extern int vfs_setlease(struct file *, long, struct file_lock **);
extern int lease_modify(struct file_lock **, int);
extern int lock_may_read(struct inode *, loff_t start, unsigned long count);
extern int lock_may_write(struct inode *, loff_t start, unsigned long count);
# 1109 "include/linux/fs.h"
struct fasync_struct {
 int magic;
 int fa_fd;
 struct fasync_struct *fa_next;
 struct file *fa_file;
};




extern int fasync_helper(int, struct file *, int, struct fasync_struct **);

extern void kill_fasync(struct fasync_struct **, int, int);

extern void __kill_fasync(struct fasync_struct *, int, int);

extern int __f_setown(struct file *filp, struct pid *, enum pid_type, int force);
extern int f_setown(struct file *filp, unsigned long arg, int force);
extern void f_delown(struct file *filp);
extern pid_t f_getown(struct file *filp);
extern int send_sigurg(struct fown_struct *fown);
# 1139 "include/linux/fs.h"
extern struct list_head super_blocks;
extern spinlock_t sb_lock;



struct super_block {
 struct list_head s_list;
 dev_t s_dev;
 unsigned long s_blocksize;
 unsigned char s_blocksize_bits;
 unsigned char s_dirt;
 unsigned long long s_maxbytes;
 struct file_system_type *s_type;
 const struct super_operations *s_op;
 struct dquot_operations *dq_op;
  struct quotactl_ops *s_qcop;
 const struct export_operations *s_export_op;
 unsigned long s_flags;
 unsigned long s_magic;
 struct dentry *s_root;
 struct rw_semaphore s_umount;
 struct mutex s_lock;
 int s_count;
 int s_need_sync_fs;
 atomic_t s_active;



 struct xattr_handler **s_xattr;

 struct list_head s_inodes;
 struct list_head s_dirty;
 struct list_head s_io;
 struct list_head s_more_io;
 struct hlist_head s_anon;
 struct list_head s_files;

 struct list_head s_dentry_lru;
 int s_nr_dentry_unused;

 struct block_device *s_bdev;
 struct mtd_info *s_mtd;
 struct list_head s_instances;
 struct quota_info s_dquot;

 int s_frozen;
 wait_queue_head_t s_wait_unfrozen;

 char s_id[32];

 void *s_fs_info;
 fmode_t s_mode;





 struct mutex s_vfs_rename_mutex;



 u32 s_time_gran;





 char *s_subtype;





 char *s_options;




 struct list_head s_async_list;
};

extern struct timespec current_fs_time(struct super_block *sb);




enum {
 SB_UNFROZEN = 0,
 SB_FREEZE_WRITE = 1,
 SB_FREEZE_TRANS = 2,
};
# 1242 "include/linux/fs.h"
extern void lock_super(struct super_block *);
extern void unlock_super(struct super_block *);




extern int vfs_create(struct inode *, struct dentry *, int, struct nameidata *);
extern int vfs_mkdir(struct inode *, struct dentry *, int);
extern int vfs_mknod(struct inode *, struct dentry *, int, dev_t);
extern int vfs_symlink(struct inode *, struct dentry *, const char *);
extern int vfs_link(struct dentry *, struct inode *, struct dentry *);
extern int vfs_rmdir(struct inode *, struct dentry *);
extern int vfs_unlink(struct inode *, struct dentry *);
extern int vfs_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);




extern void dentry_unhash(struct dentry *dentry);




extern int file_permission(struct file *, int);




struct fiemap_extent_info {
 unsigned int fi_flags;
 unsigned int fi_extents_mapped;
 unsigned int fi_extents_max;
 struct fiemap_extent *fi_extents_start;

};
int fiemap_fill_next_extent(struct fiemap_extent_info *info, u64 logical,
       u64 phys, u64 len, u32 flags);
int fiemap_check_flags(struct fiemap_extent_info *fieinfo, u32 fs_flags);
# 1300 "include/linux/fs.h"
int generic_osync_inode(struct inode *, struct address_space *, int);







typedef int (*filldir_t)(void *, const char *, int, loff_t, u64, unsigned);
struct block_device_operations;
# 1322 "include/linux/fs.h"
struct file_operations {
 struct module *owner;
 loff_t (*llseek) (struct file *, loff_t, int);
 ssize_t (*read) (struct file *, char *, size_t, loff_t *);
 ssize_t (*write) (struct file *, const char *, size_t, loff_t *);
 ssize_t (*aio_read) (struct kiocb *, const struct iovec *, unsigned long, loff_t);
 ssize_t (*aio_write) (struct kiocb *, const struct iovec *, unsigned long, loff_t);
 int (*readdir) (struct file *, void *, filldir_t);
 unsigned int (*poll) (struct file *, struct poll_table_struct *);
 int (*ioctl) (struct inode *, struct file *, unsigned int, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned int, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned int, unsigned long);
 int (*mmap) (struct file *, struct vm_area_struct *);
 int (*open) (struct inode *, struct file *);
 int (*flush) (struct file *, fl_owner_t id);
 int (*release) (struct inode *, struct file *);
 int (*fsync) (struct file *, struct dentry *, int datasync);
 int (*aio_fsync) (struct kiocb *, int datasync);
 int (*fasync) (int, struct file *, int);
 int (*lock) (struct file *, int, struct file_lock *);
 ssize_t (*sendpage) (struct file *, struct page *, int, size_t, loff_t *, int);
 unsigned long (*get_unmapped_area)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
 int (*check_flags)(int);
 int (*flock) (struct file *, int, struct file_lock *);
 ssize_t (*splice_write)(struct pipe_inode_info *, struct file *, loff_t *, size_t, unsigned int);
 ssize_t (*splice_read)(struct file *, loff_t *, struct pipe_inode_info *, size_t, unsigned int);
 int (*setlease)(struct file *, long, struct file_lock **);
};

struct inode_operations {
 int (*create) (struct inode *,struct dentry *,int, struct nameidata *);
 struct dentry * (*lookup) (struct inode *,struct dentry *, struct nameidata *);
 int (*link) (struct dentry *,struct inode *,struct dentry *);
 int (*unlink) (struct inode *,struct dentry *);
 int (*symlink) (struct inode *,struct dentry *,const char *);
 int (*mkdir) (struct inode *,struct dentry *,int);
 int (*rmdir) (struct inode *,struct dentry *);
 int (*mknod) (struct inode *,struct dentry *,int,dev_t);
 int (*rename) (struct inode *, struct dentry *,
   struct inode *, struct dentry *);
 int (*readlink) (struct dentry *, char *,int);
 void * (*follow_link) (struct dentry *, struct nameidata *);
 void (*put_link) (struct dentry *, struct nameidata *, void *);
 void (*truncate) (struct inode *);
 int (*permission) (struct inode *, int);
 int (*setattr) (struct dentry *, struct iattr *);
 int (*getattr) (struct vfsmount *mnt, struct dentry *, struct kstat *);
 int (*setxattr) (struct dentry *, const char *,const void *,size_t,int);
 ssize_t (*getxattr) (struct dentry *, const char *, void *, size_t);
 ssize_t (*listxattr) (struct dentry *, char *, size_t);
 int (*removexattr) (struct dentry *, const char *);
 void (*truncate_range)(struct inode *, loff_t, loff_t);
 long (*fallocate)(struct inode *inode, int mode, loff_t offset,
     loff_t len);
 int (*fiemap)(struct inode *, struct fiemap_extent_info *, u64 start,
        u64 len);
};

struct seq_file;

ssize_t rw_copy_check_uvector(int type, const struct iovec * uvector,
    unsigned long nr_segs, unsigned long fast_segs,
    struct iovec *fast_pointer,
    struct iovec **ret_pointer);

extern ssize_t vfs_read(struct file *, char *, size_t, loff_t *);
extern ssize_t vfs_write(struct file *, const char *, size_t, loff_t *);
extern ssize_t vfs_readv(struct file *, const struct iovec *,
  unsigned long, loff_t *);
extern ssize_t vfs_writev(struct file *, const struct iovec *,
  unsigned long, loff_t *);

struct super_operations {
    struct inode *(*alloc_inode)(struct super_block *sb);
 void (*destroy_inode)(struct inode *);

    void (*dirty_inode) (struct inode *);
 int (*write_inode) (struct inode *, int);
 void (*drop_inode) (struct inode *);
 void (*delete_inode) (struct inode *);
 void (*put_super) (struct super_block *);
 void (*write_super) (struct super_block *);
 int (*sync_fs)(struct super_block *sb, int wait);
 int (*freeze_fs) (struct super_block *);
 int (*unfreeze_fs) (struct super_block *);
 int (*statfs) (struct dentry *, struct kstatfs *);
 int (*remount_fs) (struct super_block *, int *, char *);
 void (*clear_inode) (struct inode *);
 void (*umount_begin) (struct super_block *);

 int (*show_options)(struct seq_file *, struct vfsmount *);
 int (*show_stats)(struct seq_file *, struct vfsmount *);




 int (*bdev_try_to_free_page)(struct super_block*, struct page*, gfp_t);
};
# 1488 "include/linux/fs.h"
extern void __mark_inode_dirty(struct inode *, int);
static inline __attribute__((always_inline)) void mark_inode_dirty(struct inode *inode)
{
 __mark_inode_dirty(inode, (1 | 2 | 4));
}

static inline __attribute__((always_inline)) void mark_inode_dirty_sync(struct inode *inode)
{
 __mark_inode_dirty(inode, 1);
}
# 1507 "include/linux/fs.h"
static inline __attribute__((always_inline)) void inc_nlink(struct inode *inode)
{
 inode->i_nlink++;
}

static inline __attribute__((always_inline)) void inode_inc_link_count(struct inode *inode)
{
 inc_nlink(inode);
 mark_inode_dirty(inode);
}
# 1529 "include/linux/fs.h"
static inline __attribute__((always_inline)) void drop_nlink(struct inode *inode)
{
 inode->i_nlink--;
}
# 1542 "include/linux/fs.h"
static inline __attribute__((always_inline)) void clear_nlink(struct inode *inode)
{
 inode->i_nlink = 0;
}

static inline __attribute__((always_inline)) void inode_dec_link_count(struct inode *inode)
{
 drop_nlink(inode);
 mark_inode_dirty(inode);
}
# 1561 "include/linux/fs.h"
static inline __attribute__((always_inline)) void inode_inc_iversion(struct inode *inode)
{
       do { if (__builtin_types_compatible_p(typeof((&inode->i_lock)), raw_spinlock_t *)) do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&inode->i_lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&inode->i_lock)), spinlock_t *)) rt_spin_lock((spinlock_t *)(&inode->i_lock)); else __bad_func_type(); } while (0);
       inode->i_version++;
       do { if (__builtin_types_compatible_p(typeof((&inode->i_lock)), raw_spinlock_t *)) do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&inode->i_lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&inode->i_lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&inode->i_lock)); else __bad_func_type(); } while (0);
}

extern void touch_atime(struct vfsmount *mnt, struct dentry *dentry);
static inline __attribute__((always_inline)) void file_accessed(struct file *file)
{
 if (!(file->f_flags & 01000000))
  touch_atime(file->f_path.mnt, file->f_path.dentry);
}

int sync_inode(struct inode *inode, struct writeback_control *wbc);

struct file_system_type {
 const char *name;
 int fs_flags;
 int (*get_sb) (struct file_system_type *, int,
         const char *, void *, struct vfsmount *);
 void (*kill_sb) (struct super_block *);
 struct module *owner;
 struct file_system_type * next;
 struct list_head fs_supers;

 struct lock_class_key s_lock_key;
 struct lock_class_key s_umount_key;

 struct lock_class_key i_lock_key;
 struct lock_class_key i_mutex_key;
 struct lock_class_key i_mutex_dir_key;
 struct lock_class_key i_alloc_sem_key;
};

extern int get_sb_bdev(struct file_system_type *fs_type,
 int flags, const char *dev_name, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_single(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_nodev(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
void generic_shutdown_super(struct super_block *sb);
void kill_block_super(struct super_block *sb);
void kill_anon_super(struct super_block *sb);
void kill_litter_super(struct super_block *sb);
void deactivate_super(struct super_block *sb);
int set_anon_super(struct super_block *s, void *data);
struct super_block *sget(struct file_system_type *type,
   int (*test)(struct super_block *,void *),
   int (*set)(struct super_block *,void *),
   void *data);
extern int get_sb_pseudo(struct file_system_type *, char *,
 const struct super_operations *ops, unsigned long,
 struct vfsmount *mnt);
extern int simple_set_mnt(struct vfsmount *mnt, struct super_block *sb);
int __put_super_and_need_restart(struct super_block *sb);







extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount_data(struct file_system_type *, void *data);

extern int may_umount_tree(struct vfsmount *);
extern int may_umount(struct vfsmount *);
extern long do_mount(char *, char *, char *, unsigned long, void *);
extern struct vfsmount *collect_mounts(struct vfsmount *, struct dentry *);
extern void drop_collected_mounts(struct vfsmount *);

extern int vfs_statfs(struct dentry *, struct kstatfs *);


extern struct kobject *fs_kobj;

extern int rw_verify_area(int, struct file *, loff_t *, size_t);





extern int locks_mandatory_locked(struct inode *);
extern int locks_mandatory_area(int, struct inode *, struct file *, loff_t, size_t);






static inline __attribute__((always_inline)) int __mandatory_lock(struct inode *ino)
{
 return (ino->i_mode & (0002000 | 00010)) == 0002000;
}






static inline __attribute__((always_inline)) int mandatory_lock(struct inode *ino)
{
 return ((ino)->i_sb->s_flags & (64)) && __mandatory_lock(ino);
}

static inline __attribute__((always_inline)) int locks_verify_locked(struct inode *inode)
{
 if (mandatory_lock(inode))
  return locks_mandatory_locked(inode);
 return 0;
}

static inline __attribute__((always_inline)) int locks_verify_truncate(struct inode *inode,
        struct file *filp,
        loff_t size)
{
 if (inode->i_flock && mandatory_lock(inode))
  return locks_mandatory_area(
   2, inode, filp,
   size < inode->i_size ? size : inode->i_size,
   (size < inode->i_size ? inode->i_size - size
    : size - inode->i_size)
  );
 return 0;
}

static inline __attribute__((always_inline)) int break_lease(struct inode *inode, unsigned int mode)
{
 if (inode->i_flock)
  return __break_lease(inode, mode);
 return 0;
}
# 1713 "include/linux/fs.h"
extern int do_truncate(struct dentry *, loff_t start, unsigned int time_attrs,
         struct file *filp);
extern long do_sys_open(int dfd, const char *filename, int flags,
   int mode);
extern struct file *filp_open(const char *, int, int);
extern struct file * dentry_open(struct dentry *, struct vfsmount *, int,
     const struct cred *);
extern int filp_close(struct file *, fl_owner_t id);
extern char * getname(const char *);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) vfs_caches_init_early(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) vfs_caches_init(unsigned long);

extern struct kmem_cache *names_cachep;
# 1738 "include/linux/fs.h"
extern int register_blkdev(unsigned int, const char *);
extern void unregister_blkdev(unsigned int, const char *);
extern struct block_device *bdget(dev_t);
extern void bd_set_size(struct block_device *, loff_t size);
extern void bd_forget(struct inode *inode);
extern void bdput(struct block_device *);
extern struct block_device *open_by_devnum(dev_t, fmode_t);



extern const struct file_operations def_blk_fops;
extern const struct file_operations def_chr_fops;
extern const struct file_operations bad_sock_fops;
extern const struct file_operations def_fifo_fops;

extern int ioctl_by_bdev(struct block_device *, unsigned, unsigned long);
extern int blkdev_ioctl(struct block_device *, fmode_t, unsigned, unsigned long);
extern long compat_blkdev_ioctl(struct file *, unsigned, unsigned long);
extern int blkdev_get(struct block_device *, fmode_t);
extern int blkdev_put(struct block_device *, fmode_t);
extern int bd_claim(struct block_device *, void *);
extern void bd_release(struct block_device *);

extern int bd_claim_by_disk(struct block_device *, void *, struct gendisk *);
extern void bd_release_from_disk(struct block_device *, struct gendisk *);
# 1771 "include/linux/fs.h"
extern int alloc_chrdev_region(dev_t *, unsigned, unsigned, const char *);
extern int register_chrdev_region(dev_t, unsigned, const char *);
extern int register_chrdev(unsigned int, const char *,
      const struct file_operations *);
extern void unregister_chrdev(unsigned int, const char *);
extern void unregister_chrdev_region(dev_t, unsigned);
extern void chrdev_show(struct seq_file *,off_t);







extern const char *__bdevname(dev_t, char *buffer);
extern const char *bdevname(struct block_device *bdev, char *buffer);
extern struct block_device *lookup_bdev(const char *);
extern struct block_device *open_bdev_exclusive(const char *, fmode_t, void *);
extern void close_bdev_exclusive(struct block_device *, fmode_t);
extern void blkdev_show(struct seq_file *,off_t);





extern void init_special_inode(struct inode *, umode_t, dev_t);


extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);

extern const struct file_operations read_pipefifo_fops;
extern const struct file_operations write_pipefifo_fops;
extern const struct file_operations rdwr_pipefifo_fops;

extern int fs_may_remount_ro(struct super_block *);
# 1819 "include/linux/fs.h"
extern void check_disk_size_change(struct gendisk *disk,
       struct block_device *bdev);
extern int revalidate_disk(struct gendisk *);
extern int check_disk_change(struct block_device *);
extern int __invalidate_device(struct block_device *);
extern int invalidate_partition(struct gendisk *, int);

extern int invalidate_inodes(struct super_block *);
unsigned long __invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end,
     bool be_atomic);
unsigned long invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end);

static inline __attribute__((always_inline)) unsigned long __attribute__((deprecated))
invalidate_inode_pages(struct address_space *mapping)
{
 return invalidate_mapping_pages(mapping, 0, ~0UL);
}

static inline __attribute__((always_inline)) void invalidate_remote_inode(struct inode *inode)
{
 if ((((inode->i_mode) & 00170000) == 0100000) || (((inode->i_mode) & 00170000) == 0040000) ||
     (((inode->i_mode) & 00170000) == 0120000))
  invalidate_mapping_pages(inode->i_mapping, 0, -1);
}
extern int invalidate_inode_pages2(struct address_space *mapping);
extern int invalidate_inode_pages2_range(struct address_space *mapping,
      unsigned long start, unsigned long end);
extern void generic_sync_sb_inodes(struct super_block *sb,
    struct writeback_control *wbc);
extern int write_inode_now(struct inode *, int);
extern int filemap_fdatawrite(struct address_space *);
extern int filemap_flush(struct address_space *);
extern int filemap_fdatawait(struct address_space *);
extern int filemap_write_and_wait(struct address_space *mapping);
extern int filemap_write_and_wait_range(struct address_space *mapping,
            loff_t lstart, loff_t lend);
extern int wait_on_page_writeback_range(struct address_space *mapping,
    unsigned long start, unsigned long end);
extern int __filemap_fdatawrite_range(struct address_space *mapping,
    loff_t start, loff_t end, int sync_mode);
extern int filemap_fdatawrite_range(struct address_space *mapping,
    loff_t start, loff_t end);

extern int vfs_fsync(struct file *file, struct dentry *dentry, int datasync);
extern void sync_supers(void);
extern void sync_filesystems(int wait);
extern void __fsync_super(struct super_block *sb);
extern void emergency_sync(void);
extern void emergency_remount(void);
extern int do_remount_sb(struct super_block *sb, int flags,
    void *data, int force);

extern sector_t bmap(struct inode *, sector_t);

extern int notify_change(struct dentry *, struct iattr *);
extern int inode_permission(struct inode *, int);
extern int generic_permission(struct inode *, int,
  int (*check_acl)(struct inode *, int));

static inline __attribute__((always_inline)) bool execute_ok(struct inode *inode)
{
 return (inode->i_mode & (00100|00010|00001)) || (((inode->i_mode) & 00170000) == 0040000);
}

extern int get_write_access(struct inode *);
extern int deny_write_access(struct file *);
static inline __attribute__((always_inline)) void put_write_access(struct inode * inode)
{
 (void) atomic_sub_return(1, &inode->i_writecount);
}
static inline __attribute__((always_inline)) void allow_write_access(struct file *file)
{
 if (file)
  (void) atomic_add_return(1, &file->f_path.dentry->d_inode->i_writecount);
}
extern int do_pipe(int *);
extern int do_pipe_flags(int *, int);
extern struct file *create_read_pipe(struct file *f, int flags);
extern struct file *create_write_pipe(int flags);
extern void free_write_pipe(struct file *);

extern struct file *do_filp_open(int dfd, const char *pathname,
  int open_flag, int mode);
extern int may_open(struct path *, int, int);

extern int kernel_read(struct file *, unsigned long, char *, unsigned long);
extern struct file * open_exec(const char *);


extern int is_subdir(struct dentry *, struct dentry *);
extern ino_t find_inode_number(struct dentry *, struct qstr *);

# 1 "include/linux/err.h" 1
# 22 "include/linux/err.h"
static inline __attribute__((always_inline)) void *ERR_PTR(long error)
{
 return (void *) error;
}

static inline __attribute__((always_inline)) long PTR_ERR(const void *ptr)
{
 return (long) ptr;
}

static inline __attribute__((always_inline)) long IS_ERR(const void *ptr)
{
 return __builtin_expect(!!(((unsigned long)ptr) >= (unsigned long)-4095), 0);
}
# 44 "include/linux/err.h"
static inline __attribute__((always_inline)) void *ERR_CAST(const void *ptr)
{

 return (void *) ptr;
}
# 1914 "include/linux/fs.h" 2


extern loff_t default_llseek(struct file *file, loff_t offset, int origin);

extern loff_t vfs_llseek(struct file *file, loff_t offset, int origin);

extern struct inode * inode_init_always(struct super_block *, struct inode *);
extern void inode_init_once(struct inode *);
extern void inode_add_to_lists(struct super_block *, struct inode *);
extern void iput(struct inode *);
extern struct inode * igrab(struct inode *);
extern ino_t iunique(struct super_block *, ino_t);
extern int inode_needs_sync(struct inode *inode);
extern void generic_delete_inode(struct inode *inode);
extern void generic_drop_inode(struct inode *inode);

extern struct inode *ilookup5_nowait(struct super_block *sb,
  unsigned long hashval, int (*test)(struct inode *, void *),
  void *data);
extern struct inode *ilookup5(struct super_block *sb, unsigned long hashval,
  int (*test)(struct inode *, void *), void *data);
extern struct inode *ilookup(struct super_block *sb, unsigned long ino);

extern struct inode * iget5_locked(struct super_block *, unsigned long, int (*test)(struct inode *, void *), int (*set)(struct inode *, void *), void *);
extern struct inode * iget_locked(struct super_block *, unsigned long);
extern int insert_inode_locked4(struct inode *, unsigned long, int (*test)(struct inode *, void *), void *);
extern int insert_inode_locked(struct inode *);
extern void unlock_new_inode(struct inode *);

extern void __iget(struct inode * inode);
extern void iget_failed(struct inode *);
extern void clear_inode(struct inode *);
extern void destroy_inode(struct inode *);
extern struct inode *new_inode(struct super_block *);
extern int should_remove_suid(struct dentry *);
extern int file_remove_suid(struct file *);

extern void __insert_inode_hash(struct inode *, unsigned long hashval);
extern void remove_inode_hash(struct inode *);
static inline __attribute__((always_inline)) void insert_inode_hash(struct inode *inode) {
 __insert_inode_hash(inode, inode->i_ino);
}

extern struct file * get_empty_filp(void);
extern void file_move(struct file *f, struct list_head *list);
extern void file_kill(struct file *f);

struct bio;
extern void submit_bio(int, struct bio *);
extern int bdev_read_only(struct block_device *);

extern int set_blocksize(struct block_device *, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);
extern int sb_has_dirty_inodes(struct super_block *);

extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_readonly_mmap(struct file *, struct vm_area_struct *);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk);
extern ssize_t generic_file_aio_read(struct kiocb *, const struct iovec *, unsigned long, loff_t);
extern ssize_t generic_file_aio_write(struct kiocb *, const struct iovec *, unsigned long, loff_t);
extern ssize_t generic_file_aio_write_nolock(struct kiocb *, const struct iovec *,
  unsigned long, loff_t);
extern ssize_t generic_file_direct_write(struct kiocb *, const struct iovec *,
  unsigned long *, loff_t, loff_t *, size_t, size_t);
extern ssize_t generic_file_buffered_write(struct kiocb *, const struct iovec *,
  unsigned long, loff_t, loff_t *, size_t, ssize_t);
extern ssize_t do_sync_read(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern ssize_t do_sync_write(struct file *filp, const char *buf, size_t len, loff_t *ppos);
extern int generic_segment_checks(const struct iovec *iov,
  unsigned long *nr_segs, size_t *count, int access_flags);


extern ssize_t generic_file_splice_read(struct file *, loff_t *,
  struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t generic_file_splice_write(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_file_splice_write_nolock(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_splice_sendpage(struct pipe_inode_info *pipe,
  struct file *out, loff_t *, size_t len, unsigned int flags);
extern long do_splice_direct(struct file *in, loff_t *ppos, struct file *out,
  size_t len, unsigned int flags);

extern void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping);
extern loff_t no_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek_unlocked(struct file *file, loff_t offset,
   int origin);
extern int generic_file_open(struct inode * inode, struct file * filp);
extern int nonseekable_open(struct inode * inode, struct file * filp);
# 2016 "include/linux/fs.h"
static inline __attribute__((always_inline)) int xip_truncate_page(struct address_space *mapping, loff_t from)
{
 return 0;
}



ssize_t __blockdev_direct_IO(int rw, struct kiocb *iocb, struct inode *inode,
 struct block_device *bdev, const struct iovec *iov, loff_t offset,
 unsigned long nr_segs, get_block_t get_block, dio_iodone_t end_io,
 int lock_type);

enum {
 DIO_LOCKING = 1,
 DIO_NO_LOCKING,
 DIO_OWN_LOCKING,
};

static inline __attribute__((always_inline)) ssize_t blockdev_direct_IO(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_LOCKING);
}

static inline __attribute__((always_inline)) ssize_t blockdev_direct_IO_no_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_NO_LOCKING);
}

static inline __attribute__((always_inline)) ssize_t blockdev_direct_IO_own_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, const struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_OWN_LOCKING);
}


extern const struct file_operations generic_ro_fops;



extern int vfs_readlink(struct dentry *, char *, int, const char *);
extern int vfs_follow_link(struct nameidata *, const char *);
extern int page_readlink(struct dentry *, char *, int);
extern void *page_follow_link_light(struct dentry *, struct nameidata *);
extern void page_put_link(struct dentry *, struct nameidata *, void *);
extern int __page_symlink(struct inode *inode, const char *symname, int len,
  int nofs);
extern int page_symlink(struct inode *inode, const char *symname, int len);
extern const struct inode_operations page_symlink_inode_operations;
extern int generic_readlink(struct dentry *, char *, int);
extern void generic_fillattr(struct inode *, struct kstat *);
extern int vfs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
void inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_sub_bytes(struct inode *inode, loff_t bytes);
loff_t inode_get_bytes(struct inode *inode);
void inode_set_bytes(struct inode *inode, loff_t bytes);

extern int vfs_readdir(struct file *, filldir_t, void *);

extern int vfs_stat(char *, struct kstat *);
extern int vfs_lstat(char *, struct kstat *);
extern int vfs_stat_fd(int dfd, char *, struct kstat *);
extern int vfs_lstat_fd(int dfd, char *, struct kstat *);
extern int vfs_fstat(unsigned int, struct kstat *);

extern int do_vfs_ioctl(struct file *filp, unsigned int fd, unsigned int cmd,
      unsigned long arg);
extern int __generic_block_fiemap(struct inode *inode,
      struct fiemap_extent_info *fieinfo, u64 start,
      u64 len, get_block_t *get_block);
extern int generic_block_fiemap(struct inode *inode,
    struct fiemap_extent_info *fieinfo, u64 start,
    u64 len, get_block_t *get_block);

extern void get_filesystem(struct file_system_type *fs);
extern void put_filesystem(struct file_system_type *fs);
extern struct file_system_type *get_fs_type(const char *name);
extern struct super_block *get_super(struct block_device *);
extern struct super_block *user_get_super(dev_t);
extern void drop_super(struct super_block *sb);

extern int dcache_dir_open(struct inode *, struct file *);
extern int dcache_dir_close(struct inode *, struct file *);
extern loff_t dcache_dir_lseek(struct file *, loff_t, int);
extern int dcache_readdir(struct file *, void *, filldir_t);
extern int simple_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int simple_statfs(struct dentry *, struct kstatfs *);
extern int simple_link(struct dentry *, struct inode *, struct dentry *);
extern int simple_unlink(struct inode *, struct dentry *);
extern int simple_rmdir(struct inode *, struct dentry *);
extern int simple_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
extern int simple_sync_file(struct file *, struct dentry *, int);
extern int simple_empty(struct dentry *);
extern int simple_readpage(struct file *file, struct page *page);
extern int simple_prepare_write(struct file *file, struct page *page,
   unsigned offset, unsigned to);
extern int simple_write_begin(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned flags,
   struct page **pagep, void **fsdata);
extern int simple_write_end(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned copied,
   struct page *page, void *fsdata);

extern struct dentry *simple_lookup(struct inode *, struct dentry *, struct nameidata *);
extern ssize_t generic_read_dir(struct file *, char *, size_t, loff_t *);
extern const struct file_operations simple_dir_operations;
extern const struct inode_operations simple_dir_inode_operations;
struct tree_descr { char *name; const struct file_operations *ops; int mode; };
struct dentry *d_alloc_name(struct dentry *, const char *);
extern int simple_fill_super(struct super_block *, int, struct tree_descr *);
extern int simple_pin_fs(struct file_system_type *, struct vfsmount **mount, int *count);
extern void simple_release_fs(struct vfsmount **mount, int *count);

extern ssize_t simple_read_from_buffer(void *to, size_t count,
   loff_t *ppos, const void *from, size_t available);
# 2149 "include/linux/fs.h"
extern int inode_change_ok(struct inode *, struct iattr *);
extern int __attribute__((warn_unused_result)) inode_setattr(struct inode *, struct iattr *);

extern void file_update_time(struct file *file);

extern int generic_show_options(struct seq_file *m, struct vfsmount *mnt);
extern void save_mount_options(struct super_block *sb, char *options);

static inline __attribute__((always_inline)) ino_t parent_ino(struct dentry *dentry)
{
 ino_t res;

 do { if (__builtin_types_compatible_p(typeof((&dentry->d_lock)), raw_spinlock_t *)) do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&dentry->d_lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&dentry->d_lock)), spinlock_t *)) rt_spin_lock((spinlock_t *)(&dentry->d_lock)); else __bad_func_type(); } while (0);
 res = dentry->d_parent->d_inode->i_ino;
 do { if (__builtin_types_compatible_p(typeof((&dentry->d_lock)), raw_spinlock_t *)) do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&dentry->d_lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&dentry->d_lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&dentry->d_lock)); else __bad_func_type(); } while (0);
 return res;
}







struct simple_transaction_argresp {
 ssize_t size;
 char data[0];
};



char *simple_transaction_get(struct file *file, const char *buf,
    size_t size);
ssize_t simple_transaction_read(struct file *file, char *buf,
    size_t size, loff_t *pos);
int simple_transaction_release(struct inode *inode, struct file *file);

void simple_transaction_set(struct file *file, size_t n);
# 2218 "include/linux/fs.h"
static inline __attribute__((always_inline)) void __attribute__((format(printf, 1, 2)))
__simple_attr_check_format(const char *fmt, ...)
{

}

int simple_attr_open(struct inode *inode, struct file *file,
       int (*get)(void *, u64 *), int (*set)(void *, u64),
       const char *fmt);
int simple_attr_release(struct inode *inode, struct file *file);
ssize_t simple_attr_read(struct file *file, char *buf,
    size_t len, loff_t *ppos);
ssize_t simple_attr_write(struct file *file, const char *buf,
     size_t len, loff_t *ppos);

struct ctl_table;
int proc_nr_files(struct ctl_table *table, int write, struct file *filp,
    void *buffer, size_t *lenp, loff_t *ppos);

int get_filesystem_list(char * buf);
# 9 "include/linux/pagemap.h" 2

# 1 "include/linux/highmem.h" 1





# 1 "include/linux/uaccess.h" 1




# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/uaccess.h" 1
# 37 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/uaccess.h"
struct exception_table_entry
{
 unsigned long insn, fixup;
};

extern int fixup_exception(struct pt_regs *regs);





extern int __get_user_bad(void);
extern int __put_user_bad(void);
# 62 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/uaccess.h"
static inline __attribute__((always_inline)) void set_fs(mm_segment_t fs)
{
 current_thread_info()->addr_limit = fs;
 do { struct thread_info *thread = current_thread_info(); unsigned int domain = thread->cpu_domain; domain &= ~((3) << (2*(0))); thread->cpu_domain = domain | ((fs ? 1 : 3) << (2*(0))); do { __asm__ __volatile__( "mcr	p15, 0, %0, c3, c0	@ set domain" : : "r" (thread->cpu_domain)); __asm__ __volatile__ ("mcr p15, 0, %0, c7, c5, 4" : : "r" (0) : "memory"); } while (0); } while (0);
}
# 99 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/uaccess.h"
extern int __get_user_1(void *);
extern int __get_user_2(void *);
extern int __get_user_4(void *);
# 132 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/uaccess.h"
extern int __put_user_1(void *, unsigned int);
extern int __put_user_2(void *, unsigned int);
extern int __put_user_4(void *, unsigned int);
extern int __put_user_8(void *, unsigned long long);
# 387 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/uaccess.h"
extern unsigned long __attribute__((warn_unused_result)) __copy_from_user(void *to, const void *from, unsigned long n);
extern unsigned long __attribute__((warn_unused_result)) __copy_to_user(void *to, const void *from, unsigned long n);
extern unsigned long __attribute__((warn_unused_result)) __clear_user(void *addr, unsigned long n);






extern unsigned long __attribute__((warn_unused_result)) __strncpy_from_user(char *to, const char *from, unsigned long count);
extern unsigned long __attribute__((warn_unused_result)) __strnlen_user(const char *s, long n);

static inline __attribute__((always_inline)) unsigned long __attribute__((warn_unused_result)) copy_from_user(void *to, const void *from, unsigned long n)
{
 if ((({ unsigned long flag, roksum; (void)0; __asm__("adds %1, %2, %3; sbcccs %1, %1, %0; movcc %0, #0" : "=&r" (flag), "=&r" (roksum) : "r" (from), "Ir" (n), "0" (current_thread_info()->addr_limit) : "cc"); flag; }) == 0))
  n = __copy_from_user(to, from, n);
 else
  ({ void *__p = (to); size_t __n = n; if ((__n) != 0) { if (__builtin_constant_p((0)) && (0) == 0) __memzero((__p),(__n)); else memset((__p),(0),(__n)); } (__p); });
 return n;
}

static inline __attribute__((always_inline)) unsigned long __attribute__((warn_unused_result)) copy_to_user(void *to, const void *from, unsigned long n)
{
 if ((({ unsigned long flag, roksum; (void)0; __asm__("adds %1, %2, %3; sbcccs %1, %1, %0; movcc %0, #0" : "=&r" (flag), "=&r" (roksum) : "r" (to), "Ir" (n), "0" (current_thread_info()->addr_limit) : "cc"); flag; }) == 0))
  n = __copy_to_user(to, from, n);
 return n;
}




static inline __attribute__((always_inline)) unsigned long __attribute__((warn_unused_result)) clear_user(void *to, unsigned long n)
{
 if ((({ unsigned long flag, roksum; (void)0; __asm__("adds %1, %2, %3; sbcccs %1, %1, %0; movcc %0, #0" : "=&r" (flag), "=&r" (roksum) : "r" (to), "Ir" (n), "0" (current_thread_info()->addr_limit) : "cc"); flag; }) == 0))
  n = __clear_user(to, n);
 return n;
}

static inline __attribute__((always_inline)) long __attribute__((warn_unused_result)) strncpy_from_user(char *dst, const char *src, long count)
{
 long res = -14;
 if ((({ unsigned long flag, roksum; (void)0; __asm__("adds %1, %2, %3; sbcccs %1, %1, %0; movcc %0, #0" : "=&r" (flag), "=&r" (roksum) : "r" (src), "Ir" (1), "0" (current_thread_info()->addr_limit) : "cc"); flag; }) == 0))
  res = __strncpy_from_user(dst, src, count);
 return res;
}



static inline __attribute__((always_inline)) long __attribute__((warn_unused_result)) strnlen_user(const char *s, long n)
{
 unsigned long res = 0;

 if (({ unsigned long flag; __asm__("cmp %2, %0; movlo %0, #0" : "=&r" (flag) : "0" (current_thread_info()->addr_limit), "r" (s) : "cc"); (flag == 0); }))
  res = __strnlen_user(s, n);

 return res;
}
# 6 "include/linux/uaccess.h" 2





extern void pagefault_disable(void);
extern void pagefault_enable(void);



static inline __attribute__((always_inline)) unsigned long __copy_from_user_inatomic_nocache(void *to,
    const void *from, unsigned long n)
{
 return __copy_from_user(to, from, n);
}

static inline __attribute__((always_inline)) unsigned long __copy_from_user_nocache(void *to,
    const void *from, unsigned long n)
{
 return __copy_from_user(to, from, n);
}
# 69 "include/linux/uaccess.h"
extern long probe_kernel_read(void *dst, void *src, size_t size);
# 80 "include/linux/uaccess.h"
extern long probe_kernel_write(void *dst, void *src, size_t size);
# 7 "include/linux/highmem.h" 2

# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cacheflush.h" 1
# 15 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cacheflush.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/glue.h" 1
# 16 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cacheflush.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/shmparam.h" 1
# 17 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cacheflush.h" 2
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cachetype.h" 1
# 10 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cachetype.h"
extern unsigned int cacheid;
# 46 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cachetype.h"
static inline __attribute__((always_inline)) unsigned int __attribute__((pure)) cacheid_is(unsigned int mask)
{
 return ((0) & mask) |
        (~((1 << 0)) & (~(1 << 0)) & mask & cacheid);
}
# 18 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cacheflush.h" 2
# 191 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cacheflush.h"
struct cpu_cache_fns {
 void (*flush_kern_all)(void);
 void (*flush_user_all)(void);
 void (*flush_user_range)(unsigned long, unsigned long, unsigned int);

 void (*coherent_kern_range)(unsigned long, unsigned long);
 void (*coherent_user_range)(unsigned long, unsigned long);
 void (*flush_kern_dcache_page)(void *);

 void (*dma_inv_range)(const void *, const void *);
 void (*dma_clean_range)(const void *, const void *);
 void (*dma_flush_range)(const void *, const void *);
};

struct outer_cache_fns {
 void (*inv_range)(unsigned long, unsigned long);
 void (*clean_range)(unsigned long, unsigned long);
 void (*flush_range)(unsigned long, unsigned long);
};






extern struct cpu_cache_fns cpu_cache;
# 285 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cacheflush.h"
extern struct outer_cache_fns outer_cache;

static inline __attribute__((always_inline)) void outer_inv_range(unsigned long start, unsigned long end)
{
 if (outer_cache.inv_range)
  outer_cache.inv_range(start, end);
}
static inline __attribute__((always_inline)) void outer_clean_range(unsigned long start, unsigned long end)
{
 if (outer_cache.clean_range)
  outer_cache.clean_range(start, end);
}
static inline __attribute__((always_inline)) void outer_flush_range(unsigned long start, unsigned long end)
{
 if (outer_cache.flush_range)
  outer_cache.flush_range(start, end);
}
# 375 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cacheflush.h"
extern void flush_cache_mm(struct mm_struct *mm);
extern void flush_cache_range(struct vm_area_struct *vma, unsigned long start, unsigned long end);
extern void flush_cache_page(struct vm_area_struct *vma, unsigned long user_addr, unsigned long pfn);
extern void flush_ptrace_access(struct vm_area_struct *vma, struct page *page,
    unsigned long uaddr, void *kaddr,
    unsigned long len, int write);
# 417 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cacheflush.h"
extern void flush_dcache_page(struct page *);

extern void __flush_dcache_page(struct address_space *mapping, struct page *page);






static inline __attribute__((always_inline)) void __flush_icache_all(void)
{




 asm("mcr	p15, 0, %0, c7, c5, 0	@ invalidate I-cache\n"
     :
     : "r" (0));
}


static inline __attribute__((always_inline)) void flush_anon_page(struct vm_area_struct *vma,
    struct page *page, unsigned long vmaddr)
{
 extern void __flush_anon_page(struct vm_area_struct *vma,
    struct page *, unsigned long);
 if (PageAnon(page))
  __flush_anon_page(vma, page, vmaddr);
}
# 461 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cacheflush.h"
static inline __attribute__((always_inline)) void flush_ioremap_region(unsigned long phys, void *virt,
 unsigned offset, size_t size)
{
 const void *start = (void *)virt + offset;
 cpu_cache.dma_inv_range(start, start + size);
}
# 513 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/cacheflush.h"
static inline __attribute__((always_inline)) unsigned long __v2p(unsigned long v)
{
 pgd_t *pgd;
 pmd_t *pmd;
        pte_t *pte;
 unsigned long p;

 pgd = ((&init_mm)->pgd+((v) >> 21));
 pmd = ((pmd_t *)(pgd));
 if((!(*pmd)))
  return 0xdeadbeef;

 if (((*pmd) & (3 << 0)) == (2 << 0)){
  p = (*pmd & (~((1UL << 20)-1))) | (v & (~(~((1UL << 20)-1))));
  return p;
 }

 pte = (pmd_page_vaddr(*(pmd)) + (((v) >> 12) & (512 - 1)));
 p = ((*pte) >> 12) << 12 | (v & ~((~((1UL << 12)-1))));

 return(p);
}


static inline __attribute__((always_inline)) void vm_outer_flush_range(unsigned long start, unsigned long end)
{
 unsigned long p = __v2p(start);

 if((p != 0xdeadbeef))
  outer_flush_range(p, p + (end - start));
}






static inline __attribute__((always_inline)) void flush_cache_vmap(unsigned long start, unsigned long end)
{
 if (!cacheid_is((1 << 1)))
  cpu_cache.flush_kern_all();
 else




  __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 4" : : "r" (0) : "memory");
 vm_outer_flush_range(start, end);
}

static inline __attribute__((always_inline)) void flush_cache_vunmap(unsigned long start, unsigned long end)
{
 if (!cacheid_is((1 << 1)))
  cpu_cache.flush_kern_all();
 vm_outer_flush_range(start, end);
}
# 9 "include/linux/highmem.h" 2
# 17 "include/linux/highmem.h"
static inline __attribute__((always_inline)) void flush_kernel_dcache_page(struct page *page)
{
}
# 34 "include/linux/highmem.h"
static inline __attribute__((always_inline)) unsigned int nr_free_highpages(void) { return 0; }




static inline __attribute__((always_inline)) void *kmap(struct page *page)
{
 do { __might_sleep("include/linux/highmem.h", 41); do { } while (0); } while (0);
 return lowmem_page_address(page);
}



# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/kmap_types.h" 1






enum km_type {
 KM_BOUNCE_READ,
 KM_SKB_SUNRPC_DATA,
 KM_SKB_DATA_SOFTIRQ,
 KM_USER0,
 KM_USER1,
 KM_BIO_SRC_IRQ,
 KM_BIO_DST_IRQ,
 KM_PTE0,
 KM_PTE1,
 KM_IRQ0,
 KM_IRQ1,
 KM_SOFTIRQ0,
 KM_SOFTIRQ1,
 KM_TYPE_NR
};
# 48 "include/linux/highmem.h" 2

static inline __attribute__((always_inline)) void *kmap_atomic(struct page *page, enum km_type idx)
{
 pagefault_disable();
 return lowmem_page_address(page);
}
# 90 "include/linux/highmem.h"
static inline __attribute__((always_inline)) struct page *
__alloc_zeroed_user_highpage(gfp_t movableflags,
   struct vm_area_struct *vma,
   unsigned long vaddr)
{
 struct page *page = alloc_pages_node((((void)(0),0)), ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u) | (( gfp_t)0x20000u) | (( gfp_t)0x02u)) | movableflags, 0);


 if (page)
  cpu_user.cpu_clear_user_highpage(page, vaddr);

 return page;
}
# 113 "include/linux/highmem.h"
static inline __attribute__((always_inline)) struct page *
alloc_zeroed_user_highpage_movable(struct vm_area_struct *vma,
     unsigned long vaddr)
{
 return __alloc_zeroed_user_highpage((( gfp_t)0x100000u), vma, vaddr);
}

static inline __attribute__((always_inline)) void clear_highpage(struct page *page)
{
 void *kaddr = kmap_atomic(page, KM_USER0);
 ({ void *__p = ((void *)(kaddr)); size_t __n = (1UL << 12); if ((__n) != 0) { if (__builtin_constant_p((0)) && (0) == 0) __memzero((__p),(__n)); else memset((__p),(0),(__n)); } (__p); });
 do { pagefault_enable(); } while (0);
}

static inline __attribute__((always_inline)) void zero_user_segments(struct page *page,
 unsigned start1, unsigned end1,
 unsigned start2, unsigned end2)
{
 void *kaddr = kmap_atomic(page, KM_USER0);

 do { if (__builtin_expect(!!(end1 > (1UL << 12) || end2 > (1UL << 12)), 0)) __bug("include/linux/highmem.h", 133); } while(0);

 if (end1 > start1)
  ({ void *__p = (kaddr + start1); size_t __n = end1 - start1; if ((__n) != 0) { if (__builtin_constant_p((0)) && (0) == 0) __memzero((__p),(__n)); else memset((__p),(0),(__n)); } (__p); });

 if (end2 > start2)
  ({ void *__p = (kaddr + start2); size_t __n = end2 - start2; if ((__n) != 0) { if (__builtin_constant_p((0)) && (0) == 0) __memzero((__p),(__n)); else memset((__p),(0),(__n)); } (__p); });

 do { pagefault_enable(); } while (0);
 flush_dcache_page(page);
}

static inline __attribute__((always_inline)) void zero_user_segment(struct page *page,
 unsigned start, unsigned end)
{
 zero_user_segments(page, start, end, 0, 0);
}

static inline __attribute__((always_inline)) void zero_user(struct page *page,
 unsigned start, unsigned size)
{
 zero_user_segments(page, start, start + size, 0, 0);
}

static inline __attribute__((always_inline)) void __attribute__((deprecated)) memclear_highpage_flush(struct page *page,
   unsigned int offset, unsigned int size)
{
 zero_user(page, offset, size);
}
# 179 "include/linux/highmem.h"
static inline __attribute__((always_inline)) void copy_highpage(struct page *to, struct page *from)
{
 char *vfrom, *vto;

 vfrom = kmap_atomic(from, KM_USER0);
 vto = kmap_atomic(to, KM_USER1);
 copy_page(vto, vfrom);
 do { pagefault_enable(); } while (0);
 do { pagefault_enable(); } while (0);
}
# 11 "include/linux/pagemap.h" 2
# 25 "include/linux/pagemap.h"
static inline __attribute__((always_inline)) void mapping_set_error(struct address_space *mapping, int error)
{
 if (__builtin_expect(!!(error), 0)) {
  if (error == -28)
   (__builtin_constant_p((22 + 1)) ? ____atomic_set_bit((22 + 1), &mapping->flags) : _set_bit_le((22 + 1),&mapping->flags));
  else
   (__builtin_constant_p((22 + 0)) ? ____atomic_set_bit((22 + 0), &mapping->flags) : _set_bit_le((22 + 0),&mapping->flags));
 }
}




static inline __attribute__((always_inline)) void mapping_set_unevictable(struct address_space *mapping)
{
 (__builtin_constant_p((22 + 2)) ? ____atomic_set_bit((22 + 2), &mapping->flags) : _set_bit_le((22 + 2),&mapping->flags));
}

static inline __attribute__((always_inline)) void mapping_clear_unevictable(struct address_space *mapping)
{
 (__builtin_constant_p((22 + 2)) ? ____atomic_clear_bit((22 + 2), &mapping->flags) : _clear_bit_le((22 + 2),&mapping->flags));
}

static inline __attribute__((always_inline)) int mapping_unevictable(struct address_space *mapping)
{
 if (__builtin_expect(!!(mapping), 1))
  return test_bit((22 + 2), &mapping->flags);
 return !!mapping;
}
# 63 "include/linux/pagemap.h"
static inline __attribute__((always_inline)) gfp_t mapping_gfp_mask(struct address_space * mapping)
{
 return ( gfp_t)mapping->flags & (( gfp_t)((1 << 22) - 1));
}





static inline __attribute__((always_inline)) void mapping_set_gfp_mask(struct address_space *m, gfp_t mask)
{
 m->flags = (m->flags & ~( unsigned long)(( gfp_t)((1 << 22) - 1))) |
    ( unsigned long)mask;
}
# 93 "include/linux/pagemap.h"
void release_pages(struct page **pages, int nr, int cold);
# 139 "include/linux/pagemap.h"
static inline __attribute__((always_inline)) int page_cache_get_speculative(struct page *page)
{
 do { } while (0);
# 160 "include/linux/pagemap.h"
 if (__builtin_expect(!!(!get_page_unless_zero(page)), 0)) {





  return 0;
 }

 do { } while (0);

 return 1;
}




static inline __attribute__((always_inline)) int page_cache_add_speculative(struct page *page, int count)
{
 do { } while (0);
# 189 "include/linux/pagemap.h"
 if (__builtin_expect(!!(!atomic_add_unless(&page->_count, count, 0)), 0))
  return 0;

 do { } while (0);

 return 1;
}

static inline __attribute__((always_inline)) int page_freeze_refs(struct page *page, int count)
{
 return __builtin_expect(!!(atomic_cmpxchg(&page->_count, count, 0) == count), 1);
}

static inline __attribute__((always_inline)) void page_unfreeze_refs(struct page *page, int count)
{
 do { } while (0);
 do { } while (0);

 atomic_set(&page->_count, count);
}




static inline __attribute__((always_inline)) struct page *__page_cache_alloc(gfp_t gfp)
{
 return alloc_pages_node((((void)(0),0)), gfp, 0);
}


static inline __attribute__((always_inline)) struct page *page_cache_alloc(struct address_space *x)
{
 return __page_cache_alloc(mapping_gfp_mask(x));
}

static inline __attribute__((always_inline)) struct page *page_cache_alloc_cold(struct address_space *x)
{
 return __page_cache_alloc(mapping_gfp_mask(x)|(( gfp_t)0x100u));
}

typedef int filler_t(void *, struct page *);

extern struct page * find_get_page(struct address_space *mapping,
    unsigned long index);
extern struct page * find_lock_page(struct address_space *mapping,
    unsigned long index);
extern struct page * find_or_create_page(struct address_space *mapping,
    unsigned long index, gfp_t gfp_mask);
unsigned find_get_pages(struct address_space *mapping, unsigned long start,
   unsigned int nr_pages, struct page **pages);
unsigned find_get_pages_contig(struct address_space *mapping, unsigned long start,
          unsigned int nr_pages, struct page **pages);
unsigned find_get_pages_tag(struct address_space *mapping, unsigned long *index,
   int tag, unsigned int nr_pages, struct page **pages);

struct page *grab_cache_page_write_begin(struct address_space *mapping,
   unsigned long index, unsigned flags);




static inline __attribute__((always_inline)) struct page *grab_cache_page(struct address_space *mapping,
        unsigned long index)
{
 return find_or_create_page(mapping, index, mapping_gfp_mask(mapping));
}

extern struct page * grab_cache_page_nowait(struct address_space *mapping,
    unsigned long index);
extern struct page * read_cache_page_async(struct address_space *mapping,
    unsigned long index, filler_t *filler,
    void *data);
extern struct page * read_cache_page(struct address_space *mapping,
    unsigned long index, filler_t *filler,
    void *data);
extern int read_cache_pages(struct address_space *mapping,
  struct list_head *pages, filler_t *filler, void *data);

static inline __attribute__((always_inline)) struct page *read_mapping_page_async(
      struct address_space *mapping,
           unsigned long index, void *data)
{
 filler_t *filler = (filler_t *)mapping->a_ops->readpage;
 return read_cache_page_async(mapping, index, filler, data);
}

static inline __attribute__((always_inline)) struct page *read_mapping_page(struct address_space *mapping,
          unsigned long index, void *data)
{
 filler_t *filler = (filler_t *)mapping->a_ops->readpage;
 return read_cache_page(mapping, index, filler, data);
}




static inline __attribute__((always_inline)) loff_t page_offset(struct page *page)
{
 return ((loff_t)page->index) << 12;
}

static inline __attribute__((always_inline)) unsigned long linear_page_index(struct vm_area_struct *vma,
     unsigned long address)
{
 unsigned long pgoff = (address - vma->vm_start) >> 12;
 pgoff += vma->vm_pgoff;
 return pgoff >> (12 - 12);
}

extern void __lock_page(struct page *page);
extern int __lock_page_killable(struct page *page);
extern void __lock_page_nosync(struct page *page);
extern void unlock_page(struct page *page);

static inline __attribute__((always_inline)) void __set_page_locked(struct page *page)
{
 __set_bit(PG_locked, &page->flags);
}

static inline __attribute__((always_inline)) void __clear_page_locked(struct page *page)
{
 __clear_bit(PG_locked, &page->flags);
}

static inline __attribute__((always_inline)) int trylock_page(struct page *page)
{
 return (__builtin_expect(!!(!(__builtin_constant_p(PG_locked) ? ____atomic_test_and_set_bit(PG_locked, &page->flags) : _test_and_set_bit_le(PG_locked,&page->flags))), 1));
}




static inline __attribute__((always_inline)) void lock_page(struct page *page)
{
 do { __might_sleep("include/linux/pagemap.h", 323); do { } while (0); } while (0);
 if (!trylock_page(page))
  __lock_page(page);
}






static inline __attribute__((always_inline)) int lock_page_killable(struct page *page)
{
 do { __might_sleep("include/linux/pagemap.h", 335); do { } while (0); } while (0);
 if (!trylock_page(page))
  return __lock_page_killable(page);
 return 0;
}





static inline __attribute__((always_inline)) void lock_page_nosync(struct page *page)
{
 do { __might_sleep("include/linux/pagemap.h", 347); do { } while (0); } while (0);
 if (!trylock_page(page))
  __lock_page_nosync(page);
}





extern void wait_on_page_bit(struct page *page, int bit_nr);
# 365 "include/linux/pagemap.h"
static inline __attribute__((always_inline)) void wait_on_page_locked(struct page *page)
{
 if (PageLocked(page))
  wait_on_page_bit(page, PG_locked);
}




static inline __attribute__((always_inline)) void wait_on_page_writeback(struct page *page)
{
 if (PageWriteback(page))
  wait_on_page_bit(page, PG_writeback);
}

extern void end_page_writeback(struct page *page);







static inline __attribute__((always_inline)) int fault_in_pages_writeable(char *uaddr, int size)
{
 int ret;

 if (__builtin_expect(!!(size == 0), 0))
  return 0;





 ret = ({ long __pu_err = 0; do { unsigned long __pu_addr = (unsigned long)((uaddr)); __typeof__(*((uaddr))) __pu_val = ((0)); (void)0; switch (sizeof(*((uaddr)))) { case 1: __asm__ __volatile__( "1:	strbt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__pu_err) : "r" (__pu_val), "r" (__pu_addr), "i" (-14) : "cc"); break; case 2: ({ unsigned long __temp = (unsigned long)(__pu_val); __asm__ __volatile__( "1:	strbt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__pu_err) : "r" (__temp), "r" (__pu_addr), "i" (-14) : "cc"); __asm__ __volatile__( "1:	strbt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__pu_err) : "r" (__temp >> 8), "r" (__pu_addr + 1), "i" (-14) : "cc"); }); break; case 4: __asm__ __volatile__( "1:	strt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__pu_err) : "r" (__pu_val), "r" (__pu_addr), "i" (-14) : "cc"); break; case 8: __asm__ __volatile__( "1:	strt	" "%Q2" ", [%1], #4\n" "2:	strt	" "%R2" ", [%1]\n" "3:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "4:	mov	%0, %3\n" "	b	3b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 4b\n" "	.long	2b, 4b\n" "	.previous" : "+r" (__pu_err), "+r" (__pu_addr) : "r" (__pu_val), "i" (-14) : "cc"); break; default: __put_user_bad(); } } while (0); __pu_err; });
 if (ret == 0) {
  char *end = uaddr + size - 1;





  if (((unsigned long)uaddr & (~((1UL << 12)-1))) !=
    ((unsigned long)end & (~((1UL << 12)-1))))
    ret = ({ long __pu_err = 0; do { unsigned long __pu_addr = (unsigned long)((end)); __typeof__(*((end))) __pu_val = ((0)); (void)0; switch (sizeof(*((end)))) { case 1: __asm__ __volatile__( "1:	strbt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__pu_err) : "r" (__pu_val), "r" (__pu_addr), "i" (-14) : "cc"); break; case 2: ({ unsigned long __temp = (unsigned long)(__pu_val); __asm__ __volatile__( "1:	strbt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__pu_err) : "r" (__temp), "r" (__pu_addr), "i" (-14) : "cc"); __asm__ __volatile__( "1:	strbt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__pu_err) : "r" (__temp >> 8), "r" (__pu_addr + 1), "i" (-14) : "cc"); }); break; case 4: __asm__ __volatile__( "1:	strt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__pu_err) : "r" (__pu_val), "r" (__pu_addr), "i" (-14) : "cc"); break; case 8: __asm__ __volatile__( "1:	strt	" "%Q2" ", [%1], #4\n" "2:	strt	" "%R2" ", [%1]\n" "3:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "4:	mov	%0, %3\n" "	b	3b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 4b\n" "	.long	2b, 4b\n" "	.previous" : "+r" (__pu_err), "+r" (__pu_addr) : "r" (__pu_val), "i" (-14) : "cc"); break; default: __put_user_bad(); } } while (0); __pu_err; });
 }
 return ret;
}

static inline __attribute__((always_inline)) int fault_in_pages_readable(const char *uaddr, int size)
{
 volatile char c;
 int ret;

 if (__builtin_expect(!!(size == 0), 0))
  return 0;

 ret = ({ long __gu_err = 0; do { unsigned long __gu_addr = (unsigned long)((uaddr)); unsigned long __gu_val; (void)0; switch (sizeof(*((uaddr)))) { case 1: __asm__ __volatile__( "1:	ldrbt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	mov	%1, #0\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__gu_err), "=&r" (__gu_val) : "r" (__gu_addr), "i" (-14) : "cc"); break; case 2: ({ unsigned long __b1, __b2; __asm__ __volatile__( "1:	ldrbt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	mov	%1, #0\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__gu_err), "=&r" (__b1) : "r" (__gu_addr), "i" (-14) : "cc"); __asm__ __volatile__( "1:	ldrbt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	mov	%1, #0\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__gu_err), "=&r" (__b2) : "r" (__gu_addr + 1), "i" (-14) : "cc"); (__gu_val) = __b1 | (__b2 << 8); }); break; case 4: __asm__ __volatile__( "1:	ldrt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	mov	%1, #0\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__gu_err), "=&r" (__gu_val) : "r" (__gu_addr), "i" (-14) : "cc"); break; default: (__gu_val) = __get_user_bad(); } ((c)) = (__typeof__(*((uaddr))))__gu_val; } while (0); __gu_err; });
 if (ret == 0) {
  const char *end = uaddr + size - 1;

  if (((unsigned long)uaddr & (~((1UL << 12)-1))) !=
    ((unsigned long)end & (~((1UL << 12)-1))))
    ret = ({ long __gu_err = 0; do { unsigned long __gu_addr = (unsigned long)((end)); unsigned long __gu_val; (void)0; switch (sizeof(*((end)))) { case 1: __asm__ __volatile__( "1:	ldrbt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	mov	%1, #0\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__gu_err), "=&r" (__gu_val) : "r" (__gu_addr), "i" (-14) : "cc"); break; case 2: ({ unsigned long __b1, __b2; __asm__ __volatile__( "1:	ldrbt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	mov	%1, #0\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__gu_err), "=&r" (__b1) : "r" (__gu_addr), "i" (-14) : "cc"); __asm__ __volatile__( "1:	ldrbt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	mov	%1, #0\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__gu_err), "=&r" (__b2) : "r" (__gu_addr + 1), "i" (-14) : "cc"); (__gu_val) = __b1 | (__b2 << 8); }); break; case 4: __asm__ __volatile__( "1:	ldrt	%1,[%2]\n" "2:\n" "	.section .fixup,\"ax\"\n" "	.align	2\n" "3:	mov	%0, %3\n" "	mov	%1, #0\n" "	b	2b\n" "	.previous\n" "	.section __ex_table,\"a\"\n" "	.align	3\n" "	.long	1b, 3b\n" "	.previous" : "+r" (__gu_err), "=&r" (__gu_val) : "r" (__gu_addr), "i" (-14) : "cc"); break; default: (__gu_val) = __get_user_bad(); } ((c)) = (__typeof__(*((end))))__gu_val; } while (0); __gu_err; });
 }
 return ret;
}

int add_to_page_cache_locked(struct page *page, struct address_space *mapping,
    unsigned long index, gfp_t gfp_mask);
int add_to_page_cache_lru(struct page *page, struct address_space *mapping,
    unsigned long index, gfp_t gfp_mask);
extern void remove_from_page_cache(struct page *page);
extern void __remove_from_page_cache(struct page *page);





static inline __attribute__((always_inline)) int add_to_page_cache(struct page *page,
  struct address_space *mapping, unsigned long offset, gfp_t gfp_mask)
{
 int error;

 __set_page_locked(page);
 error = add_to_page_cache_locked(page, mapping, offset, gfp_mask);
 if (__builtin_expect(!!(error), 0))
  __clear_page_locked(page);
 return error;
}
# 22 "mm/page_alloc.c" 2

# 1 "include/linux/bootmem.h" 1







# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/dma.h" 1
# 9 "include/linux/bootmem.h" 2





extern unsigned long max_low_pfn;
extern unsigned long min_low_pfn;




extern unsigned long max_pfn;
# 30 "include/linux/bootmem.h"
typedef struct bootmem_data {
 unsigned long node_min_pfn;
 unsigned long node_low_pfn;
 void *node_bootmem_map;
 unsigned long last_end_off;
 unsigned long hint_idx;
 struct list_head list;
} bootmem_data_t;

extern bootmem_data_t bootmem_node_data[];

extern unsigned long bootmem_bootmap_pages(unsigned long);

extern unsigned long init_bootmem_node(pg_data_t *pgdat,
           unsigned long freepfn,
           unsigned long startpfn,
           unsigned long endpfn);
extern unsigned long init_bootmem(unsigned long addr, unsigned long memend);

extern unsigned long free_all_bootmem_node(pg_data_t *pgdat);
extern unsigned long free_all_bootmem(void);

extern void free_bootmem_node(pg_data_t *pgdat,
         unsigned long addr,
         unsigned long size);
extern void free_bootmem(unsigned long addr, unsigned long size);
# 68 "include/linux/bootmem.h"
extern int reserve_bootmem(unsigned long addr,
      unsigned long size,
      int flags);
extern int reserve_bootmem_node(pg_data_t *pgdat,
    unsigned long physaddr,
    unsigned long size,
    int flags);

extern void *__alloc_bootmem(unsigned long size,
        unsigned long align,
        unsigned long goal);
extern void *__alloc_bootmem_nopanic(unsigned long size,
         unsigned long align,
         unsigned long goal);
extern void *__alloc_bootmem_node(pg_data_t *pgdat,
      unsigned long size,
      unsigned long align,
      unsigned long goal);
extern void *__alloc_bootmem_node_nopanic(pg_data_t *pgdat,
      unsigned long size,
      unsigned long align,
      unsigned long goal);
extern void *__alloc_bootmem_low(unsigned long size,
     unsigned long align,
     unsigned long goal);
extern void *__alloc_bootmem_low_node(pg_data_t *pgdat,
          unsigned long size,
          unsigned long align,
          unsigned long goal);
# 120 "include/linux/bootmem.h"
extern int reserve_bootmem_generic(unsigned long addr, unsigned long size,
       int flags);

extern void *alloc_bootmem_section(unsigned long size,
       unsigned long section_nr);




static inline __attribute__((always_inline)) void *alloc_remap(int nid, unsigned long size)
{
 return ((void *)0);
}


extern unsigned long __attribute__ ((__section__(".meminit.data"))) nr_kernel_pages;
extern unsigned long __attribute__ ((__section__(".meminit.data"))) nr_all_pages;

extern void *alloc_large_system_hash(const char *tablename,
         unsigned long bucketsize,
         unsigned long numentries,
         int scale,
         int flags,
         unsigned int *_hash_shift,
         unsigned int *_hash_mask,
         unsigned long limit);
# 157 "include/linux/bootmem.h"
extern int hashdist;
# 24 "mm/page_alloc.c" 2


# 1 "include/linux/kmemcheck.h" 1
# 85 "include/linux/kmemcheck.h"
static inline __attribute__((always_inline)) void kmemcheck_init(void)
{
}

static inline __attribute__((always_inline)) void
kmemcheck_alloc_shadow(struct page *page, int order, gfp_t flags, int node)
{
}

static inline __attribute__((always_inline)) void
kmemcheck_free_shadow(struct page *page, int order)
{
}

static inline __attribute__((always_inline)) void
kmemcheck_slab_alloc(struct kmem_cache *s, gfp_t gfpflags, void *object,
       size_t size)
{
}

static inline __attribute__((always_inline)) void kmemcheck_slab_free(struct kmem_cache *s, void *object,
           size_t size)
{
}

static inline __attribute__((always_inline)) void kmemcheck_pagealloc_alloc(struct page *p,
 unsigned int order, gfp_t gfpflags)
{
}

static inline __attribute__((always_inline)) bool kmemcheck_page_is_tracked(struct page *p)
{
 return false;
}

static inline __attribute__((always_inline)) void kmemcheck_mark_unallocated(void *address, unsigned int n)
{
}

static inline __attribute__((always_inline)) void kmemcheck_mark_uninitialized(void *address, unsigned int n)
{
}

static inline __attribute__((always_inline)) void kmemcheck_mark_initialized(void *address, unsigned int n)
{
}

static inline __attribute__((always_inline)) void kmemcheck_mark_freed(void *address, unsigned int n)
{
}

static inline __attribute__((always_inline)) void kmemcheck_mark_unallocated_pages(struct page *p,
          unsigned int n)
{
}

static inline __attribute__((always_inline)) void kmemcheck_mark_uninitialized_pages(struct page *p,
            unsigned int n)
{
}

static inline __attribute__((always_inline)) void kmemcheck_mark_initialized_pages(struct page *p,
          unsigned int n)
{
}
# 27 "mm/page_alloc.c" 2

# 1 "include/linux/suspend.h" 1
# 19 "include/linux/suspend.h"
static inline __attribute__((always_inline)) void pm_set_vt_switch(int do_switch)
{
}

static inline __attribute__((always_inline)) int pm_prepare_console(void)
{
 return 0;
}

static inline __attribute__((always_inline)) void pm_restore_console(void)
{
}


typedef int suspend_state_t;
# 95 "include/linux/suspend.h"
struct platform_suspend_ops {
 int (*valid)(suspend_state_t state);
 int (*begin)(suspend_state_t state);
 int (*prepare)(void);
 int (*enter)(suspend_state_t state);
 void (*finish)(void);
 void (*end)(void);
 void (*recover)(void);
};
# 135 "include/linux/suspend.h"
static inline __attribute__((always_inline)) void suspend_set_ops(struct platform_suspend_ops *ops) {}
static inline __attribute__((always_inline)) int pm_suspend(suspend_state_t state) { return -38; }






struct pbe {
 void *address;
 void *orig_address;
 struct pbe *next;
};


extern void mark_free_pages(struct zone *zone);
# 204 "include/linux/suspend.h"
struct platform_hibernation_ops {
 int (*begin)(void);
 void (*end)(void);
 int (*pre_snapshot)(void);
 void (*finish)(void);
 int (*prepare)(void);
 int (*enter)(void);
 void (*leave)(void);
 int (*pre_restore)(void);
 void (*restore_cleanup)(void);
 void (*recover)(void);
};
# 242 "include/linux/suspend.h"
static inline __attribute__((always_inline)) int swsusp_page_is_forbidden(struct page *p) { return 0; }
static inline __attribute__((always_inline)) void swsusp_set_page_free(struct page *p) {}
static inline __attribute__((always_inline)) void swsusp_unset_page_free(struct page *p) {}

static inline __attribute__((always_inline)) void hibernation_set_ops(struct platform_hibernation_ops *ops) {}
static inline __attribute__((always_inline)) int hibernate(void) { return -38; }
static inline __attribute__((always_inline)) int hibernate_nvs_register(unsigned long a, unsigned long b)
{
 return 0;
}
static inline __attribute__((always_inline)) int hibernate_nvs_alloc(void) { return 0; }
static inline __attribute__((always_inline)) void hibernate_nvs_free(void) {}
static inline __attribute__((always_inline)) void hibernate_nvs_save(void) {}
static inline __attribute__((always_inline)) void hibernate_nvs_restore(void) {}
static inline __attribute__((always_inline)) bool system_entering_hibernation(void) { return false; }
# 274 "include/linux/suspend.h"
static inline __attribute__((always_inline)) int register_pm_notifier(struct notifier_block *nb)
{
 return 0;
}

static inline __attribute__((always_inline)) int unregister_pm_notifier(struct notifier_block *nb)
{
 return 0;
}





static inline __attribute__((always_inline)) void register_nosave_region(unsigned long b, unsigned long e)
{
}
static inline __attribute__((always_inline)) void register_nosave_region_late(unsigned long b, unsigned long e)
{
}


extern struct mutex pm_mutex;
# 29 "mm/page_alloc.c" 2
# 1 "include/linux/pagevec.h" 1
# 14 "include/linux/pagevec.h"
struct page;
struct address_space;

struct pagevec {
 unsigned long nr;
 unsigned long cold;
 struct page *pages[8];
};

void __pagevec_release(struct pagevec *pvec);
void __pagevec_free(struct pagevec *pvec);
void ____pagevec_lru_add(struct pagevec *pvec, enum lru_list lru);
void pagevec_strip(struct pagevec *pvec);
void pagevec_swap_free(struct pagevec *pvec);
unsigned pagevec_lookup(struct pagevec *pvec, struct address_space *mapping,
  unsigned long start, unsigned nr_pages);
unsigned pagevec_lookup_tag(struct pagevec *pvec,
  struct address_space *mapping, unsigned long *index, int tag,
  unsigned nr_pages);

static inline __attribute__((always_inline)) void pagevec_init(struct pagevec *pvec, int cold)
{
 pvec->nr = 0;
 pvec->cold = cold;
}

static inline __attribute__((always_inline)) void pagevec_reinit(struct pagevec *pvec)
{
 pvec->nr = 0;
}

static inline __attribute__((always_inline)) unsigned pagevec_count(struct pagevec *pvec)
{
 return pvec->nr;
}

static inline __attribute__((always_inline)) unsigned pagevec_space(struct pagevec *pvec)
{
 return 8 - pvec->nr;
}




static inline __attribute__((always_inline)) unsigned pagevec_add(struct pagevec *pvec, struct page *page)
{
 pvec->pages[pvec->nr++] = page;
 return pagevec_space(pvec);
}


static inline __attribute__((always_inline)) void pagevec_release(struct pagevec *pvec)
{
 if (pagevec_count(pvec))
  __pagevec_release(pvec);
}

static inline __attribute__((always_inline)) void pagevec_free(struct pagevec *pvec)
{
 if (pagevec_count(pvec))
  __pagevec_free(pvec);
}

static inline __attribute__((always_inline)) void __pagevec_lru_add_anon(struct pagevec *pvec)
{
 ____pagevec_lru_add(pvec, LRU_INACTIVE_ANON);
}

static inline __attribute__((always_inline)) void __pagevec_lru_add_active_anon(struct pagevec *pvec)
{
 ____pagevec_lru_add(pvec, LRU_ACTIVE_ANON);
}

static inline __attribute__((always_inline)) void __pagevec_lru_add_file(struct pagevec *pvec)
{
 ____pagevec_lru_add(pvec, LRU_INACTIVE_FILE);
}

static inline __attribute__((always_inline)) void __pagevec_lru_add_active_file(struct pagevec *pvec)
{
 ____pagevec_lru_add(pvec, LRU_ACTIVE_FILE);
}

static inline __attribute__((always_inline)) void pagevec_lru_add_file(struct pagevec *pvec)
{
 if (pagevec_count(pvec))
  __pagevec_lru_add_file(pvec);
}

static inline __attribute__((always_inline)) void pagevec_lru_add_anon(struct pagevec *pvec)
{
 if (pagevec_count(pvec))
  __pagevec_lru_add_anon(pvec);
}
# 30 "mm/page_alloc.c" 2
# 1 "include/linux/blkdev.h" 1






# 1 "include/linux/major.h" 1
# 8 "include/linux/blkdev.h" 2
# 1 "include/linux/genhd.h" 1
# 24 "include/linux/genhd.h"
extern struct device_type part_type;
extern struct kobject *block_depr;
extern struct class block_class;

enum {


 DOS_EXTENDED_PARTITION = 5,
 LINUX_EXTENDED_PARTITION = 0x85,
 WIN98_EXTENDED_PARTITION = 0x0f,

 SUN_WHOLE_DISK = DOS_EXTENDED_PARTITION,

 LINUX_SWAP_PARTITION = 0x82,
 LINUX_DATA_PARTITION = 0x83,
 LINUX_LVM_PARTITION = 0x8e,
 LINUX_RAID_PARTITION = 0xfd,

 SOLARIS_X86_PARTITION = LINUX_SWAP_PARTITION,
 NEW_SOLARIS_X86_PARTITION = 0xbf,

 DM6_AUX1PARTITION = 0x51,
 DM6_AUX3PARTITION = 0x53,
 DM6_PARTITION = 0x54,
 EZD_PARTITION = 0x55,

 FREEBSD_PARTITION = 0xa5,
 OPENBSD_PARTITION = 0xa6,
 NETBSD_PARTITION = 0xa9,
 BSDI_PARTITION = 0xb7,
 MINIX_PARTITION = 0x81,
 UNIXWARE_PARTITION = 0x63,
};





# 1 "include/linux/device.h" 1
# 15 "include/linux/device.h"
# 1 "include/linux/ioport.h" 1
# 18 "include/linux/ioport.h"
struct resource {
 resource_size_t start;
 resource_size_t end;
 const char *name;
 unsigned long flags;
 struct resource *parent, *sibling, *child;
};

struct resource_list {
 struct resource_list *next;
 struct resource *res;
 struct pci_dev *dev;
};
# 108 "include/linux/ioport.h"
extern struct resource ioport_resource;
extern struct resource iomem_resource;

extern int request_resource(struct resource *root, struct resource *new);
extern int release_resource(struct resource *new);
extern void reserve_region_with_split(struct resource *root,
        resource_size_t start, resource_size_t end,
        const char *name);
extern int insert_resource(struct resource *parent, struct resource *new);
extern void insert_resource_expand_to_fit(struct resource *root, struct resource *new);
extern int allocate_resource(struct resource *root, struct resource *new,
        resource_size_t size, resource_size_t min,
        resource_size_t max, resource_size_t align,
        void (*alignf)(void *, struct resource *,
         resource_size_t, resource_size_t),
        void *alignf_data);
int adjust_resource(struct resource *res, resource_size_t start,
      resource_size_t size);
resource_size_t resource_alignment(struct resource *res);
static inline __attribute__((always_inline)) resource_size_t resource_size(struct resource *res)
{
 return res->end - res->start + 1;
}
static inline __attribute__((always_inline)) unsigned long resource_type(struct resource *res)
{
 return res->flags & 0x00000f00;
}
# 144 "include/linux/ioport.h"
extern struct resource * __request_region(struct resource *,
     resource_size_t start,
     resource_size_t n,
     const char *name, int flags);






extern int __check_region(struct resource *, resource_size_t, resource_size_t);
extern void __release_region(struct resource *, resource_size_t,
    resource_size_t);

static inline __attribute__((always_inline)) int __attribute__((deprecated)) check_region(resource_size_t s,
      resource_size_t n)
{
 return __check_region(&ioport_resource, s, n);
}


struct device;





extern struct resource * __devm_request_region(struct device *dev,
    struct resource *parent, resource_size_t start,
    resource_size_t n, const char *name);






extern void __devm_release_region(struct device *dev, struct resource *parent,
      resource_size_t start, resource_size_t n);
extern int iomem_map_sanity_check(resource_size_t addr, unsigned long size);
extern int iomem_is_exclusive(u64 addr);
# 16 "include/linux/device.h" 2

# 1 "include/linux/klist.h" 1
# 19 "include/linux/klist.h"
struct klist_node;
struct klist {
 spinlock_t k_lock;
 struct list_head k_list;
 void (*get)(struct klist_node *);
 void (*put)(struct klist_node *);
} __attribute__ ((aligned (4)));
# 36 "include/linux/klist.h"
extern void klist_init(struct klist *k, void (*get)(struct klist_node *),
         void (*put)(struct klist_node *));

struct klist_node {
 void *n_klist;
 struct list_head n_node;
 struct kref n_ref;
};

extern void klist_add_tail(struct klist_node *n, struct klist *k);
extern void klist_add_head(struct klist_node *n, struct klist *k);
extern void klist_add_after(struct klist_node *n, struct klist_node *pos);
extern void klist_add_before(struct klist_node *n, struct klist_node *pos);

extern void klist_del(struct klist_node *n);
extern void klist_remove(struct klist_node *n);

extern int klist_node_attached(struct klist_node *n);


struct klist_iter {
 struct klist *i_klist;
 struct klist_node *i_cur;
};


extern void klist_iter_init(struct klist *k, struct klist_iter *i);
extern void klist_iter_init_node(struct klist *k, struct klist_iter *i,
     struct klist_node *n);
extern void klist_iter_exit(struct klist_iter *i);
extern struct klist_node *klist_next(struct klist_iter *i);
# 18 "include/linux/device.h" 2
# 26 "include/linux/device.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/device.h" 1
# 9 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/device.h"
struct dev_archdata {



};
# 27 "include/linux/device.h" 2



struct device;
struct device_driver;
struct driver_private;
struct class;
struct class_private;
struct bus_type;
struct bus_type_private;

struct bus_attribute {
 struct attribute attr;
 ssize_t (*show)(struct bus_type *bus, char *buf);
 ssize_t (*store)(struct bus_type *bus, const char *buf, size_t count);
};




extern int __attribute__((warn_unused_result)) bus_create_file(struct bus_type *,
     struct bus_attribute *);
extern void bus_remove_file(struct bus_type *, struct bus_attribute *);

struct bus_type {
 const char *name;
 struct bus_attribute *bus_attrs;
 struct device_attribute *dev_attrs;
 struct driver_attribute *drv_attrs;

 int (*match)(struct device *dev, struct device_driver *drv);
 int (*uevent)(struct device *dev, struct kobj_uevent_env *env);
 int (*probe)(struct device *dev);
 int (*remove)(struct device *dev);
 void (*shutdown)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*suspend_late)(struct device *dev, pm_message_t state);
 int (*resume_early)(struct device *dev);
 int (*resume)(struct device *dev);

 struct dev_pm_ops *pm;

 struct bus_type_private *p;
};

extern int __attribute__((warn_unused_result)) bus_register(struct bus_type *bus);
extern void bus_unregister(struct bus_type *bus);

extern int __attribute__((warn_unused_result)) bus_rescan_devices(struct bus_type *bus);



int bus_for_each_dev(struct bus_type *bus, struct device *start, void *data,
       int (*fn)(struct device *dev, void *data));
struct device *bus_find_device(struct bus_type *bus, struct device *start,
          void *data,
          int (*match)(struct device *dev, void *data));
struct device *bus_find_device_by_name(struct bus_type *bus,
           struct device *start,
           const char *name);

int __attribute__((warn_unused_result)) bus_for_each_drv(struct bus_type *bus,
      struct device_driver *start, void *data,
      int (*fn)(struct device_driver *, void *));

void bus_sort_breadthfirst(struct bus_type *bus,
      int (*compare)(const struct device *a,
       const struct device *b));






struct notifier_block;

extern int bus_register_notifier(struct bus_type *bus,
     struct notifier_block *nb);
extern int bus_unregister_notifier(struct bus_type *bus,
       struct notifier_block *nb);
# 119 "include/linux/device.h"
extern struct kset *bus_get_kset(struct bus_type *bus);
extern struct klist *bus_get_device_klist(struct bus_type *bus);

struct device_driver {
 const char *name;
 struct bus_type *bus;

 struct module *owner;
 const char *mod_name;

 int (*probe) (struct device *dev);
 int (*remove) (struct device *dev);
 void (*shutdown) (struct device *dev);
 int (*suspend) (struct device *dev, pm_message_t state);
 int (*resume) (struct device *dev);
 struct attribute_group **groups;

 struct dev_pm_ops *pm;

 struct driver_private *p;
};


extern int __attribute__((warn_unused_result)) driver_register(struct device_driver *drv);
extern void driver_unregister(struct device_driver *drv);

extern struct device_driver *get_driver(struct device_driver *drv);
extern void put_driver(struct device_driver *drv);
extern struct device_driver *driver_find(const char *name,
      struct bus_type *bus);
extern int driver_probe_done(void);
extern int wait_for_device_probe(void);




struct driver_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device_driver *driver, char *buf);
 ssize_t (*store)(struct device_driver *driver, const char *buf,
    size_t count);
};





extern int __attribute__((warn_unused_result)) driver_create_file(struct device_driver *driver,
        struct driver_attribute *attr);
extern void driver_remove_file(struct device_driver *driver,
          struct driver_attribute *attr);

extern int __attribute__((warn_unused_result)) driver_add_kobj(struct device_driver *drv,
     struct kobject *kobj,
     const char *fmt, ...);

extern int __attribute__((warn_unused_result)) driver_for_each_device(struct device_driver *drv,
            struct device *start,
            void *data,
            int (*fn)(struct device *dev,
        void *));
struct device *driver_find_device(struct device_driver *drv,
      struct device *start, void *data,
      int (*match)(struct device *dev, void *data));




struct class {
 const char *name;
 struct module *owner;

 struct class_attribute *class_attrs;
 struct device_attribute *dev_attrs;
 struct kobject *dev_kobj;

 int (*dev_uevent)(struct device *dev, struct kobj_uevent_env *env);

 void (*class_release)(struct class *class);
 void (*dev_release)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*resume)(struct device *dev);

 struct dev_pm_ops *pm;
 struct class_private *p;
};

struct class_dev_iter {
 struct klist_iter ki;
 const struct device_type *type;
};

extern struct kobject *sysfs_dev_block_kobj;
extern struct kobject *sysfs_dev_char_kobj;
extern int __attribute__((warn_unused_result)) __class_register(struct class *class,
      struct lock_class_key *key);
extern void class_unregister(struct class *class);
# 226 "include/linux/device.h"
extern void class_dev_iter_init(struct class_dev_iter *iter,
    struct class *class,
    struct device *start,
    const struct device_type *type);
extern struct device *class_dev_iter_next(struct class_dev_iter *iter);
extern void class_dev_iter_exit(struct class_dev_iter *iter);

extern int class_for_each_device(struct class *class, struct device *start,
     void *data,
     int (*fn)(struct device *dev, void *data));
extern struct device *class_find_device(struct class *class,
     struct device *start, void *data,
     int (*match)(struct device *, void *));

struct class_attribute {
 struct attribute attr;
 ssize_t (*show)(struct class *class, char *buf);
 ssize_t (*store)(struct class *class, const char *buf, size_t count);
};




extern int __attribute__((warn_unused_result)) class_create_file(struct class *class,
       const struct class_attribute *attr);
extern void class_remove_file(struct class *class,
         const struct class_attribute *attr);

struct class_interface {
 struct list_head node;
 struct class *class;

 int (*add_dev) (struct device *, struct class_interface *);
 void (*remove_dev) (struct device *, struct class_interface *);
};

extern int __attribute__((warn_unused_result)) class_interface_register(struct class_interface *);
extern void class_interface_unregister(struct class_interface *);

extern struct class * __attribute__((warn_unused_result)) __class_create(struct module *owner,
        const char *name,
        struct lock_class_key *key);
extern void class_destroy(struct class *cls);
# 287 "include/linux/device.h"
struct device_type {
 const char *name;
 struct attribute_group **groups;
 int (*uevent)(struct device *dev, struct kobj_uevent_env *env);
 void (*release)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*resume)(struct device *dev);

 struct dev_pm_ops *pm;
};


struct device_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device *dev, struct device_attribute *attr,
   char *buf);
 ssize_t (*store)(struct device *dev, struct device_attribute *attr,
    const char *buf, size_t count);
};




extern int __attribute__((warn_unused_result)) device_create_file(struct device *device,
        struct device_attribute *entry);
extern void device_remove_file(struct device *dev,
          struct device_attribute *attr);
extern int __attribute__((warn_unused_result)) device_create_bin_file(struct device *dev,
            struct bin_attribute *attr);
extern void device_remove_bin_file(struct device *dev,
       struct bin_attribute *attr);
extern int device_schedule_callback_owner(struct device *dev,
  void (*func)(struct device *dev), struct module *owner);






typedef void (*dr_release_t)(struct device *dev, void *res);
typedef int (*dr_match_t)(struct device *dev, void *res, void *match_data);







extern void *devres_alloc(dr_release_t release, size_t size, gfp_t gfp);

extern void devres_free(void *res);
extern void devres_add(struct device *dev, void *res);
extern void *devres_find(struct device *dev, dr_release_t release,
    dr_match_t match, void *match_data);
extern void *devres_get(struct device *dev, void *new_res,
   dr_match_t match, void *match_data);
extern void *devres_remove(struct device *dev, dr_release_t release,
      dr_match_t match, void *match_data);
extern int devres_destroy(struct device *dev, dr_release_t release,
     dr_match_t match, void *match_data);


extern void * __attribute__((warn_unused_result)) devres_open_group(struct device *dev, void *id,
          gfp_t gfp);
extern void devres_close_group(struct device *dev, void *id);
extern void devres_remove_group(struct device *dev, void *id);
extern int devres_release_group(struct device *dev, void *id);


extern void *devm_kzalloc(struct device *dev, size_t size, gfp_t gfp);
extern void devm_kfree(struct device *dev, void *p);

struct device_dma_parameters {




 unsigned int max_segment_size;
 unsigned long segment_boundary_mask;
};

struct device {
 struct klist klist_children;
 struct klist_node knode_parent;
 struct klist_node knode_driver;
 struct klist_node knode_bus;
 struct device *parent;

 struct kobject kobj;
 char bus_id[20];
 unsigned uevent_suppress:1;
 const char *init_name;
 struct device_type *type;

 struct semaphore sem;



 struct bus_type *bus;
 struct device_driver *driver;

 void *driver_data;
 void *platform_data;

 struct dev_pm_info power;




 u64 *dma_mask;
 u64 coherent_dma_mask;





 struct device_dma_parameters *dma_parms;

 struct list_head dma_pools;

 struct dma_coherent_mem *dma_mem;


 struct dev_archdata archdata;

 dev_t devt;

 spinlock_t devres_lock;
 struct list_head devres_head;

 struct klist_node knode_class;
 struct class *class;
 struct attribute_group **groups;

 void (*release)(struct device *dev);
};


# 1 "include/linux/pm_wakeup.h" 1
# 61 "include/linux/pm_wakeup.h"
static inline __attribute__((always_inline)) void device_init_wakeup(struct device *dev, int val)
{
 dev->power.can_wakeup = !!val;
}

static inline __attribute__((always_inline)) void device_set_wakeup_capable(struct device *dev, int val) { }

static inline __attribute__((always_inline)) int device_can_wakeup(struct device *dev)
{
 return dev->power.can_wakeup;
}
# 427 "include/linux/device.h" 2

static inline __attribute__((always_inline)) const char *dev_name(const struct device *dev)
{

 return dev->bus_id;
}

extern int dev_set_name(struct device *dev, const char *name, ...)
   __attribute__((format(printf, 2, 3)));
# 447 "include/linux/device.h"
static inline __attribute__((always_inline)) int dev_to_node(struct device *dev)
{
 return -1;
}
static inline __attribute__((always_inline)) void set_dev_node(struct device *dev, int node)
{
}


static inline __attribute__((always_inline)) void *dev_get_drvdata(const struct device *dev)
{
 return dev->driver_data;
}

static inline __attribute__((always_inline)) void dev_set_drvdata(struct device *dev, void *data)
{
 dev->driver_data = data;
}

static inline __attribute__((always_inline)) int device_is_registered(struct device *dev)
{
 return dev->kobj.state_in_sysfs;
}

void driver_init(void);




extern int __attribute__((warn_unused_result)) device_register(struct device *dev);
extern void device_unregister(struct device *dev);
extern void device_initialize(struct device *dev);
extern int __attribute__((warn_unused_result)) device_add(struct device *dev);
extern void device_del(struct device *dev);
extern int device_for_each_child(struct device *dev, void *data,
       int (*fn)(struct device *dev, void *data));
extern struct device *device_find_child(struct device *dev, void *data,
    int (*match)(struct device *dev, void *data));
extern int device_rename(struct device *dev, char *new_name);
extern int device_move(struct device *dev, struct device *new_parent);




extern struct device *__root_device_register(const char *name,
          struct module *owner);
static inline __attribute__((always_inline)) struct device *root_device_register(const char *name)
{
 return __root_device_register(name, ((struct module *)0));
}
extern void root_device_unregister(struct device *root);





extern int __attribute__((warn_unused_result)) device_bind_driver(struct device *dev);
extern void device_release_driver(struct device *dev);
extern int __attribute__((warn_unused_result)) device_attach(struct device *dev);
extern int __attribute__((warn_unused_result)) driver_attach(struct device_driver *drv);
extern int __attribute__((warn_unused_result)) device_reprobe(struct device *dev);




extern struct device *device_create_vargs(struct class *cls,
       struct device *parent,
       dev_t devt,
       void *drvdata,
       const char *fmt,
       va_list vargs);
extern struct device *device_create(struct class *cls, struct device *parent,
        dev_t devt, void *drvdata,
        const char *fmt, ...)
        __attribute__((format(printf, 5, 6)));
extern void device_destroy(struct class *cls, dev_t devt);







extern int (*platform_notify)(struct device *dev);

extern int (*platform_notify_remove)(struct device *dev);






extern struct device *get_device(struct device *dev);
extern void put_device(struct device *dev);



extern void device_shutdown(void);


extern void sysdev_shutdown(void);


extern const char *dev_driver_string(const struct device *dev);
# 63 "include/linux/genhd.h" 2





struct partition {
 unsigned char boot_ind;
 unsigned char head;
 unsigned char sector;
 unsigned char cyl;
 unsigned char sys_ind;
 unsigned char end_head;
 unsigned char end_sector;
 unsigned char end_cyl;
 __le32 start_sect;
 __le32 nr_sects;
} __attribute__((packed));

struct disk_stats {
 unsigned long sectors[2];
 unsigned long ios[2];
 unsigned long merges[2];
 unsigned long ticks[2];
 unsigned long io_ticks;
 unsigned long time_in_queue;
};

struct hd_struct {
 sector_t start_sect;
 sector_t nr_sects;
 struct device __dev;
 struct kobject *holder_dir;
 int policy, partno;



 unsigned long stamp;
 int in_flight;



 struct disk_stats dkstats;

 struct rcu_head rcu_head;
};
# 120 "include/linux/genhd.h"
struct blk_scsi_cmd_filter {
 unsigned long read_ok[((256) / (sizeof(long) * 8))];
 unsigned long write_ok[((256) / (sizeof(long) * 8))];
 struct kobject kobj;
};

struct disk_part_tbl {
 struct rcu_head rcu_head;
 int len;
 struct hd_struct *last_lookup;
 struct hd_struct *part[];
};

struct gendisk {



 int major;
 int first_minor;
 int minors;


 char disk_name[32];






 struct disk_part_tbl *part_tbl;
 struct hd_struct part0;

 struct block_device_operations *fops;
 struct request_queue *queue;
 void *private_data;

 int flags;
 struct device *driverfs_dev;
 struct kobject *slave_dir;

 struct timer_rand_state *random;

 atomic_t sync_io;
 struct work_struct async_notify;



 int node_id;
};

static inline __attribute__((always_inline)) struct gendisk *part_to_disk(struct hd_struct *part)
{
 if (__builtin_expect(!!(part), 1)) {
  if (part->partno)
   return ({ const typeof( ((struct gendisk *)0)->part0.__dev ) *__mptr = (((&((part)->__dev))->parent)); (struct gendisk *)( (char *)__mptr - __builtin_offsetof(struct gendisk,part0.__dev) );});
  else
   return ({ const typeof( ((struct gendisk *)0)->part0.__dev ) *__mptr = (((&((part)->__dev)))); (struct gendisk *)( (char *)__mptr - __builtin_offsetof(struct gendisk,part0.__dev) );});
 }
 return ((void *)0);
}

static inline __attribute__((always_inline)) int disk_max_parts(struct gendisk *disk)
{
 if (disk->flags & 64)
  return 256;
 return disk->minors;
}

static inline __attribute__((always_inline)) bool disk_partitionable(struct gendisk *disk)
{
 return disk_max_parts(disk) > 1;
}

static inline __attribute__((always_inline)) dev_t disk_devt(struct gendisk *disk)
{
 return (&(disk)->part0.__dev)->devt;
}

static inline __attribute__((always_inline)) dev_t part_devt(struct hd_struct *part)
{
 return (&((part)->__dev))->devt;
}

extern struct hd_struct *disk_get_part(struct gendisk *disk, int partno);

static inline __attribute__((always_inline)) void disk_put_part(struct hd_struct *part)
{
 if (__builtin_expect(!!(part), 1))
  put_device((&((part)->__dev)));
}
# 218 "include/linux/genhd.h"
struct disk_part_iter {
 struct gendisk *disk;
 struct hd_struct *part;
 int idx;
 unsigned int flags;
};

extern void disk_part_iter_init(struct disk_part_iter *piter,
     struct gendisk *disk, unsigned int flags);
extern struct hd_struct *disk_part_iter_next(struct disk_part_iter *piter);
extern void disk_part_iter_exit(struct disk_part_iter *piter);

extern struct hd_struct *disk_map_sector_rcu(struct gendisk *disk,
          sector_t sector);
# 292 "include/linux/genhd.h"
static inline __attribute__((always_inline)) void part_stat_set_all(struct hd_struct *part, int value)
{
 ({ void *__p = (&part->dkstats); size_t __n = sizeof(struct disk_stats); if ((__n) != 0) { if (__builtin_constant_p((value)) && (value) == 0) __memzero((__p),(__n)); else memset((__p),(value),(__n)); } (__p); });
}

static inline __attribute__((always_inline)) int init_part_stats(struct hd_struct *part)
{
 return 1;
}

static inline __attribute__((always_inline)) void free_part_stats(struct hd_struct *part)
{
}
# 322 "include/linux/genhd.h"
static inline __attribute__((always_inline)) void part_inc_in_flight(struct hd_struct *part)
{
 part->in_flight++;
 if (part->partno)
  part_to_disk(part)->part0.in_flight++;
}

static inline __attribute__((always_inline)) void part_dec_in_flight(struct hd_struct *part)
{
 part->in_flight--;
 if (part->partno)
  part_to_disk(part)->part0.in_flight--;
}


extern void part_round_stats(int cpu, struct hd_struct *part);


extern int get_blkdev_list(char *, int);
extern void add_disk(struct gendisk *disk);
extern void del_gendisk(struct gendisk *gp);
extern void unlink_gendisk(struct gendisk *gp);
extern struct gendisk *get_gendisk(dev_t dev, int *partno);
extern struct block_device *bdget_disk(struct gendisk *disk, int partno);

extern void set_device_ro(struct block_device *bdev, int flag);
extern void set_disk_ro(struct gendisk *disk, int flag);

static inline __attribute__((always_inline)) int get_disk_ro(struct gendisk *disk)
{
 return disk->part0.policy;
}


extern void add_disk_randomness(struct gendisk *disk);
extern void rand_initialize_disk(struct gendisk *disk);

static inline __attribute__((always_inline)) sector_t get_start_sect(struct block_device *bdev)
{
 return bdev->bd_part->start_sect;
}
static inline __attribute__((always_inline)) sector_t get_capacity(struct gendisk *disk)
{
 return disk->part0.nr_sects;
}
static inline __attribute__((always_inline)) void set_capacity(struct gendisk *disk, sector_t size)
{
 disk->part0.nr_sects = size;
}
# 519 "include/linux/genhd.h"
extern int blk_alloc_devt(struct hd_struct *part, dev_t *devt);
extern void blk_free_devt(dev_t devt);
extern dev_t blk_lookup_devt(const char *name, int partno);
extern char *disk_name (struct gendisk *hd, int partno, char *buf);

extern int disk_expand_part_tbl(struct gendisk *disk, int target);
extern int rescan_partitions(struct gendisk *disk, struct block_device *bdev);
extern struct hd_struct * __attribute__((warn_unused_result)) add_partition(struct gendisk *disk,
           int partno, sector_t start,
           sector_t len, int flags);
extern void delete_partition(struct gendisk *, int);
extern void printk_all_partitions(void);

extern struct gendisk *alloc_disk_node(int minors, int node_id);
extern struct gendisk *alloc_disk(int minors);
extern struct kobject *get_disk(struct gendisk *disk);
extern void put_disk(struct gendisk *disk);
extern void blk_register_region(dev_t devt, unsigned long range,
   struct module *module,
   struct kobject *(*probe)(dev_t, int *, void *),
   int (*lock)(dev_t, void *),
   void *data);
extern void blk_unregister_region(dev_t devt, unsigned long range);

extern ssize_t part_size_show(struct device *dev,
         struct device_attribute *attr, char *buf);
extern ssize_t part_stat_show(struct device *dev,
         struct device_attribute *attr, char *buf);
# 9 "include/linux/blkdev.h" 2




# 1 "include/linux/backing-dev.h" 1
# 18 "include/linux/backing-dev.h"
struct page;
struct device;
struct dentry;




enum bdi_state {
 BDI_pdflush,
 BDI_write_congested,
 BDI_read_congested,
 BDI_unused,
};

typedef int (congested_fn)(void *, int);

enum bdi_stat_item {
 BDI_RECLAIMABLE,
 BDI_WRITEBACK,
 NR_BDI_STAT_ITEMS
};



struct backing_dev_info {
 unsigned long ra_pages;
 unsigned long state;
 unsigned int capabilities;
 congested_fn *congested_fn;
 void *congested_data;
 void (*unplug_io_fn)(struct backing_dev_info *, struct page *);
 void *unplug_io_data;

 struct percpu_counter bdi_stat[NR_BDI_STAT_ITEMS];

 struct prop_local_percpu completions;
 int dirty_exceeded;

 unsigned int min_ratio;
 unsigned int max_ratio, max_prop_frac;

 struct device *dev;


 struct dentry *debug_dir;
 struct dentry *debug_stats;

};

int bdi_init(struct backing_dev_info *bdi);
void bdi_destroy(struct backing_dev_info *bdi);

int bdi_register(struct backing_dev_info *bdi, struct device *parent,
  const char *fmt, ...);
int bdi_register_dev(struct backing_dev_info *bdi, dev_t dev);
void bdi_unregister(struct backing_dev_info *bdi);

static inline __attribute__((always_inline)) void __add_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item, s64 amount)
{
 percpu_counter_add(&bdi->bdi_stat[item], amount);
}

static inline __attribute__((always_inline)) void __inc_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 __add_bdi_stat(bdi, item, 1);
}

static inline __attribute__((always_inline)) void inc_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 unsigned long flags;

 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0);
 __inc_bdi_stat(bdi, item);
 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0);
}

static inline __attribute__((always_inline)) void __dec_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 __add_bdi_stat(bdi, item, -1);
}

static inline __attribute__((always_inline)) void dec_bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 unsigned long flags;

 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0);
 __dec_bdi_stat(bdi, item);
 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0);
}

static inline __attribute__((always_inline)) s64 bdi_stat(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 return percpu_counter_read_positive(&bdi->bdi_stat[item]);
}

static inline __attribute__((always_inline)) s64 __bdi_stat_sum(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 return percpu_counter_sum_positive(&bdi->bdi_stat[item]);
}

static inline __attribute__((always_inline)) s64 bdi_stat_sum(struct backing_dev_info *bdi,
  enum bdi_stat_item item)
{
 s64 sum;
 unsigned long flags;

 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0);
 sum = __bdi_stat_sum(bdi, item);
 do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0);

 return sum;
}

extern void bdi_writeout_inc(struct backing_dev_info *bdi);




static inline __attribute__((always_inline)) unsigned long bdi_stat_error(struct backing_dev_info *bdi)
{



 return 1;

}

int bdi_set_min_ratio(struct backing_dev_info *bdi, unsigned int min_ratio);
int bdi_set_max_ratio(struct backing_dev_info *bdi, unsigned int max_ratio);
# 204 "include/linux/backing-dev.h"
extern struct backing_dev_info default_backing_dev_info;
void default_unplug_io_fn(struct backing_dev_info *bdi, struct page *page);

int writeback_in_progress(struct backing_dev_info *bdi);

static inline __attribute__((always_inline)) int bdi_congested(struct backing_dev_info *bdi, int bdi_bits)
{
 if (bdi->congested_fn)
  return bdi->congested_fn(bdi->congested_data, bdi_bits);
 return (bdi->state & bdi_bits);
}

static inline __attribute__((always_inline)) int bdi_read_congested(struct backing_dev_info *bdi)
{
 return bdi_congested(bdi, 1 << BDI_read_congested);
}

static inline __attribute__((always_inline)) int bdi_write_congested(struct backing_dev_info *bdi)
{
 return bdi_congested(bdi, 1 << BDI_write_congested);
}

static inline __attribute__((always_inline)) int bdi_rw_congested(struct backing_dev_info *bdi)
{
 return bdi_congested(bdi, (1 << BDI_read_congested)|
      (1 << BDI_write_congested));
}

void clear_bdi_congested(struct backing_dev_info *bdi, int rw);
void set_bdi_congested(struct backing_dev_info *bdi, int rw);
long congestion_wait(int rw, long timeout);


static inline __attribute__((always_inline)) bool bdi_cap_writeback_dirty(struct backing_dev_info *bdi)
{
 return !(bdi->capabilities & 0x00000002);
}

static inline __attribute__((always_inline)) bool bdi_cap_account_dirty(struct backing_dev_info *bdi)
{
 return !(bdi->capabilities & 0x00000001);
}

static inline __attribute__((always_inline)) bool bdi_cap_account_writeback(struct backing_dev_info *bdi)
{

 return !(bdi->capabilities & (0x00000080 |
          0x00000002));
}

static inline __attribute__((always_inline)) bool bdi_cap_swap_backed(struct backing_dev_info *bdi)
{
 return bdi->capabilities & 0x00000100;
}

static inline __attribute__((always_inline)) bool mapping_cap_writeback_dirty(struct address_space *mapping)
{
 return bdi_cap_writeback_dirty(mapping->backing_dev_info);
}

static inline __attribute__((always_inline)) bool mapping_cap_account_dirty(struct address_space *mapping)
{
 return bdi_cap_account_dirty(mapping->backing_dev_info);
}

static inline __attribute__((always_inline)) bool mapping_cap_swap_backed(struct address_space *mapping)
{
 return bdi_cap_swap_backed(mapping->backing_dev_info);
}
# 14 "include/linux/blkdev.h" 2

# 1 "include/linux/mempool.h" 1
# 9 "include/linux/mempool.h"
struct kmem_cache;

typedef void * (mempool_alloc_t)(gfp_t gfp_mask, void *pool_data);
typedef void (mempool_free_t)(void *element, void *pool_data);

typedef struct mempool_s {
 spinlock_t lock;
 int min_nr;
 int curr_nr;
 void **elements;

 void *pool_data;
 mempool_alloc_t *alloc;
 mempool_free_t *free;
 wait_queue_head_t wait;
} mempool_t;

extern mempool_t *mempool_create(int min_nr, mempool_alloc_t *alloc_fn,
   mempool_free_t *free_fn, void *pool_data);
extern mempool_t *mempool_create_node(int min_nr, mempool_alloc_t *alloc_fn,
   mempool_free_t *free_fn, void *pool_data, int nid);

extern int mempool_resize(mempool_t *pool, int new_min_nr, gfp_t gfp_mask);
extern void mempool_destroy(mempool_t *pool);
extern void * mempool_alloc(mempool_t *pool, gfp_t gfp_mask);
extern void mempool_free(void *element, mempool_t *pool);





void *mempool_alloc_slab(gfp_t gfp_mask, void *pool_data);
void mempool_free_slab(void *element, void *pool_data);
static inline __attribute__((always_inline)) mempool_t *
mempool_create_slab_pool(int min_nr, struct kmem_cache *kc)
{
 return mempool_create(min_nr, mempool_alloc_slab, mempool_free_slab,
         (void *) kc);
}





void *mempool_kmalloc(gfp_t gfp_mask, void *pool_data);
void *mempool_kzalloc(gfp_t gfp_mask, void *pool_data);
void mempool_kfree(void *element, void *pool_data);
static inline __attribute__((always_inline)) mempool_t *mempool_create_kmalloc_pool(int min_nr, size_t size)
{
 return mempool_create(min_nr, mempool_kmalloc, mempool_kfree,
         (void *) size);
}
static inline __attribute__((always_inline)) mempool_t *mempool_create_kzalloc_pool(int min_nr, size_t size)
{
 return mempool_create(min_nr, mempool_kzalloc, mempool_kfree,
         (void *) size);
}





void *mempool_alloc_pages(gfp_t gfp_mask, void *pool_data);
void mempool_free_pages(void *element, void *pool_data);
static inline __attribute__((always_inline)) mempool_t *mempool_create_page_pool(int min_nr, int order)
{
 return mempool_create(min_nr, mempool_alloc_pages, mempool_free_pages,
         (void *)(long)order);
}
# 16 "include/linux/blkdev.h" 2
# 1 "include/linux/bio.h" 1
# 25 "include/linux/bio.h"
# 1 "include/linux/ioprio.h" 1




# 1 "include/linux/iocontext.h" 1
# 10 "include/linux/iocontext.h"
struct as_io_context {
 spinlock_t lock;

 void (*dtor)(struct as_io_context *aic);
 void (*exit)(struct as_io_context *aic);

 unsigned long state;
 atomic_t nr_queued;
 atomic_t nr_dispatched;



 unsigned long last_end_request;
 unsigned long ttime_total;
 unsigned long ttime_samples;
 unsigned long ttime_mean;

 unsigned int seek_samples;
 sector_t last_request_pos;
 u64 seek_total;
 sector_t seek_mean;
};

struct cfq_queue;
struct cfq_io_context {
 void *key;
 unsigned long dead_key;

 struct cfq_queue *cfqq[2];

 struct io_context *ioc;

 unsigned long last_end_request;
 sector_t last_request_pos;

 unsigned long ttime_total;
 unsigned long ttime_samples;
 unsigned long ttime_mean;

 unsigned int seek_samples;
 u64 seek_total;
 sector_t seek_mean;

 struct list_head queue_list;
 struct hlist_node cic_list;

 void (*dtor)(struct io_context *);
 void (*exit)(struct io_context *);

 struct rcu_head rcu_head;
};





struct io_context {
 atomic_t refcount;
 atomic_t nr_tasks;


 spinlock_t lock;

 unsigned short ioprio;
 unsigned short ioprio_changed;




 unsigned long last_waited;
 int nr_batch_requests;

 struct as_io_context *aic;
 struct radix_tree_root radix_root;
 struct hlist_head cic_list;
 void *ioc_data;
};

static inline __attribute__((always_inline)) struct io_context *ioc_task_link(struct io_context *ioc)
{




 if (ioc && atomic_add_unless((&ioc->refcount), 1, 0)) {
  (void) atomic_add_return(1, &ioc->nr_tasks);
  return ioc;
 }

 return ((void *)0);
}


int put_io_context(struct io_context *ioc);
void exit_io_context(void);
struct io_context *get_io_context(gfp_t gfp_flags, int node);
struct io_context *alloc_io_context(gfp_t gfp_flags, int node);
void copy_io_context(struct io_context **pdst, struct io_context **psrc);
# 6 "include/linux/ioprio.h" 2
# 26 "include/linux/ioprio.h"
enum {
 IOPRIO_CLASS_NONE,
 IOPRIO_CLASS_RT,
 IOPRIO_CLASS_BE,
 IOPRIO_CLASS_IDLE,
};






enum {
 IOPRIO_WHO_PROCESS = 1,
 IOPRIO_WHO_PGRP,
 IOPRIO_WHO_USER,
};






static inline __attribute__((always_inline)) int task_ioprio(struct io_context *ioc)
{
 if (((((ioc->ioprio)) >> (13)) != IOPRIO_CLASS_NONE))
  return ((ioc->ioprio) & ((1UL << (13)) - 1));

 return (4);
}

static inline __attribute__((always_inline)) int task_ioprio_class(struct io_context *ioc)
{
 if (((((ioc->ioprio)) >> (13)) != IOPRIO_CLASS_NONE))
  return ((ioc->ioprio) >> (13));

 return IOPRIO_CLASS_BE;
}

static inline __attribute__((always_inline)) int task_nice_ioprio(struct task_struct *task)
{
 return (task_nice(task) + 20) / 5;
}





static inline __attribute__((always_inline)) int task_nice_ioclass(struct task_struct *task)
{
 if (task->policy == 5)
  return IOPRIO_CLASS_IDLE;
 else if (task->policy == 1 || task->policy == 2)
  return IOPRIO_CLASS_RT;
 else
  return IOPRIO_CLASS_BE;
}




extern int ioprio_best(unsigned short aprio, unsigned short bprio);

extern int set_task_ioprio(struct task_struct *task, int ioprio);
# 26 "include/linux/bio.h" 2



# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/io.h" 1
# 41 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/io.h"
extern void __raw_writesb(void *addr, const void *data, int bytelen);
extern void __raw_writesw(void *addr, const void *data, int wordlen);
extern void __raw_writesl(void *addr, const void *data, int longlen);

extern void __raw_readsb(const void *addr, void *data, int bytelen);
extern void __raw_readsw(const void *addr, void *data, int wordlen);
extern void __raw_readsl(const void *addr, void *data, int longlen);
# 73 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/io.h"
extern void * __arm_ioremap_pfn(unsigned long, unsigned long, size_t, unsigned int);
extern void * __arm_ioremap(unsigned long, size_t, unsigned int);
extern void __iounmap(volatile void *addr);




extern void __readwrite_bug(const char *fn);




static inline __attribute__((always_inline)) void *__typesafe_io(unsigned long addr)
{
 return (void *)addr;
}




# 1 "arch/arm/plat-mxc/include/mach/io.h" 1
# 21 "arch/arm/plat-mxc/include/mach/io.h"
static inline __attribute__((always_inline)) void *
__mx3_ioremap(unsigned long phys_addr, size_t size, unsigned int mtype)
{
 if (mtype == 0) {



  if ((phys_addr < 0x80000000) && ((phys_addr < 0x30000000) ||
   (phys_addr >= 0x30000000 + 0x00100000)))
   mtype = 1;
 }

 return __arm_ioremap(phys_addr, size, mtype);
}
# 94 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/io.h" 2
# 158 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/io.h"
extern void _memcpy_fromio(void *, const volatile void *, size_t);
extern void _memcpy_toio(volatile void *, const void *, size_t);
extern void _memset_io(volatile void *, int, size_t);
# 256 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/io.h"
extern void *ioport_map(unsigned long port, unsigned int nr);
extern void ioport_unmap(void *addr);


struct pci_dev;

extern void *pci_iomap(struct pci_dev *dev, int bar, unsigned long maxlen);
extern void pci_iounmap(struct pci_dev *dev, void *addr);
# 274 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/io.h"
extern int valid_phys_addr_range(unsigned long addr, size_t size);
extern int valid_mmap_phys_addr_range(unsigned long pfn, size_t size);
# 293 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/io.h"
extern void register_isa_ports(unsigned int mmio, unsigned int io,
          unsigned int io_shift);
# 30 "include/linux/bio.h" 2
# 46 "include/linux/bio.h"
struct bio_vec {
 struct page *bv_page;
 unsigned int bv_len;
 unsigned int bv_offset;
};

struct bio_set;
struct bio;
struct bio_integrity_payload;
typedef void (bio_end_io_t) (struct bio *, int);
typedef void (bio_destructor_t) (struct bio *);





struct bio {
 sector_t bi_sector;

 struct bio *bi_next;
 struct block_device *bi_bdev;
 unsigned long bi_flags;
 unsigned long bi_rw;



 unsigned short bi_vcnt;
 unsigned short bi_idx;




 unsigned int bi_phys_segments;

 unsigned int bi_size;





 unsigned int bi_seg_front_size;
 unsigned int bi_seg_back_size;

 unsigned int bi_max_vecs;

 unsigned int bi_comp_cpu;

 atomic_t bi_cnt;

 struct bio_vec *bi_io_vec;

 bio_end_io_t *bi_end_io;

 void *bi_private;




 bio_destructor_t *bi_destructor;






 struct bio_vec bi_inline_vecs[0];
};
# 217 "include/linux/bio.h"
static inline __attribute__((always_inline)) unsigned int bio_cur_sectors(struct bio *bio)
{
 if (bio->bi_vcnt)
  return (&(((bio))->bi_io_vec[((bio)->bi_idx)]))->bv_len >> 9;
 else
  return bio->bi_size >> 9;
}

static inline __attribute__((always_inline)) void *bio_data(struct bio *bio)
{
 if (bio->bi_vcnt)
  return lowmem_page_address((&((((bio)))->bi_io_vec[(((bio))->bi_idx)]))->bv_page) + (&((((bio)))->bi_io_vec[(((bio))->bi_idx)]))->bv_offset;

 return ((void *)0);
}

static inline __attribute__((always_inline)) int bio_has_allocated_vec(struct bio *bio)
{
 return bio->bi_io_vec && bio->bi_io_vec != bio->bi_inline_vecs;
}
# 345 "include/linux/bio.h"
struct bio_pair {
 struct bio bio1, bio2;
 struct bio_vec bv1, bv2;




 atomic_t cnt;
 int error;
};
extern struct bio_pair *bio_split(struct bio *bi, int first_sectors);
extern void bio_pair_release(struct bio_pair *dbio);

extern struct bio_set *bioset_create(unsigned int, unsigned int);
extern void bioset_free(struct bio_set *);

extern struct bio *bio_alloc(gfp_t, int);
extern struct bio *bio_kmalloc(gfp_t, int);
extern struct bio *bio_alloc_bioset(gfp_t, int, struct bio_set *);
extern void bio_put(struct bio *);
extern void bio_free(struct bio *, struct bio_set *);

extern void bio_endio(struct bio *, int);
struct request_queue;
extern int bio_phys_segments(struct request_queue *, struct bio *);

extern void __bio_clone(struct bio *, struct bio *);
extern struct bio *bio_clone(struct bio *, gfp_t);

extern void bio_init(struct bio *);

extern int bio_add_page(struct bio *, struct page *, unsigned int,unsigned int);
extern int bio_add_pc_page(struct request_queue *, struct bio *, struct page *,
      unsigned int, unsigned int);
extern int bio_get_nr_vecs(struct block_device *);
extern sector_t bio_sector_offset(struct bio *, unsigned short, unsigned int);
extern struct bio *bio_map_user(struct request_queue *, struct block_device *,
    unsigned long, unsigned int, int, gfp_t);
struct sg_iovec;
struct rq_map_data;
extern struct bio *bio_map_user_iov(struct request_queue *,
        struct block_device *,
        struct sg_iovec *, int, int, gfp_t);
extern void bio_unmap_user(struct bio *);
extern struct bio *bio_map_kern(struct request_queue *, void *, unsigned int,
    gfp_t);
extern struct bio *bio_copy_kern(struct request_queue *, void *, unsigned int,
     gfp_t, int);
extern void bio_set_pages_dirty(struct bio *bio);
extern void bio_check_pages_dirty(struct bio *bio);
extern struct bio *bio_copy_user(struct request_queue *, struct rq_map_data *,
     unsigned long, unsigned int, int, gfp_t);
extern struct bio *bio_copy_user_iov(struct request_queue *,
         struct rq_map_data *, struct sg_iovec *,
         int, int, gfp_t);
extern int bio_uncopy_user(struct bio *);
void zero_fill_bio(struct bio *bio);
extern struct bio_vec *bvec_alloc_bs(gfp_t, int, unsigned long *, struct bio_set *);
extern void bvec_free_bs(struct bio_set *, struct bio_vec *, unsigned int);
extern unsigned int bvec_nr_vecs(unsigned short idx);




static inline __attribute__((always_inline)) void bio_set_completion_cpu(struct bio *bio, unsigned int cpu)
{
 bio->bi_comp_cpu = cpu;
}
# 424 "include/linux/bio.h"
struct bio_set {
 struct kmem_cache *bio_slab;
 unsigned int front_pad;

 mempool_t *bio_pool;



 mempool_t *bvec_pool;
};

struct biovec_slab {
 int nr_vecs;
 char *name;
 struct kmem_cache *slab;
};

extern struct bio_set *fs_bio_set;
extern struct biovec_slab bvec_slabs[6] ;
# 488 "include/linux/bio.h"
static inline __attribute__((always_inline)) char *__bio_kmap_irq(struct bio *bio, unsigned short idx,
       unsigned long *flags)
{
 return (lowmem_page_address(((&((bio)->bi_io_vec[(idx)])))->bv_page) + ((&((bio)->bi_io_vec[(idx)])))->bv_offset);
}
# 502 "include/linux/bio.h"
static inline __attribute__((always_inline)) int bio_has_data(struct bio *bio)
{
 return bio && bio->bi_io_vec != ((void *)0);
}
# 17 "include/linux/blkdev.h" 2



# 1 "include/linux/bsg.h" 1
# 10 "include/linux/bsg.h"
struct sg_io_v4 {
 __s32 guard;
 __u32 protocol;
 __u32 subprotocol;


 __u32 request_len;
 __u64 request;
 __u64 request_tag;
 __u32 request_attr;
 __u32 request_priority;
 __u32 request_extra;
 __u32 max_response_len;
 __u64 response;


 __u32 dout_iovec_count;

 __u32 dout_xfer_len;
 __u32 din_iovec_count;
 __u32 din_xfer_len;
 __u64 dout_xferp;
 __u64 din_xferp;

 __u32 timeout;
 __u32 flags;
 __u64 usr_ptr;
 __u32 spare_in;

 __u32 driver_status;
 __u32 transport_status;
 __u32 device_status;
 __u32 retry_delay;
 __u32 info;
 __u32 duration;
 __u32 response_len;
 __s32 din_resid;
 __s32 dout_resid;
 __u64 generated_tag;
 __u32 spare_out;

 __u32 padding;
};
# 71 "include/linux/bsg.h"
static inline __attribute__((always_inline)) int bsg_register_queue(struct request_queue *q,
         struct device *parent, const char *name,
         void (*release)(struct device *))
{
 return 0;
}
static inline __attribute__((always_inline)) void bsg_unregister_queue(struct request_queue *q)
{
}
# 21 "include/linux/blkdev.h" 2


# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/scatterlist.h" 1






struct scatterlist {



 unsigned long page_link;
 unsigned int offset;
 dma_addr_t dma_address;
 unsigned int length;
};
# 24 "include/linux/blkdev.h" 2

struct scsi_ioctl_command;

struct request_queue;
struct elevator_queue;
struct request_pm_state;
struct blk_trace;
struct request;
struct sg_io_hdr;




struct request;
typedef void (rq_end_io_fn)(struct request *, int);

struct request_list {
 int count[2];
 int starved[2];
 int elvpriv;
 mempool_t *rq_pool;
 wait_queue_head_t wait[2];
};




enum rq_cmd_type_bits {
 REQ_TYPE_FS = 1,
 REQ_TYPE_BLOCK_PC,
 REQ_TYPE_SENSE,
 REQ_TYPE_PM_SUSPEND,
 REQ_TYPE_PM_RESUME,
 REQ_TYPE_PM_SHUTDOWN,
 REQ_TYPE_SPECIAL,
 REQ_TYPE_LINUX_BLOCK,





 REQ_TYPE_ATA_TASKFILE,
 REQ_TYPE_ATA_PC,
};
# 78 "include/linux/blkdev.h"
enum {
 REQ_LB_OP_EJECT = 0x40,
 REQ_LB_OP_FLUSH = 0x41,
 REQ_LB_OP_DISCARD = 0x42,
};




enum rq_flag_bits {
 __REQ_RW,
 __REQ_FAILFAST_DEV,
 __REQ_FAILFAST_TRANSPORT,
 __REQ_FAILFAST_DRIVER,
 __REQ_DISCARD,
 __REQ_SORTED,
 __REQ_SOFTBARRIER,
 __REQ_HARDBARRIER,
 __REQ_FUA,
 __REQ_NOMERGE,
 __REQ_STARTED,
 __REQ_DONTPREP,
 __REQ_QUEUED,
 __REQ_ELVPRIV,
 __REQ_FAILED,
 __REQ_QUIET,
 __REQ_PREEMPT,
 __REQ_ORDERED_COLOR,
 __REQ_RW_SYNC,
 __REQ_ALLOCED,
 __REQ_RW_META,
 __REQ_COPY_USER,
 __REQ_INTEGRITY,
 __REQ_UNPLUG,
 __REQ_NR_BITS,
};
# 147 "include/linux/blkdev.h"
struct request {
 struct list_head queuelist;
 struct call_single_data csd;
 int cpu;

 struct request_queue *q;

 unsigned int cmd_flags;
 enum rq_cmd_type_bits cmd_type;
 unsigned long atomic_flags;





 sector_t sector;
 sector_t hard_sector;
 unsigned long nr_sectors;
 unsigned long hard_nr_sectors;

 unsigned int current_nr_sectors;


 unsigned int hard_cur_sectors;

 struct bio *bio;
 struct bio *biotail;

 struct hlist_node hash;





 union {
  struct rb_node rb_node;
  void *completion_data;
 };





 void *elevator_private;
 void *elevator_private2;

 struct gendisk *rq_disk;
 unsigned long start_time;




 unsigned short nr_phys_segments;

 unsigned short ioprio;

 void *special;
 char *buffer;

 int tag;
 int errors;

 int ref_count;




 unsigned short cmd_len;
 unsigned char __cmd[16];
 unsigned char *cmd;

 unsigned int data_len;
 unsigned int extra_len;
 unsigned int sense_len;
 void *data;
 void *sense;

 unsigned long deadline;
 struct list_head timeout_list;
 unsigned int timeout;
 int retries;




 rq_end_io_fn *end_io;
 void *end_io_data;


 struct request *next_rq;
};

static inline __attribute__((always_inline)) unsigned short req_get_ioprio(struct request *req)
{
 return req->ioprio;
}





struct request_pm_state
{

 int pm_step;

 u32 pm_state;
 void* data;
};

# 1 "include/linux/elevator.h" 1







typedef int (elevator_merge_fn) (struct request_queue *, struct request **,
     struct bio *);

typedef void (elevator_merge_req_fn) (struct request_queue *, struct request *, struct request *);

typedef void (elevator_merged_fn) (struct request_queue *, struct request *, int);

typedef int (elevator_allow_merge_fn) (struct request_queue *, struct request *, struct bio *);

typedef int (elevator_dispatch_fn) (struct request_queue *, int);

typedef void (elevator_add_req_fn) (struct request_queue *, struct request *);
typedef int (elevator_queue_empty_fn) (struct request_queue *);
typedef struct request *(elevator_request_list_fn) (struct request_queue *, struct request *);
typedef void (elevator_completed_req_fn) (struct request_queue *, struct request *);
typedef int (elevator_may_queue_fn) (struct request_queue *, int);

typedef int (elevator_set_req_fn) (struct request_queue *, struct request *, gfp_t);
typedef void (elevator_put_req_fn) (struct request *);
typedef void (elevator_activate_req_fn) (struct request_queue *, struct request *);
typedef void (elevator_deactivate_req_fn) (struct request_queue *, struct request *);

typedef void *(elevator_init_fn) (struct request_queue *);
typedef void (elevator_exit_fn) (struct elevator_queue *);

struct elevator_ops
{
 elevator_merge_fn *elevator_merge_fn;
 elevator_merged_fn *elevator_merged_fn;
 elevator_merge_req_fn *elevator_merge_req_fn;
 elevator_allow_merge_fn *elevator_allow_merge_fn;

 elevator_dispatch_fn *elevator_dispatch_fn;
 elevator_add_req_fn *elevator_add_req_fn;
 elevator_activate_req_fn *elevator_activate_req_fn;
 elevator_deactivate_req_fn *elevator_deactivate_req_fn;

 elevator_queue_empty_fn *elevator_queue_empty_fn;
 elevator_completed_req_fn *elevator_completed_req_fn;

 elevator_request_list_fn *elevator_former_req_fn;
 elevator_request_list_fn *elevator_latter_req_fn;

 elevator_set_req_fn *elevator_set_req_fn;
 elevator_put_req_fn *elevator_put_req_fn;

 elevator_may_queue_fn *elevator_may_queue_fn;

 elevator_init_fn *elevator_init_fn;
 elevator_exit_fn *elevator_exit_fn;
 void (*trim)(struct io_context *);
};



struct elv_fs_entry {
 struct attribute attr;
 ssize_t (*show)(struct elevator_queue *, char *);
 ssize_t (*store)(struct elevator_queue *, const char *, size_t);
};




struct elevator_type
{
 struct list_head list;
 struct elevator_ops ops;
 struct elv_fs_entry *elevator_attrs;
 char elevator_name[(16)];
 struct module *elevator_owner;
};




struct elevator_queue
{
 struct elevator_ops *ops;
 void *elevator_data;
 struct kobject kobj;
 struct elevator_type *elevator_type;
 struct mutex sysfs_lock;
 struct hlist_head *hash;
};




extern void elv_dispatch_sort(struct request_queue *, struct request *);
extern void elv_dispatch_add_tail(struct request_queue *, struct request *);
extern void elv_add_request(struct request_queue *, struct request *, int, int);
extern void __elv_add_request(struct request_queue *, struct request *, int, int);
extern void elv_insert(struct request_queue *, struct request *, int);
extern int elv_merge(struct request_queue *, struct request **, struct bio *);
extern void elv_merge_requests(struct request_queue *, struct request *,
          struct request *);
extern void elv_merged_request(struct request_queue *, struct request *, int);
extern void elv_dequeue_request(struct request_queue *, struct request *);
extern void elv_requeue_request(struct request_queue *, struct request *);
extern int elv_queue_empty(struct request_queue *);
extern struct request *elv_next_request(struct request_queue *q);
extern struct request *elv_former_request(struct request_queue *, struct request *);
extern struct request *elv_latter_request(struct request_queue *, struct request *);
extern int elv_register_queue(struct request_queue *q);
extern void elv_unregister_queue(struct request_queue *q);
extern int elv_may_queue(struct request_queue *, int);
extern void elv_abort_queue(struct request_queue *);
extern void elv_completed_request(struct request_queue *, struct request *);
extern int elv_set_request(struct request_queue *, struct request *, gfp_t);
extern void elv_put_request(struct request_queue *, struct request *);




extern void elv_register(struct elevator_type *);
extern void elv_unregister(struct elevator_type *);




extern ssize_t elv_iosched_show(struct request_queue *, char *);
extern ssize_t elv_iosched_store(struct request_queue *, const char *, size_t);

extern int elevator_init(struct request_queue *, char *);
extern void elevator_exit(struct elevator_queue *);
extern int elv_rq_merge_ok(struct request *, struct bio *);




extern struct request *elv_rb_former_request(struct request_queue *, struct request *);
extern struct request *elv_rb_latter_request(struct request_queue *, struct request *);




extern struct request *elv_rb_add(struct rb_root *, struct request *);
extern void elv_rb_del(struct rb_root *, struct request *);
extern struct request *elv_rb_find(struct rb_root *, sector_t);
# 167 "include/linux/elevator.h"
enum {
 ELV_MQUEUE_MAY,
 ELV_MQUEUE_NO,
 ELV_MQUEUE_MUST,
};
# 258 "include/linux/blkdev.h" 2

typedef void (request_fn_proc) (struct request_queue *q);
typedef int (make_request_fn) (struct request_queue *q, struct bio *bio);
typedef int (prep_rq_fn) (struct request_queue *, struct request *);
typedef void (unplug_fn) (struct request_queue *);
typedef int (prepare_discard_fn) (struct request_queue *, struct request *);

struct bio_vec;
struct bvec_merge_data {
 struct block_device *bi_bdev;
 sector_t bi_sector;
 unsigned bi_size;
 unsigned long bi_rw;
};
typedef int (merge_bvec_fn) (struct request_queue *, struct bvec_merge_data *,
        struct bio_vec *);
typedef void (prepare_flush_fn) (struct request_queue *, struct request *);
typedef void (softirq_done_fn)(struct request *);
typedef int (dma_drain_needed_fn)(struct request *);
typedef int (lld_busy_fn) (struct request_queue *q);

enum blk_eh_timer_return {
 BLK_EH_NOT_HANDLED,
 BLK_EH_HANDLED,
 BLK_EH_RESET_TIMER,
};

typedef enum blk_eh_timer_return (rq_timed_out_fn)(struct request *);

enum blk_queue_state {
 Queue_down,
 Queue_up,
};

struct blk_queue_tag {
 struct request **tag_index;
 unsigned long *tag_map;
 int busy;
 int max_depth;
 int real_max_depth;
 atomic_t refcnt;
};




struct blk_cmd_filter {
 unsigned long read_ok[((256) / (sizeof(long) * 8))];
 unsigned long write_ok[((256) / (sizeof(long) * 8))];
 struct kobject kobj;
};

struct request_queue
{



 struct list_head queue_head;
 struct request *last_merge;
 struct elevator_queue *elevator;




 struct request_list rq;

 request_fn_proc *request_fn;
 make_request_fn *make_request_fn;
 prep_rq_fn *prep_rq_fn;
 unplug_fn *unplug_fn;
 prepare_discard_fn *prepare_discard_fn;
 merge_bvec_fn *merge_bvec_fn;
 prepare_flush_fn *prepare_flush_fn;
 softirq_done_fn *softirq_done_fn;
 rq_timed_out_fn *rq_timed_out_fn;
 dma_drain_needed_fn *dma_drain_needed;
 lld_busy_fn *lld_busy_fn;




 sector_t end_sector;
 struct request *boundary_rq;




 struct timer_list unplug_timer;
 int unplug_thresh;
 unsigned long unplug_delay;
 struct work_struct unplug_work;

 struct backing_dev_info backing_dev_info;





 void *queuedata;




 unsigned long bounce_pfn;
 gfp_t bounce_gfp;




 unsigned long queue_flags;






 spinlock_t __queue_lock;
 spinlock_t *queue_lock;




 struct kobject kobj;




 unsigned long nr_requests;
 unsigned int nr_congestion_on;
 unsigned int nr_congestion_off;
 unsigned int nr_batching;

 unsigned int max_sectors;
 unsigned int max_hw_sectors;
 unsigned short max_phys_segments;
 unsigned short max_hw_segments;
 unsigned short hardsect_size;
 unsigned int max_segment_size;

 unsigned long seg_boundary_mask;
 void *dma_drain_buffer;
 unsigned int dma_drain_size;
 unsigned int dma_pad_mask;
 unsigned int dma_alignment;

 struct blk_queue_tag *queue_tags;
 struct list_head tag_busy_list;

 unsigned int nr_sorted;
 unsigned int in_flight;

 unsigned int rq_timeout;
 struct timer_list timeout;
 struct list_head timeout_list;




 unsigned int sg_timeout;
 unsigned int sg_reserved_size;
 int node;

 struct blk_trace *blk_trace;




 unsigned int ordered, next_ordered, ordseq;
 int orderr, ordcolor;
 struct request pre_flush_rq, bar_rq, post_flush_rq;
 struct request *orig_bar_rq;

 struct mutex sysfs_lock;




 struct blk_cmd_filter cmd_filter;
};
# 460 "include/linux/blkdev.h"
static inline __attribute__((always_inline)) int queue_is_locked(struct request_queue *q)
{




 return 1;

}

static inline __attribute__((always_inline)) void queue_flag_set_unlocked(unsigned int flag,
        struct request_queue *q)
{
 __set_bit(flag, &q->queue_flags);
}

static inline __attribute__((always_inline)) int queue_flag_test_and_clear(unsigned int flag,
         struct request_queue *q)
{
 ({ static int __warned; int __ret_warn_once = !!(!queue_is_locked(q)); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!__warned); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath("include/linux/blkdev.h", 479, ((void *)0)); __builtin_expect(!!(__ret_warn_on), 0); })) __warned = 1; __builtin_expect(!!(__ret_warn_once), 0); });

 if (test_bit(flag, &q->queue_flags)) {
  __clear_bit(flag, &q->queue_flags);
  return 1;
 }

 return 0;
}

static inline __attribute__((always_inline)) int queue_flag_test_and_set(unsigned int flag,
       struct request_queue *q)
{
 ({ static int __warned; int __ret_warn_once = !!(!queue_is_locked(q)); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!__warned); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath("include/linux/blkdev.h", 492, ((void *)0)); __builtin_expect(!!(__ret_warn_on), 0); })) __warned = 1; __builtin_expect(!!(__ret_warn_once), 0); });

 if (!test_bit(flag, &q->queue_flags)) {
  __set_bit(flag, &q->queue_flags);
  return 0;
 }

 return 1;
}

static inline __attribute__((always_inline)) void queue_flag_set(unsigned int flag, struct request_queue *q)
{
 ({ static int __warned; int __ret_warn_once = !!(!queue_is_locked(q)); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!__warned); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath("include/linux/blkdev.h", 504, ((void *)0)); __builtin_expect(!!(__ret_warn_on), 0); })) __warned = 1; __builtin_expect(!!(__ret_warn_once), 0); });
 __set_bit(flag, &q->queue_flags);
}

static inline __attribute__((always_inline)) void queue_flag_clear_unlocked(unsigned int flag,
          struct request_queue *q)
{
 __clear_bit(flag, &q->queue_flags);
}

static inline __attribute__((always_inline)) void queue_flag_clear(unsigned int flag, struct request_queue *q)
{
 ({ static int __warned; int __ret_warn_once = !!(!queue_is_locked(q)); if (__builtin_expect(!!(__ret_warn_once), 0)) if (({ int __ret_warn_on = !!(!__warned); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath("include/linux/blkdev.h", 516, ((void *)0)); __builtin_expect(!!(__ret_warn_on), 0); })) __warned = 1; __builtin_expect(!!(__ret_warn_once), 0); });
 __clear_bit(flag, &q->queue_flags);
}

enum {
# 532 "include/linux/blkdev.h"
 QUEUE_ORDERED_BY_DRAIN = 0x01,
 QUEUE_ORDERED_BY_TAG = 0x02,
 QUEUE_ORDERED_DO_PREFLUSH = 0x10,
 QUEUE_ORDERED_DO_BAR = 0x20,
 QUEUE_ORDERED_DO_POSTFLUSH = 0x40,
 QUEUE_ORDERED_DO_FUA = 0x80,

 QUEUE_ORDERED_NONE = 0x00,

 QUEUE_ORDERED_DRAIN = QUEUE_ORDERED_BY_DRAIN |
       QUEUE_ORDERED_DO_BAR,
 QUEUE_ORDERED_DRAIN_FLUSH = QUEUE_ORDERED_DRAIN |
       QUEUE_ORDERED_DO_PREFLUSH |
       QUEUE_ORDERED_DO_POSTFLUSH,
 QUEUE_ORDERED_DRAIN_FUA = QUEUE_ORDERED_DRAIN |
       QUEUE_ORDERED_DO_PREFLUSH |
       QUEUE_ORDERED_DO_FUA,

 QUEUE_ORDERED_TAG = QUEUE_ORDERED_BY_TAG |
       QUEUE_ORDERED_DO_BAR,
 QUEUE_ORDERED_TAG_FLUSH = QUEUE_ORDERED_TAG |
       QUEUE_ORDERED_DO_PREFLUSH |
       QUEUE_ORDERED_DO_POSTFLUSH,
 QUEUE_ORDERED_TAG_FUA = QUEUE_ORDERED_TAG |
       QUEUE_ORDERED_DO_PREFLUSH |
       QUEUE_ORDERED_DO_FUA,




 QUEUE_ORDSEQ_STARTED = 0x01,
 QUEUE_ORDSEQ_DRAIN = 0x02,
 QUEUE_ORDSEQ_PREFLUSH = 0x04,
 QUEUE_ORDSEQ_BAR = 0x08,
 QUEUE_ORDSEQ_POSTFLUSH = 0x10,
 QUEUE_ORDSEQ_DONE = 0x20,
};
# 619 "include/linux/blkdev.h"
static inline __attribute__((always_inline)) int blk_queue_full(struct request_queue *q, int rw)
{
 if (rw == 0)
  return test_bit(3, &q->queue_flags);
 return test_bit(4, &q->queue_flags);
}

static inline __attribute__((always_inline)) void blk_set_queue_full(struct request_queue *q, int rw)
{
 if (rw == 0)
  queue_flag_set(3, q);
 else
  queue_flag_set(4, q);
}

static inline __attribute__((always_inline)) void blk_clear_queue_full(struct request_queue *q, int rw)
{
 if (rw == 0)
  queue_flag_clear(3, q);
 else
  queue_flag_clear(4, q);
}
# 660 "include/linux/blkdev.h"
extern unsigned long blk_max_low_pfn, blk_max_pfn;
# 688 "include/linux/blkdev.h"
static inline __attribute__((always_inline)) int init_emergency_isa_pool(void)
{
 return 0;
}
static inline __attribute__((always_inline)) void blk_queue_bounce(struct request_queue *q, struct bio **bio)
{
}


struct rq_map_data {
 struct page **pages;
 int page_order;
 int nr_entries;
 unsigned long offset;
 int null_mapped;
};

struct req_iterator {
 int i;
 struct bio *bio;
};
# 724 "include/linux/blkdev.h"
extern int blk_register_queue(struct gendisk *disk);
extern void blk_unregister_queue(struct gendisk *disk);
extern void register_disk(struct gendisk *dev);
extern void generic_make_request(struct bio *bio);
extern void blk_rq_init(struct request_queue *q, struct request *rq);
extern void blk_put_request(struct request *);
extern void __blk_put_request(struct request_queue *, struct request *);
extern struct request *blk_get_request(struct request_queue *, int, gfp_t);
extern void blk_insert_request(struct request_queue *, struct request *, int, void *);
extern void blk_requeue_request(struct request_queue *, struct request *);
extern int blk_rq_check_limits(struct request_queue *q, struct request *rq);
extern int blk_lld_busy(struct request_queue *q);
extern int blk_insert_cloned_request(struct request_queue *q,
         struct request *rq);
extern void blk_plug_device(struct request_queue *);
extern void blk_plug_device_unlocked(struct request_queue *);
extern int blk_remove_plug(struct request_queue *);
extern void blk_recount_segments(struct request_queue *, struct bio *);
extern int scsi_cmd_ioctl(struct request_queue *, struct gendisk *, fmode_t,
     unsigned int, void *);
extern int sg_scsi_ioctl(struct request_queue *, struct gendisk *, fmode_t,
    struct scsi_ioctl_command *);




extern int blk_rq_append_bio(struct request_queue *q, struct request *rq,
        struct bio *bio);






static inline __attribute__((always_inline)) void blk_clear_queue_congested(struct request_queue *q, int rw)
{
 clear_bdi_congested(&q->backing_dev_info, rw);
}





static inline __attribute__((always_inline)) void blk_set_queue_congested(struct request_queue *q, int rw)
{
 set_bdi_congested(&q->backing_dev_info, rw);
}

extern void blk_start_queue(struct request_queue *q);
extern void blk_stop_queue(struct request_queue *q);
extern void blk_sync_queue(struct request_queue *q);
extern void __blk_stop_queue(struct request_queue *q);
extern void __blk_run_queue(struct request_queue *);
extern void blk_run_queue(struct request_queue *);
extern void blk_start_queueing(struct request_queue *);
extern int blk_rq_map_user(struct request_queue *, struct request *,
      struct rq_map_data *, void *, unsigned long,
      gfp_t);
extern int blk_rq_unmap_user(struct bio *);
extern int blk_rq_map_kern(struct request_queue *, struct request *, void *, unsigned int, gfp_t);
extern int blk_rq_map_user_iov(struct request_queue *, struct request *,
          struct rq_map_data *, struct sg_iovec *, int,
          unsigned int, gfp_t);
extern int blk_execute_rq(struct request_queue *, struct gendisk *,
     struct request *, int);
extern void blk_execute_rq_nowait(struct request_queue *, struct gendisk *,
      struct request *, int, rq_end_io_fn *);
extern void blk_unplug(struct request_queue *q);

static inline __attribute__((always_inline)) struct request_queue *bdev_get_queue(struct block_device *bdev)
{
 return bdev->bd_disk->queue;
}

static inline __attribute__((always_inline)) void blk_run_backing_dev(struct backing_dev_info *bdi,
           struct page *page)
{
 if (bdi && bdi->unplug_io_fn)
  bdi->unplug_io_fn(bdi, page);
}

static inline __attribute__((always_inline)) void blk_run_address_space(struct address_space *mapping)
{
 if (mapping)
  blk_run_backing_dev(mapping->backing_dev_info, ((void *)0));
}

extern void blkdev_dequeue_request(struct request *req);
# 822 "include/linux/blkdev.h"
extern int blk_end_request(struct request *rq, int error,
    unsigned int nr_bytes);
extern int __blk_end_request(struct request *rq, int error,
    unsigned int nr_bytes);
extern int blk_end_bidi_request(struct request *rq, int error,
    unsigned int nr_bytes, unsigned int bidi_bytes);
extern void end_request(struct request *, int);
extern int blk_end_request_callback(struct request *rq, int error,
    unsigned int nr_bytes,
    int (drv_callback)(struct request *));
extern void blk_complete_request(struct request *);
extern void __blk_complete_request(struct request *);
extern void blk_abort_request(struct request *);
extern void blk_abort_queue(struct request_queue *);
extern void blk_update_request(struct request *rq, int error,
          unsigned int nr_bytes);






extern unsigned int blk_rq_bytes(struct request *rq);
extern unsigned int blk_rq_cur_bytes(struct request *rq);




extern struct request_queue *blk_init_queue_node(request_fn_proc *rfn,
     spinlock_t *lock, int node_id);
extern struct request_queue *blk_init_queue(request_fn_proc *, spinlock_t *);
extern void blk_cleanup_queue(struct request_queue *);
extern void blk_queue_make_request(struct request_queue *, make_request_fn *);
extern void blk_queue_bounce_limit(struct request_queue *, u64);
extern void blk_queue_max_sectors(struct request_queue *, unsigned int);
extern void blk_queue_max_phys_segments(struct request_queue *, unsigned short);
extern void blk_queue_max_hw_segments(struct request_queue *, unsigned short);
extern void blk_queue_max_segment_size(struct request_queue *, unsigned int);
extern void blk_queue_hardsect_size(struct request_queue *, unsigned short);
extern void blk_queue_stack_limits(struct request_queue *t, struct request_queue *b);
extern void blk_queue_dma_pad(struct request_queue *, unsigned int);
extern void blk_queue_update_dma_pad(struct request_queue *, unsigned int);
extern int blk_queue_dma_drain(struct request_queue *q,
          dma_drain_needed_fn *dma_drain_needed,
          void *buf, unsigned int size);
extern void blk_queue_lld_busy(struct request_queue *q, lld_busy_fn *fn);
extern void blk_queue_segment_boundary(struct request_queue *, unsigned long);
extern void blk_queue_prep_rq(struct request_queue *, prep_rq_fn *pfn);
extern void blk_queue_merge_bvec(struct request_queue *, merge_bvec_fn *);
extern void blk_queue_dma_alignment(struct request_queue *, int);
extern void blk_queue_update_dma_alignment(struct request_queue *, int);
extern void blk_queue_softirq_done(struct request_queue *, softirq_done_fn *);
extern void blk_queue_set_discard(struct request_queue *, prepare_discard_fn *);
extern void blk_queue_rq_timed_out(struct request_queue *, rq_timed_out_fn *);
extern void blk_queue_rq_timeout(struct request_queue *, unsigned int);
extern struct backing_dev_info *blk_get_backing_dev_info(struct block_device *bdev);
extern int blk_queue_ordered(struct request_queue *, unsigned, prepare_flush_fn *);
extern bool blk_do_ordered(struct request_queue *, struct request **);
extern unsigned blk_ordered_cur_seq(struct request_queue *);
extern unsigned blk_ordered_req_seq(struct request *);
extern bool blk_ordered_complete_seq(struct request_queue *, unsigned, int);

extern int blk_rq_map_sg(struct request_queue *, struct request *, struct scatterlist *);
extern void blk_dump_rq_flags(struct request *, char *);
extern void generic_unplug_device(struct request_queue *);
extern long nr_blockdev_pages(void);

int blk_get_queue(struct request_queue *);
struct request_queue *blk_alloc_queue(gfp_t);
struct request_queue *blk_alloc_queue_node(gfp_t, int);
extern void blk_put_queue(struct request_queue *);





extern int blk_queue_start_tag(struct request_queue *, struct request *);
extern struct request *blk_queue_find_tag(struct request_queue *, int);
extern void blk_queue_end_tag(struct request_queue *, struct request *);
extern int blk_queue_init_tags(struct request_queue *, int, struct blk_queue_tag *);
extern void blk_queue_free_tags(struct request_queue *);
extern int blk_queue_resize_tags(struct request_queue *, int);
extern void blk_queue_invalidate_tags(struct request_queue *);
extern struct blk_queue_tag *blk_init_tags(int);
extern void blk_free_tags(struct blk_queue_tag *);

static inline __attribute__((always_inline)) struct request *blk_map_queue_find_tag(struct blk_queue_tag *bqt,
      int tag)
{
 if (__builtin_expect(!!(bqt == ((void *)0) || tag >= bqt->real_max_depth), 0))
  return ((void *)0);
 return bqt->tag_index[tag];
}

extern int blkdev_issue_flush(struct block_device *, sector_t *);
extern int blkdev_issue_discard(struct block_device *,
    sector_t sector, sector_t nr_sects, gfp_t);

static inline __attribute__((always_inline)) int sb_issue_discard(struct super_block *sb,
       sector_t block, sector_t nr_blocks)
{
 block <<= (sb->s_blocksize_bits - 9);
 nr_blocks <<= (sb->s_blocksize_bits - 9);
 return blkdev_issue_discard(sb->s_bdev, block, nr_blocks, ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
}




extern int blk_verify_command(struct blk_cmd_filter *filter,
         unsigned char *cmd, fmode_t has_write_perm);
extern void blk_unregister_filter(struct gendisk *disk);
extern void blk_set_cmd_filter_defaults(struct blk_cmd_filter *filter);
# 947 "include/linux/blkdev.h"
static inline __attribute__((always_inline)) int queue_hardsect_size(struct request_queue *q)
{
 int retval = 512;

 if (q && q->hardsect_size)
  retval = q->hardsect_size;

 return retval;
}

static inline __attribute__((always_inline)) int bdev_hardsect_size(struct block_device *bdev)
{
 return queue_hardsect_size(bdev_get_queue(bdev));
}

static inline __attribute__((always_inline)) int queue_dma_alignment(struct request_queue *q)
{
 return q ? q->dma_alignment : 511;
}

static inline __attribute__((always_inline)) int blk_rq_aligned(struct request_queue *q, void *addr,
     unsigned int len)
{
 unsigned int alignment = queue_dma_alignment(q) | q->dma_pad_mask;
 return !((unsigned long)addr & alignment) && !(len & alignment);
}


static inline __attribute__((always_inline)) unsigned int blksize_bits(unsigned int size)
{
 unsigned int bits = 8;
 do {
  bits++;
  size >>= 1;
 } while (size > 256);
 return bits;
}

static inline __attribute__((always_inline)) unsigned int block_size(struct block_device *bdev)
{
 return bdev->bd_block_size;
}

typedef struct {struct page *v;} Sector;

unsigned char *read_dev_sector(struct block_device *, sector_t, Sector *);

static inline __attribute__((always_inline)) void put_dev_sector(Sector p)
{
 put_page(p.v);
}

struct work_struct;
int kblockd_schedule_work(struct request_queue *q, struct work_struct *work);
# 1080 "include/linux/blkdev.h"
struct block_device_operations {
 int (*open) (struct block_device *, fmode_t);
 int (*release) (struct gendisk *, fmode_t);
 int (*locked_ioctl) (struct block_device *, fmode_t, unsigned, unsigned long);
 int (*ioctl) (struct block_device *, fmode_t, unsigned, unsigned long);
 int (*compat_ioctl) (struct block_device *, fmode_t, unsigned, unsigned long);
 int (*direct_access) (struct block_device *, sector_t,
      void **, unsigned long *);
 int (*media_changed) (struct gendisk *);
 int (*revalidate_disk) (struct gendisk *);
 int (*getgeo)(struct block_device *, struct hd_geometry *);
 struct module *owner;
};

extern int __blkdev_driver_ioctl(struct block_device *, fmode_t, unsigned int,
     unsigned long);
# 31 "mm/page_alloc.c" 2

# 1 "include/linux/oom.h" 1
# 14 "include/linux/oom.h"
struct zonelist;
struct notifier_block;




enum oom_constraint {
 CONSTRAINT_NONE,
 CONSTRAINT_CPUSET,
 CONSTRAINT_MEMORY_POLICY,
};

extern int try_set_zone_oom(struct zonelist *zonelist, gfp_t gfp_flags);
extern void clear_zonelist_oom(struct zonelist *zonelist, gfp_t gfp_flags);

extern void out_of_memory(struct zonelist *zonelist, gfp_t gfp_mask, int order);
extern int register_oom_notifier(struct notifier_block *nb);
extern int unregister_oom_notifier(struct notifier_block *nb);
# 33 "mm/page_alloc.c" 2



# 1 "include/linux/cpu.h" 1
# 28 "include/linux/cpu.h"
struct cpu {
 int node_id;
 int hotpluggable;
 struct sys_device sysdev;
};

extern int register_cpu(struct cpu *cpu, int num);
extern struct sys_device *get_cpu_sysdev(unsigned cpu);

extern int cpu_add_sysdev_attr(struct sysdev_attribute *attr);
extern void cpu_remove_sysdev_attr(struct sysdev_attribute *attr);

extern int cpu_add_sysdev_attr_group(struct attribute_group *attrs);
extern void cpu_remove_sysdev_attr_group(struct attribute_group *attrs);

extern int sched_create_sysfs_power_savings_entries(struct sysdev_class *cls);




struct notifier_block;
# 79 "include/linux/cpu.h"
static inline __attribute__((always_inline)) int register_cpu_notifier(struct notifier_block *nb)
{
 return 0;
}

static inline __attribute__((always_inline)) void unregister_cpu_notifier(struct notifier_block *nb)
{
}

static inline __attribute__((always_inline)) void cpu_hotplug_init(void)
{
}

static inline __attribute__((always_inline)) void cpu_maps_update_begin(void)
{
}

static inline __attribute__((always_inline)) void cpu_maps_update_done(void)
{
}


extern struct sysdev_class cpu_sysdev_class;
# 129 "include/linux/cpu.h"
static inline __attribute__((always_inline)) void cpuhotplug_mutex_lock(struct mutex *cpu_hp_mutex)
{ }
static inline __attribute__((always_inline)) void cpuhotplug_mutex_unlock(struct mutex *cpu_hp_mutex)
{ }
# 150 "include/linux/cpu.h"
static inline __attribute__((always_inline)) int disable_nonboot_cpus(void) { return 0; }
static inline __attribute__((always_inline)) void enable_nonboot_cpus(void) {}
# 37 "mm/page_alloc.c" 2
# 1 "include/linux/cpuset.h" 1
# 86 "include/linux/cpuset.h"
static inline __attribute__((always_inline)) int cpuset_init_early(void) { return 0; }
static inline __attribute__((always_inline)) int cpuset_init(void) { return 0; }
static inline __attribute__((always_inline)) void cpuset_init_smp(void) {}

static inline __attribute__((always_inline)) void cpuset_cpus_allowed(struct task_struct *p,
           struct cpumask *mask)
{
 *mask = (*(cpumask_t *)cpu_possible_mask);
}
static inline __attribute__((always_inline)) void cpuset_cpus_allowed_locked(struct task_struct *p,
           struct cpumask *mask)
{
 *mask = (*(cpumask_t *)cpu_possible_mask);
}

static inline __attribute__((always_inline)) nodemask_t cpuset_mems_allowed(struct task_struct *p)
{
 return node_states[N_POSSIBLE];
}


static inline __attribute__((always_inline)) void cpuset_init_current_mems_allowed(void) {}
static inline __attribute__((always_inline)) void cpuset_update_task_memory_state(void) {}

static inline __attribute__((always_inline)) int cpuset_nodemask_valid_mems_allowed(nodemask_t *nodemask)
{
 return 1;
}

static inline __attribute__((always_inline)) int cpuset_zone_allowed_softwall(struct zone *z, gfp_t gfp_mask)
{
 return 1;
}

static inline __attribute__((always_inline)) int cpuset_zone_allowed_hardwall(struct zone *z, gfp_t gfp_mask)
{
 return 1;
}

static inline __attribute__((always_inline)) int cpuset_mems_allowed_intersects(const struct task_struct *tsk1,
       const struct task_struct *tsk2)
{
 return 1;
}

static inline __attribute__((always_inline)) void cpuset_memory_pressure_bump(void) {}

static inline __attribute__((always_inline)) void cpuset_task_status_allowed(struct seq_file *m,
      struct task_struct *task)
{
}

static inline __attribute__((always_inline)) void cpuset_lock(void) {}
static inline __attribute__((always_inline)) void cpuset_unlock(void) {}

static inline __attribute__((always_inline)) int cpuset_mem_spread_node(void)
{
 return 0;
}

static inline __attribute__((always_inline)) int cpuset_do_page_mem_spread(void)
{
 return 0;
}

static inline __attribute__((always_inline)) int cpuset_do_slab_mem_spread(void)
{
 return 0;
}

static inline __attribute__((always_inline)) int current_cpuset_is_being_rebound(void)
{
 return 0;
}

static inline __attribute__((always_inline)) void rebuild_sched_domains(void)
{
 partition_sched_domains(1, ((void *)0), ((void *)0));
}

static inline __attribute__((always_inline)) void cpuset_print_task_mems_allowed(struct task_struct *p)
{
}
# 38 "mm/page_alloc.c" 2


# 1 "include/linux/vmalloc.h" 1







struct vm_area_struct;
# 26 "include/linux/vmalloc.h"
struct vm_struct {
 struct vm_struct *next;
 void *addr;
 unsigned long size;
 unsigned long flags;
 struct page **pages;
 unsigned int nr_pages;
 unsigned long phys_addr;
 void *caller;
};




extern void vm_unmap_ram(const void *mem, unsigned int count);
extern void *vm_map_ram(struct page **pages, unsigned int count,
    int node, pgprot_t prot);
extern void vm_unmap_aliases(void);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) vmalloc_init(void);






extern void *vmalloc(unsigned long size);
extern void *vmalloc_user(unsigned long size);
extern void *vmalloc_node(unsigned long size, int node);
extern void *vmalloc_exec(unsigned long size);
extern void *vmalloc_32(unsigned long size);
extern void *vmalloc_32_user(unsigned long size);
extern void *__vmalloc(unsigned long size, gfp_t gfp_mask, pgprot_t prot);
extern void *__vmalloc_area(struct vm_struct *area, gfp_t gfp_mask,
    pgprot_t prot);
extern void vfree(const void *addr);

extern void *vmap(struct page **pages, unsigned int count,
   unsigned long flags, pgprot_t prot);
extern void vunmap(const void *addr);

extern int remap_vmalloc_range(struct vm_area_struct *vma, void *addr,
       unsigned long pgoff);
void vmalloc_sync_all(void);





static inline __attribute__((always_inline)) size_t get_vm_area_size(const struct vm_struct *area)
{

 return area->size - (1UL << 12);
}

extern struct vm_struct *get_vm_area(unsigned long size, unsigned long flags);
extern struct vm_struct *get_vm_area_caller(unsigned long size,
     unsigned long flags, void *caller);
extern struct vm_struct *__get_vm_area(unsigned long size, unsigned long flags,
     unsigned long start, unsigned long end);
extern struct vm_struct *__get_vm_area_caller(unsigned long size,
     unsigned long flags,
     unsigned long start, unsigned long end,
     void *caller);
extern struct vm_struct *get_vm_area_node(unsigned long size,
       unsigned long flags, int node,
       gfp_t gfp_mask);
extern struct vm_struct *remove_vm_area(const void *addr);

extern int map_vm_area(struct vm_struct *area, pgprot_t prot,
   struct page ***pages);
extern int map_kernel_range_noflush(unsigned long start, unsigned long size,
        pgprot_t prot, struct page **pages);
extern void unmap_kernel_range_noflush(unsigned long addr, unsigned long size);
extern void unmap_kernel_range(unsigned long addr, unsigned long size);


extern struct vm_struct *alloc_vm_area(size_t size);
extern void free_vm_area(struct vm_struct *area);


extern long vread(char *buf, char *addr, unsigned long count);
extern long vwrite(char *buf, char *addr, unsigned long count);




extern rwlock_t vmlist_lock;
extern struct vm_struct *vmlist;
extern __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) void vm_area_register_early(struct vm_struct *vm, size_t align);
# 41 "mm/page_alloc.c" 2
# 1 "include/linux/mempolicy.h" 1
# 18 "include/linux/mempolicy.h"
enum {
 MPOL_DEFAULT,
 MPOL_PREFERRED,
 MPOL_BIND,
 MPOL_INTERLEAVE,
 MPOL_MAX,
};
# 64 "include/linux/mempolicy.h"
struct mm_struct;
# 244 "include/linux/mempolicy.h"
struct mempolicy {};

static inline __attribute__((always_inline)) int mpol_equal(struct mempolicy *a, struct mempolicy *b)
{
 return 1;
}

static inline __attribute__((always_inline)) void mpol_put(struct mempolicy *p)
{
}

static inline __attribute__((always_inline)) void mpol_cond_put(struct mempolicy *pol)
{
}

static inline __attribute__((always_inline)) struct mempolicy *mpol_cond_copy(struct mempolicy *to,
      struct mempolicy *from)
{
 return from;
}

static inline __attribute__((always_inline)) void mpol_get(struct mempolicy *pol)
{
}

static inline __attribute__((always_inline)) struct mempolicy *mpol_dup(struct mempolicy *old)
{
 return ((void *)0);
}

struct shared_policy {};

static inline __attribute__((always_inline)) int mpol_set_shared_policy(struct shared_policy *info,
     struct vm_area_struct *vma,
     struct mempolicy *new)
{
 return -22;
}

static inline __attribute__((always_inline)) void mpol_shared_policy_init(struct shared_policy *sp,
      struct mempolicy *mpol)
{
}

static inline __attribute__((always_inline)) void mpol_free_shared_policy(struct shared_policy *p)
{
}

static inline __attribute__((always_inline)) struct mempolicy *
mpol_shared_policy_lookup(struct shared_policy *sp, unsigned long idx)
{
 return ((void *)0);
}




static inline __attribute__((always_inline)) void numa_policy_init(void)
{
}

static inline __attribute__((always_inline)) void numa_default_policy(void)
{
}

static inline __attribute__((always_inline)) void mpol_rebind_task(struct task_struct *tsk,
     const nodemask_t *new)
{
}

static inline __attribute__((always_inline)) void mpol_rebind_mm(struct mm_struct *mm, nodemask_t *new)
{
}

static inline __attribute__((always_inline)) void mpol_fix_fork_child_flag(struct task_struct *p)
{
}

static inline __attribute__((always_inline)) struct zonelist *huge_zonelist(struct vm_area_struct *vma,
    unsigned long addr, gfp_t gfp_flags,
    struct mempolicy **mpol, nodemask_t **nodemask)
{
 *mpol = ((void *)0);
 *nodemask = ((void *)0);
 return node_zonelist(0, gfp_flags);
}

static inline __attribute__((always_inline)) int do_migrate_pages(struct mm_struct *mm,
   const nodemask_t *from_nodes,
   const nodemask_t *to_nodes, int flags)
{
 return 0;
}

static inline __attribute__((always_inline)) void check_highest_zone(int k)
{
}


static inline __attribute__((always_inline)) int mpol_parse_str(char *str, struct mempolicy **mpol,
    int no_context)
{
 return 1;
}

static inline __attribute__((always_inline)) int mpol_to_str(char *buffer, int maxlen, struct mempolicy *pol,
    int no_context)
{
 return 0;
}
# 42 "mm/page_alloc.c" 2
# 1 "include/linux/stop_machine.h" 1
# 58 "include/linux/stop_machine.h"
static inline __attribute__((always_inline)) int stop_machine(int (*fn)(void *), void *data,
          const struct cpumask *cpus)
{
 int ret;
 do { __asm__("cpsid i	@ __cli" : : : "memory", "cc"); trace_hardirqs_off(); } while (0);
 ret = fn(data);
 do { trace_hardirqs_on(); __asm__("cpsie i	@ __sti" : : : "memory", "cc"); } while (0);
 return ret;
}

static inline __attribute__((always_inline)) int stop_machine_create(void) { return 0; }
static inline __attribute__((always_inline)) void stop_machine_destroy(void) { }
# 43 "mm/page_alloc.c" 2
# 1 "include/linux/sort.h" 1





void sort(void *base, size_t num, size_t size,
   int (*cmp)(const void *, const void *),
   void (*swap)(void *, void *, int));
# 44 "mm/page_alloc.c" 2


# 1 "include/linux/fault-inject.h" 1
# 87 "include/linux/fault-inject.h"
static inline __attribute__((always_inline)) bool should_failslab(size_t size, gfp_t gfpflags)
{
 return false;
}
# 47 "mm/page_alloc.c" 2
# 1 "include/linux/page-isolation.h" 1
# 13 "include/linux/page-isolation.h"
extern int
start_isolate_page_range(unsigned long start_pfn, unsigned long end_pfn);





extern int
undo_isolate_page_range(unsigned long start_pfn, unsigned long end_pfn);




extern int
test_pages_isolated(unsigned long start_pfn, unsigned long end_pfn);





extern int set_migratetype_isolate(struct page *page);
extern void unset_migratetype_isolate(struct page *page);
# 48 "mm/page_alloc.c" 2
# 1 "include/linux/page_cgroup.h" 1
# 75 "include/linux/page_cgroup.h"
struct page_cgroup;

static inline __attribute__((always_inline)) void __attribute__ ((__section__(".meminit.text"))) pgdat_page_cgroup_init(struct pglist_data *pgdat)
{
}

static inline __attribute__((always_inline)) struct page_cgroup *lookup_page_cgroup(struct page *page)
{
 return ((void *)0);
}

static inline __attribute__((always_inline)) void page_cgroup_init(void)
{
}
# 102 "include/linux/page_cgroup.h"
static inline __attribute__((always_inline))
struct mem_cgroup *swap_cgroup_record(swp_entry_t ent, struct mem_cgroup *mem)
{
 return ((void *)0);
}

static inline __attribute__((always_inline))
struct mem_cgroup *lookup_swap_cgroup(swp_entry_t ent)
{
 return ((void *)0);
}

static inline __attribute__((always_inline)) int
swap_cgroup_swapon(int type, unsigned long max_pages)
{
 return 0;
}

static inline __attribute__((always_inline)) void swap_cgroup_swapoff(int type)
{
 return;
}
# 49 "mm/page_alloc.c" 2

# 1 "include/trace/page_alloc.h" 1
# 9 "include/trace/page_alloc.h"
extern struct tracepoint __tracepoint_page_alloc; static inline __attribute__((always_inline)) void trace_page_alloc(struct page *page, unsigned int order) { do { if (!0) { if (__builtin_expect(!!((__tracepoint_page_alloc.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_page_alloc)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_page_alloc)->funcs) *)&((&__tracepoint_page_alloc)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(struct page *page, unsigned int order))(*it_func))(page, order); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_page_alloc.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_page_alloc)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_page_alloc)->funcs) *)&((&__tracepoint_page_alloc)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(struct page *page, unsigned int order))(*it_func))(page, order); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) void _trace_page_alloc(struct page *page, unsigned int order) { do { if (!1) { if (__builtin_expect(!!((__tracepoint_page_alloc.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_page_alloc)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_page_alloc)->funcs) *)&((&__tracepoint_page_alloc)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(struct page *page, unsigned int order))(*it_func))(page, order); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_page_alloc.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_page_alloc)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_page_alloc)->funcs) *)&((&__tracepoint_page_alloc)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(struct page *page, unsigned int order))(*it_func))(page, order); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) int register_trace_page_alloc(void (*probe)(struct page *page, unsigned int order)) { return tracepoint_probe_register("page_alloc", (void *)probe); } static inline __attribute__((always_inline)) int unregister_trace_page_alloc(void (*probe)(struct page *page, unsigned int order)) { return tracepoint_probe_unregister("page_alloc", (void *)probe); };


extern struct tracepoint __tracepoint_page_free; static inline __attribute__((always_inline)) void trace_page_free(struct page *page, unsigned int order) { do { if (!0) { if (__builtin_expect(!!((__tracepoint_page_free.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_page_free)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_page_free)->funcs) *)&((&__tracepoint_page_free)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(struct page *page, unsigned int order))(*it_func))(page, order); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_page_free.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_page_free)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_page_free)->funcs) *)&((&__tracepoint_page_free)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(struct page *page, unsigned int order))(*it_func))(page, order); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) void _trace_page_free(struct page *page, unsigned int order) { do { if (!1) { if (__builtin_expect(!!((__tracepoint_page_free.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_page_free)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_page_free)->funcs) *)&((&__tracepoint_page_free)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(struct page *page, unsigned int order))(*it_func))(page, order); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } else { if (__builtin_expect(!!((__tracepoint_page_free.state__imv)), 0)) do { void **it_func; do { do { (current_thread_info()->preempt_count) += (1); } while (0); __asm__ __volatile__("": : :"memory"); } while (0); it_func = ({ typeof((&__tracepoint_page_free)->funcs) _________p1 = (*(volatile typeof((&__tracepoint_page_free)->funcs) *)&((&__tracepoint_page_free)->funcs)); do { } while(0); (_________p1); }); if (it_func) { do { ((void(*)(struct page *page, unsigned int order))(*it_func))(page, order); } while (*(++it_func)); } do { do { __asm__ __volatile__("": : :"memory"); do { (current_thread_info()->preempt_count) -= (1); } while (0); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); } while (0); } } while (0); } static inline __attribute__((always_inline)) int register_trace_page_free(void (*probe)(struct page *page, unsigned int order)) { return tracepoint_probe_register("page_free", (void *)probe); } static inline __attribute__((always_inline)) int unregister_trace_page_free(void (*probe)(struct page *page, unsigned int order)) { return tracepoint_probe_unregister("page_free", (void *)probe); };
# 51 "mm/page_alloc.c" 2
# 1 "include/linux/kmemleak.h" 1
# 59 "include/linux/kmemleak.h"
static inline __attribute__((always_inline)) void kmemleak_init(void)
{
}
static inline __attribute__((always_inline)) void kmemleak_alloc(const void *ptr, size_t size, int min_count,
      gfp_t gfp)
{
}
static inline __attribute__((always_inline)) void kmemleak_alloc_recursive(const void *ptr, size_t size,
         int min_count, unsigned long flags,
         gfp_t gfp)
{
}
static inline __attribute__((always_inline)) void kmemleak_free(const void *ptr)
{
}
static inline __attribute__((always_inline)) void kmemleak_free_recursive(const void *ptr, unsigned long flags)
{
}
static inline __attribute__((always_inline)) void kmemleak_not_leak(const void *ptr)
{
}
static inline __attribute__((always_inline)) void kmemleak_ignore(const void *ptr)
{
}
static inline __attribute__((always_inline)) void kmemleak_scan_area(const void *ptr, unsigned long offset,
          size_t length, gfp_t gfp)
{
}
static inline __attribute__((always_inline)) void kmemleak_erase(void **ptr)
{
}
static inline __attribute__((always_inline)) void kmemleak_no_scan(const void *ptr)
{
}
# 52 "mm/page_alloc.c" 2

# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/tlbflush.h" 1
# 20 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/tlbflush.h"
# 1 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/glue.h" 1
# 21 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/tlbflush.h" 2
# 182 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/tlbflush.h"
struct cpu_tlb_fns {
 void (*flush_user_range)(unsigned long, unsigned long, struct vm_area_struct *);
 void (*flush_kern_range)(unsigned long, unsigned long);
 unsigned long tlb_flags;
};
# 201 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/tlbflush.h"
extern void v6wbi_flush_user_tlb_range(unsigned long, unsigned long, struct vm_area_struct *);
extern void v6wbi_flush_kern_tlb_range(unsigned long, unsigned long);



extern struct cpu_tlb_fns cpu_tlb;
# 283 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/tlbflush.h"
static inline __attribute__((always_inline)) void local_flush_tlb_all(void)
{
 const int zero = 0;
 const unsigned int __tlb_flag = cpu_tlb.tlb_flags;

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 31))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 31)))))
  __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 4" : : "r" (0) : "memory");

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 8))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 8)))))
  asm("mcr p15, 0, %0, c6, c0, 0" : : "r" (zero) : "cc");
 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 9) | (1 << 12))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 9) | (1 << 12)))))
  asm("mcr p15, 0, %0, c8, c7, 0" : : "r" (zero) : "cc");
 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 10) | (1 << 13))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 10) | (1 << 13)))))
  asm("mcr p15, 0, %0, c8, c6, 0" : : "r" (zero) : "cc");
 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 11) | (1 << 14))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 11) | (1 << 14)))))
  asm("mcr p15, 0, %0, c8, c5, 0" : : "r" (zero) : "cc");

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17))))) {



  asm("mcr p15, 0, %0, c7, c5, 6" : : "r" (zero) : "cc");
  __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 4" : : "r" (0) : "memory");
  __asm__ __volatile__ ("mcr p15, 0, %0, c7, c5, 4" : : "r" (0) : "memory");
 }
}

static inline __attribute__((always_inline)) void local_flush_tlb_mm(struct mm_struct *mm)
{
 const int zero = 0;
 const int asid = ((mm)->context.id & 255);
 const unsigned int __tlb_flag = cpu_tlb.tlb_flags;

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 31))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 31)))))
  __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 4" : : "r" (0) : "memory");

 if (test_bit((0), (mm->cpu_vm_mask).bits)) {
  if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 8))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 8)))))
   asm("mcr p15, 0, %0, c6, c0, 0" : : "r" (zero) : "cc");
  if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 9))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 9)))))
   asm("mcr p15, 0, %0, c8, c7, 0" : : "r" (zero) : "cc");
  if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 10))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 10)))))
   asm("mcr p15, 0, %0, c8, c6, 0" : : "r" (zero) : "cc");
  if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 11))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 11)))))
   asm("mcr p15, 0, %0, c8, c5, 0" : : "r" (zero) : "cc");
 }

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 16))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 16)))))
  asm("mcr p15, 0, %0, c8, c7, 2" : : "r" (asid) : "cc");
 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 17))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 17)))))
  asm("mcr p15, 0, %0, c8, c6, 2" : : "r" (asid) : "cc");
 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 18))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 18)))))
  asm("mcr p15, 0, %0, c8, c5, 2" : : "r" (asid) : "cc");

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17))))) {



  asm("mcr p15, 0, %0, c7, c5, 6" : : "r" (zero) : "cc");
  __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 4" : : "r" (0) : "memory");
 }
}

static inline __attribute__((always_inline)) void
local_flush_tlb_page(struct vm_area_struct *vma, unsigned long uaddr)
{
 const int zero = 0;
 const unsigned int __tlb_flag = cpu_tlb.tlb_flags;

 uaddr = (uaddr & (~((1UL << 12)-1))) | ((vma->vm_mm)->context.id & 255);

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 31))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 31)))))
  __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 4" : : "r" (0) : "memory");

 if (test_bit((0), (vma->vm_mm->cpu_vm_mask).bits)) {
  if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 0))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 0)))))
   asm("mcr p15, 0, %0, c6, c0, 0" : : "r" (uaddr) : "cc");
  if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 1))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 1)))))
   asm("mcr p15, 0, %0, c8, c7, 1" : : "r" (uaddr) : "cc");
  if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 2))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 2)))))
   asm("mcr p15, 0, %0, c8, c6, 1" : : "r" (uaddr) : "cc");
  if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 3))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 3)))))
   asm("mcr p15, 0, %0, c8, c5, 1" : : "r" (uaddr) : "cc");
  if (!((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 3))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 3)))) && ((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 11))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 11)))))
   asm("mcr p15, 0, %0, c8, c5, 0" : : "r" (zero) : "cc");
 }

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 4))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 4)))))
  asm("mcr p15, 0, %0, c8, c7, 1" : : "r" (uaddr) : "cc");
 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 5))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 5)))))
  asm("mcr p15, 0, %0, c8, c6, 1" : : "r" (uaddr) : "cc");
 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 6))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 6)))))
  asm("mcr p15, 0, %0, c8, c5, 1" : : "r" (uaddr) : "cc");

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17))))) {



  asm("mcr p15, 0, %0, c7, c5, 6" : : "r" (zero) : "cc");
  __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 4" : : "r" (0) : "memory");
 }
}

static inline __attribute__((always_inline)) void local_flush_tlb_kernel_page(unsigned long kaddr)
{
 const int zero = 0;
 const unsigned int __tlb_flag = cpu_tlb.tlb_flags;

 kaddr &= (~((1UL << 12)-1));

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 31))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 31)))))
  __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 4" : : "r" (0) : "memory");

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 0))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 0)))))
  asm("mcr p15, 0, %0, c6, c0, 0" : : "r" (kaddr) : "cc");
 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 1))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 1)))))
  asm("mcr p15, 0, %0, c8, c7, 1" : : "r" (kaddr) : "cc");
 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 2))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 2)))))
  asm("mcr p15, 0, %0, c8, c6, 1" : : "r" (kaddr) : "cc");
 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 3))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 3)))))
  asm("mcr p15, 0, %0, c8, c5, 1" : : "r" (kaddr) : "cc");
 if (!((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 3))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 3)))) && ((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 11))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 11)))))
  asm("mcr p15, 0, %0, c8, c5, 0" : : "r" (zero) : "cc");

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 4))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 4)))))
  asm("mcr p15, 0, %0, c8, c7, 1" : : "r" (kaddr) : "cc");
 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 5))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 5)))))
  asm("mcr p15, 0, %0, c8, c6, 1" : : "r" (kaddr) : "cc");
 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 6))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 6)))))
  asm("mcr p15, 0, %0, c8, c5, 1" : : "r" (kaddr) : "cc");

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17))))) {



  asm("mcr p15, 0, %0, c7, c5, 6" : : "r" (zero) : "cc");
  __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 4" : : "r" (0) : "memory");
  __asm__ __volatile__ ("mcr p15, 0, %0, c7, c5, 4" : : "r" (0) : "memory");
 }
}
# 437 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/tlbflush.h"
static inline __attribute__((always_inline)) void flush_pmd_entry(pmd_t *pmd)
{
 const unsigned int __tlb_flag = cpu_tlb.tlb_flags;

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 30))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 30)))))
  asm("mcr	p15, 0, %0, c7, c10, 1	@ flush_pmd"
   : : "r" (pmd) : "cc");

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 29))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 29)))))
  asm("mcr	p15, 1, %0, c15, c9, 1  @ L2 flush_pmd"
   : : "r" (pmd) : "cc");

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 31))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 31)))))
  __asm__ __volatile__ ("mcr p15, 0, %0, c7, c10, 4" : : "r" (0) : "memory");
}

static inline __attribute__((always_inline)) void clean_pmd_entry(pmd_t *pmd)
{
 const unsigned int __tlb_flag = cpu_tlb.tlb_flags;

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 30))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 30)))))
  asm("mcr	p15, 0, %0, c7, c10, 1	@ flush_pmd"
   : : "r" (pmd) : "cc");

 if (((((-1UL) & (-1UL) & (-1UL) & (-1UL) & (-1UL) & ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) & (-1UL)) & ((1 << 29))) || (__tlb_flag & (0 | 0 | 0 | 0 | 0 | ((1 << 31) | (1 << 30) | (1 << 14) | (1 << 13) | (1 << 6) | (1 << 5) | (1 << 18) | (1 << 17)) | 0) & ((1 << 29)))))
  asm("mcr	p15, 1, %0, c15, c9, 1  @ L2 flush_pmd"
   : : "r" (pmd) : "cc");
}
# 497 "/home/kinhi/src/linux-2.6.29.y-BRANCH_SS-RT/arch/arm/include/asm/tlbflush.h"
extern void update_mmu_cache(struct vm_area_struct *vma, unsigned long addr, pte_t pte);
# 54 "mm/page_alloc.c" 2

# 1 "mm/internal.h" 1
# 16 "mm/internal.h"
void free_pgtables(struct mmu_gather *tlb, struct vm_area_struct *start_vma,
  unsigned long floor, unsigned long ceiling);

extern void prep_compound_page(struct page *page, unsigned long order);
extern void prep_compound_gigantic_page(struct page *page, unsigned long order);

static inline __attribute__((always_inline)) void set_page_count(struct page *page, int v)
{
 atomic_set(&page->_count, v);
}





static inline __attribute__((always_inline)) void set_page_refcounted(struct page *page)
{
 do { } while (0);
 do { } while (0);
 set_page_count(page, 1);
}

static inline __attribute__((always_inline)) void __put_page(struct page *page)
{
 (void) atomic_sub_return(1, &page->_count);
}




extern int isolate_lru_page(struct page *page);
extern void putback_lru_page(struct page *page);




extern unsigned long highest_memmap_pfn;
extern void __free_pages_bootmem(struct page *page, unsigned int order);






static inline __attribute__((always_inline)) unsigned long page_order(struct page *page)
{
 do { } while (0);
 return ((page)->private);
}

extern long mlock_vma_pages_range(struct vm_area_struct *vma,
   unsigned long start, unsigned long end);
extern void munlock_vma_pages_range(struct vm_area_struct *vma,
   unsigned long start, unsigned long end);
static inline __attribute__((always_inline)) void munlock_vma_pages_all(struct vm_area_struct *vma)
{
 munlock_vma_pages_range(vma, vma->vm_start, vma->vm_end);
}
# 82 "mm/internal.h"
static inline __attribute__((always_inline)) void unevictable_migrate_page(struct page *new, struct page *old)
{
 if (TestClearPageUnevictable(old))
  SetPageUnevictable(new);
}
# 99 "mm/internal.h"
static inline __attribute__((always_inline)) int is_mlocked_vma(struct vm_area_struct *vma, struct page *page)
{
 do { } while (0);

 if (__builtin_expect(!!((vma->vm_flags & (0x00002000 | (0x00004000 | 0x00040000 | 0x00080000 | 0x00000400))) != 0x00002000), 1))
  return 0;

 if (!TestSetPageMlocked(page)) {
  __inc_zone_page_state(page, NR_MLOCK);
  count_vm_event(UNEVICTABLE_PGMLOCKED);
 }
 return 1;
}




extern void mlock_vma_page(struct page *page);
# 127 "mm/internal.h"
extern void __clear_page_mlock(struct page *page);
static inline __attribute__((always_inline)) void clear_page_mlock(struct page *page)
{
 if (__builtin_expect(!!(TestClearPageMlocked(page)), 0))
  __clear_page_mlock(page);
}





static inline __attribute__((always_inline)) void mlock_migrate_page(struct page *newpage, struct page *page)
{
 if (TestClearPageMlocked(page)) {
  unsigned long flags;

  do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0);
  __dec_zone_page_state(page, NR_MLOCK);
  SetPageMlocked(newpage);
  __inc_zone_page_state(newpage, NR_MLOCK);
  do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0);
 }
}






static inline __attribute__((always_inline)) void free_page_mlock(struct page *page)
{
 if (__builtin_expect(!!(TestClearPageMlocked(page)), 0)) {
  unsigned long flags;

  do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0);
  __dec_zone_page_state(page, NR_MLOCK);
  __count_vm_event(UNEVICTABLE_MLOCKFREED);
  do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0);
 }
}
# 185 "mm/internal.h"
static inline __attribute__((always_inline)) struct page *mem_map_offset(struct page *base, int offset)
{
 if (__builtin_expect(!!(offset >= (1 << (11 - 1))), 0))
  return (mem_map + ((((unsigned long)((base) - mem_map) + ((0x80000000UL) >> 12)) + offset) - ((0x80000000UL) >> 12)));
 return base + offset;
}





static inline __attribute__((always_inline)) struct page *mem_map_next(struct page *iter,
      struct page *base, int offset)
{
 if (__builtin_expect(!!((offset & ((1 << (11 - 1)) - 1)) == 0), 0)) {
  unsigned long pfn = ((unsigned long)((base) - mem_map) + ((0x80000000UL) >> 12)) + offset;
  if (!((pfn) >= ((0x80000000UL) >> 12) && (pfn) < (((0x80000000UL) >> 12) + max_mapnr)))
   return ((void *)0);
  return (mem_map + ((pfn) - ((0x80000000UL) >> 12)));
 }
 return iter + 1;
}
# 221 "mm/internal.h"
enum mminit_level {
 MMINIT_WARNING,
 MMINIT_VERIFY,
 MMINIT_TRACE
};
# 246 "mm/internal.h"
static inline __attribute__((always_inline)) void mminit_dprintk(enum mminit_level level,
    const char *prefix, const char *fmt, ...)
{
}

static inline __attribute__((always_inline)) void mminit_verify_pageflags_layout(void)
{
}

static inline __attribute__((always_inline)) void mminit_verify_page_links(struct page *page,
  enum zone_type zone, unsigned long nid, unsigned long pfn)
{
}

static inline __attribute__((always_inline)) void mminit_verify_zonelist(void)
{
}







static inline __attribute__((always_inline)) void mminit_validate_memmodel_limits(unsigned long *start_pfn,
    unsigned long *end_pfn)
{
}







int __get_user_pages(struct task_struct *tsk, struct mm_struct *mm,
       unsigned long start, int len, int flags,
       struct page **pages, struct vm_area_struct **vmas);
# 56 "mm/page_alloc.c" 2




nodemask_t node_states[NR_NODE_STATES] = {
 [N_POSSIBLE] = ((nodemask_t) { { [((((1 << 0)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))-1] = ( (((1 << 0)) % 32) ? (1UL<<(((1 << 0)) % 32))-1 : ~0UL ) } }),
 [N_ONLINE] = { { [0] = 1UL } },

 [N_NORMAL_MEMORY] = { { [0] = 1UL } },



 [N_CPU] = { { [0] = 1UL } },

};
extern typeof(node_states) node_states; extern void *__crc_node_states __attribute__((weak)); static const unsigned long __kcrctab_node_states __attribute__((__used__)) __attribute__((section("__kcrctab" ""), unused)) = (unsigned long) &__crc_node_states; static const char __kstrtab_node_states[] __attribute__((section("__ksymtab_strings"), aligned(1))) = "" "node_states"; static const struct kernel_symbol __ksymtab_node_states __attribute__((__used__)) __attribute__((section("__ksymtab" ""), unused)) = { (unsigned long)&node_states, __kstrtab_node_states };

unsigned long totalram_pages ;
unsigned long totalreserve_pages ;
unsigned long highest_memmap_pfn ;
int percpu_pagelist_fraction;





static const char __tpstrtab_page_alloc[] __attribute__((section("__tracepoints_strings"))) = "page_alloc"; struct tracepoint __tracepoint_page_alloc __attribute__((section("__tracepoints"), aligned(32))) = { __tpstrtab_page_alloc, 0, ((void *)0) };
static const char __tpstrtab_page_free[] __attribute__((section("__tracepoints_strings"))) = "page_free"; struct tracepoint __tracepoint_page_free __attribute__((section("__tracepoints"), aligned(32))) = { __tpstrtab_page_free, 0, ((void *)0) };

static void __free_pages_ok(struct page *page, unsigned int order);
# 98 "mm/page_alloc.c"
int sysctl_lowmem_reserve_ratio[2 -1] = {
# 108 "mm/page_alloc.c"
  32,
};

extern typeof(totalram_pages) totalram_pages; extern void *__crc_totalram_pages __attribute__((weak)); static const unsigned long __kcrctab_totalram_pages __attribute__((__used__)) __attribute__((section("__kcrctab" ""), unused)) = (unsigned long) &__crc_totalram_pages; static const char __kstrtab_totalram_pages[] __attribute__((section("__ksymtab_strings"), aligned(1))) = "" "totalram_pages"; static const struct kernel_symbol __ksymtab_totalram_pages __attribute__((__used__)) __attribute__((section("__ksymtab" ""), unused)) = { (unsigned long)&totalram_pages, __kstrtab_totalram_pages };

static char * const zone_names[2] = {






  "Normal",



  "Movable",
};

int min_free_kbytes = 1024;

unsigned long __attribute__ ((__section__(".meminit.data"))) nr_kernel_pages;
unsigned long __attribute__ ((__section__(".meminit.data"))) nr_all_pages;
static unsigned long __attribute__ ((__section__(".meminit.data"))) dma_reserve;
# 172 "mm/page_alloc.c"
static __attribute__((__section__(".data" ""))) spinlock_t per_cpu__lock_pcp_locks_locked = (spinlock_t) { .lock = { .wait_lock = { .raw_lock = { }, } }, }; __attribute__((__section__(".data" ""))) __typeof__(int) per_cpu__pcp_locks_locked;


static inline __attribute__((always_inline)) void __lock_cpu_pcp(unsigned long *flags, int cpu)
{

 do { if (__builtin_types_compatible_p(typeof((&per_cpu__lock_pcp_locks_locked)), raw_spinlock_t *)) do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&per_cpu__lock_pcp_locks_locked)); } while (0); else if (__builtin_types_compatible_p(typeof((&per_cpu__lock_pcp_locks_locked)), spinlock_t *)) rt_spin_lock((spinlock_t *)(&per_cpu__lock_pcp_locks_locked)); else __bad_func_type(); } while (0);
 flags = 0;



}

static inline __attribute__((always_inline)) void lock_cpu_pcp(unsigned long *flags, int *this_cpu)
{

 (void)(*({ spinlock_t *__lock; int __cpu; again: __cpu = 0; __lock = &per_cpu__lock_pcp_locks_locked; do { if (__builtin_types_compatible_p(typeof((__lock)), raw_spinlock_t *)) do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(__lock)); } while (0); else if (__builtin_types_compatible_p(typeof((__lock)), spinlock_t *)) rt_spin_lock((spinlock_t *)(__lock)); else __bad_func_type(); } while (0); if (!((__cpu) == 0)) { do { if (__builtin_types_compatible_p(typeof((__lock)), raw_spinlock_t *)) do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(__lock)); } while (0); else if (__builtin_types_compatible_p(typeof((__lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(__lock)); else __bad_func_type(); } while (0); goto again; } *(this_cpu) = __cpu; &per_cpu__pcp_locks_locked; }));
 flags = 0;




}

static inline __attribute__((always_inline)) void unlock_cpu_pcp(unsigned long flags, int this_cpu)
{

 do { (void)this_cpu; do { if (__builtin_types_compatible_p(typeof((&per_cpu__lock_pcp_locks_locked)), raw_spinlock_t *)) do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&per_cpu__lock_pcp_locks_locked)); } while (0); else if (__builtin_types_compatible_p(typeof((&per_cpu__lock_pcp_locks_locked)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&per_cpu__lock_pcp_locks_locked)); else __bad_func_type(); } while (0); } while (0);



}

static struct per_cpu_pageset *
get_zone_pcp(struct zone *zone, unsigned long *flags, int *this_cpu)
{
 lock_cpu_pcp(flags, this_cpu);
 return (&(zone)->pageset[(*this_cpu)]);
}

static void
put_zone_pcp(struct zone *zone, unsigned long flags, int this_cpu)
{
 unlock_cpu_pcp(flags, this_cpu);
}






int page_group_by_mobility_disabled ;

static void set_pageblock_migratetype(struct page *page, int migratetype)
{
 set_pageblock_flags_group(page, (unsigned long)migratetype,
     PB_migrate, PB_migrate_end);
}
# 271 "mm/page_alloc.c"
static inline __attribute__((always_inline)) int bad_range(struct zone *zone, struct page *page)
{
 return 0;
}


static void bad_page(struct page *page)
{
 static unsigned long resume;
 static unsigned long nr_shown;
 static unsigned long nr_unshown;





 if (nr_shown == 60) {
  if ((({ unsigned long __dummy; typeof(resume) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ({ unsigned long __dummy; typeof(jiffies) __dummy2; (void)(&__dummy == &__dummy2); 1; }) && ((long)(jiffies) - (long)(resume) < 0))) {
   nr_unshown++;
   goto out;
  }
  if (nr_unshown) {
   printk("<1>"
         "BUG: Bad page state: %lu messages suppressed\n",
    nr_unshown);
   nr_unshown = 0;
  }
  nr_shown = 0;
 }
 if (nr_shown++ == 0)
  resume = jiffies + 60 * 100;

 printk("<1>" "BUG: Bad page state in process %s  pfn:%05lx\n",
  (get_current())->comm, ((unsigned long)((page) - mem_map) + ((0x80000000UL) >> 12)));
 printk("<1>"
  "page:%p flags:%p count:%d mapcount:%d mapping:%p index:%lx\n",
  page, (void *)page->flags, page_count(page),
  page_mapcount(page), page->mapping, page->index);

 dump_stack();
out:

 __ClearPageBuddy(page);
 add_taint(5);
}
# 332 "mm/page_alloc.c"
static void free_compound_page(struct page *page)
{
 __free_pages_ok(page, compound_order(page));
}

void prep_compound_page(struct page *page, unsigned long order)
{
 int i;
 int nr_pages = 1 << order;

 set_compound_page_dtor(page, free_compound_page);
 set_compound_order(page, order);
 __SetPageHead(page);
 for (i = 1; i < nr_pages; i++) {
  struct page *p = page + i;

  __SetPageTail(p);
  p->first_page = page;
 }
}
# 370 "mm/page_alloc.c"
static int destroy_compound_page(struct page *page, unsigned long order)
{
 int i;
 int nr_pages = 1 << order;
 int bad = 0;

 if (__builtin_expect(!!(compound_order(page) != order), 0) ||
     __builtin_expect(!!(!PageHead(page)), 0)) {
  bad_page(page);
  bad++;
 }

 __ClearPageHead(page);

 for (i = 1; i < nr_pages; i++) {
  struct page *p = page + i;

  if (__builtin_expect(!!(!PageTail(p) | (p->first_page != page)), 0)) {
   bad_page(page);
   bad++;
  }
  __ClearPageTail(p);
 }

 return bad;
}

static inline __attribute__((always_inline)) void prep_zero_page(struct page *page, int order, gfp_t gfp_flags)
{
 int i;





 do { } while (0);
 for (i = 0; i < (1 << order); i++)
  clear_highpage(page + i);
}

static inline __attribute__((always_inline)) void set_page_order(struct page *page, int order)
{
 ((page)->private = (order));
 __SetPageBuddy(page);
}

static inline __attribute__((always_inline)) void rmv_page_order(struct page *page)
{
 __ClearPageBuddy(page);
 ((page)->private = (0));
}
# 439 "mm/page_alloc.c"
static inline __attribute__((always_inline)) struct page *
__page_find_buddy(struct page *page, unsigned long page_idx, unsigned int order)
{
 unsigned long buddy_idx = page_idx ^ (1 << order);

 return page + (buddy_idx - page_idx);
}

static inline __attribute__((always_inline)) unsigned long
__find_combined_index(unsigned long page_idx, unsigned int order)
{
 return (page_idx & ~(1 << order));
}
# 466 "mm/page_alloc.c"
static inline __attribute__((always_inline)) int page_is_buddy(struct page *page, struct page *buddy,
        int order)
{
 if (!(1))
  return 0;

 if (page_zone_id(page) != page_zone_id(buddy))
  return 0;

 if (PageBuddy(buddy) && page_order(buddy) == order) {
  do { if (__builtin_expect(!!(page_count(buddy) != 0), 0)) __bug("mm/page_alloc.c", 476); } while(0);
  return 1;
 }
 return 0;
}
# 506 "mm/page_alloc.c"
static inline __attribute__((always_inline)) void __free_one_page(struct page *page,
  struct zone *zone, unsigned int order)
{
 unsigned long page_idx;
 int order_size = 1 << order;
 int migratetype = get_pageblock_migratetype(page);

 if (__builtin_expect(!!(PageCompound(page)), 0))
  if (__builtin_expect(!!(destroy_compound_page(page, order)), 0))
   return;

 page_idx = ((unsigned long)((page) - mem_map) + ((0x80000000UL) >> 12)) & ((1 << 11) - 1);

 do { } while (0);
 do { } while (0);

 __mod_zone_page_state(zone, NR_FREE_PAGES, order_size);
 while (order < 11 -1) {
  unsigned long combined_idx;
  struct page *buddy;

  buddy = __page_find_buddy(page, page_idx, order);
  if (!page_is_buddy(page, buddy, order))
   break;


  list_del(&buddy->lru);
  zone->free_area[order].nr_free--;
  rmv_page_order(buddy);
  combined_idx = __find_combined_index(page_idx, order);
  page = page + (combined_idx - page_idx);
  page_idx = combined_idx;
  order++;
 }
 set_page_order(page, order);
 list_add(&page->lru,
  &zone->free_area[order].free_list[migratetype]);
 zone->free_area[order].nr_free++;
}

static inline __attribute__((always_inline)) int free_pages_check(struct page *page)
{
 free_page_mlock(page);
 if (__builtin_expect(!!(page_mapcount(page) | (page->mapping != ((void *)0)) | (page_count(page) != 0) | (page->flags & (1 << PG_lru | 1 << PG_private | 1 << PG_locked | 1 << PG_buddy | 1 << PG_writeback | 1 << PG_reserved | 1 << PG_slab | 1 << PG_swapcache | 1 << PG_active | (1 << PG_unevictable) | (1 << PG_mlocked)))), 0)) {



  bad_page(page);
  return 1;
 }
 if (page->flags & ((1 << 22) - 1))
  page->flags &= ~((1 << 22) - 1);
 return 0;
}
# 572 "mm/page_alloc.c"
static void
free_pages_bulk(struct zone *zone, struct list_head *list, int order)
{
 unsigned long flags;

 do { ; flags = ({ unsigned long __ret; if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) __ret = ({ unsigned long __flags; do { ({ unsigned long __dummy; typeof(__flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (__flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0); do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); __flags; }); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) __ret = _spin_lock_irqsave((spinlock_t *)(&zone->lock)); else __ret = __bad_func_type(); __ret; }); } while (0);
 zone_clear_flag(zone, ZONE_ALL_UNRECLAIMABLE);
 zone->pages_scanned = 0;

 while (!list_empty(list)) {
  struct page *page = ({ const typeof( ((struct page *)0)->lru ) *__mptr = ((list)->next); (struct page *)( (char *)__mptr - __builtin_offsetof(struct page,lru) );});

  list_del(&page->lru);
  __free_one_page(page, zone, order);

  ({ unsigned long __ret; if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) __ret = __cond_resched_raw_spinlock((raw_spinlock_t *)(&zone->lock)); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) __ret = __cond_resched_spinlock((spinlock_t *)(&zone->lock)); else __ret = __bad_func_type(); __ret; });

 }
 do { ; do { if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0); do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); } while (0); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&zone->lock)); else __bad_func_type(); } while (0); } while (0);
}

static void free_one_page(struct zone *zone, struct page *page, int order)
{
 unsigned long flags;

 do { ; flags = ({ unsigned long __ret; if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) __ret = ({ unsigned long __flags; do { ({ unsigned long __dummy; typeof(__flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (__flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0); do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); __flags; }); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) __ret = _spin_lock_irqsave((spinlock_t *)(&zone->lock)); else __ret = __bad_func_type(); __ret; }); } while (0);

 zone_clear_flag(zone, ZONE_ALL_UNRECLAIMABLE);
 zone->pages_scanned = 0;
 __free_one_page(page, zone, order);
 do { ; do { if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0); do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); } while (0); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&zone->lock)); else __bad_func_type(); } while (0); } while (0);
}

static void __free_pages_ok(struct page *page, unsigned int order)
{
 unsigned long flags;
 int i, this_cpu, bad = 0;

 trace_page_free(page, order);

 kmemcheck_free_shadow(page, order);

 for (i = 0 ; i < (1 << order) ; ++i)
  bad += free_pages_check(page + i);
 if (bad)
  return;

 if (!PageHighMem(page)) {
  debug_check_no_locks_freed(lowmem_page_address(page),(1UL << 12)<<order);
  debug_check_no_obj_freed(lowmem_page_address(page),
        (1UL << 12) << order);
 }
 arch_free_page(page, order);
 kernel_map_pages(page, 1 << order, 0);

 lock_cpu_pcp(&flags, &this_cpu);
 count_vm_events(PGFREE, 1 << order);
 unlock_cpu_pcp(flags, this_cpu);
 free_one_page(page_zone(page), page, order);
}




void __attribute__ ((__section__(".meminit.text"))) __free_pages_bootmem(struct page *page, unsigned int order)
{
 if (order == 0) {
  __ClearPageReserved(page);
  set_page_count(page, 0);
  set_page_refcounted(page);
  __free_pages((page), 0);
 } else {
  int loop;

  prefetch(page);
  for (loop = 0; loop < 32; loop++) {
   struct page *p = &page[loop];

   if (loop + 1 < 32)
    prefetch(p + 1);
   __ClearPageReserved(p);
   set_page_count(p, 0);
  }

  set_page_refcounted(page);
  __free_pages(page, order);
 }
}
# 676 "mm/page_alloc.c"
static inline __attribute__((always_inline)) void expand(struct zone *zone, struct page *page,
 int low, int high, struct free_area *area,
 int migratetype)
{
 unsigned long size = 1 << high;

 while (high > low) {
  area--;
  high--;
  size >>= 1;
  do { } while (0);
  list_add(&page[size].lru, &area->free_list[migratetype]);
  area->nr_free++;
  set_page_order(&page[size], high);
 }
}




static int prep_new_page(struct page *page, int order, gfp_t gfp_flags)
{
 if (__builtin_expect(!!(page_mapcount(page) | (page->mapping != ((void *)0)) | (page_count(page) != 0) | (page->flags & ((1 << 22) - 1))), 0)) {



  bad_page(page);
  return 1;
 }

 ((page)->private = (0));
 set_page_refcounted(page);

 arch_alloc_page(page, order);
 kernel_map_pages(page, 1 << order, 1);

 if (gfp_flags & (( gfp_t)0x8000u))
  prep_zero_page(page, order, gfp_flags);

 if (order && (gfp_flags & (( gfp_t)0x4000u)))
  prep_compound_page(page, order);

 return 0;
}





static struct page *__rmqueue_smallest(struct zone *zone, unsigned int order,
      int migratetype)
{
 unsigned int current_order;
 struct free_area * area;
 struct page *page;


 for (current_order = order; current_order < 11; ++current_order) {
  area = &(zone->free_area[current_order]);
  if (list_empty(&area->free_list[migratetype]))
   continue;

  page = ({ const typeof( ((struct page *)0)->lru ) *__mptr = (area->free_list[migratetype].next); (struct page *)( (char *)__mptr - __builtin_offsetof(struct page,lru) );});

  list_del(&page->lru);
  rmv_page_order(page);
  area->nr_free--;
  __mod_zone_page_state(zone, NR_FREE_PAGES, - (1UL << order));
  expand(zone, page, order, current_order, area, migratetype);
  return page;
 }

 return ((void *)0);
}






static int fallbacks[5][5 -1] = {
 [0] = { 1, 2, 3 },
 [1] = { 0, 2, 3 },
 [2] = { 1, 0, 3 },
 [3] = { 3, 3, 3 },
};






static int move_freepages(struct zone *zone,
     struct page *start_page, struct page *end_page,
     int migratetype)
{
 struct page *page;
 unsigned long order;
 int pages_moved = 0;
# 784 "mm/page_alloc.c"
 do { if (__builtin_expect(!!(page_zone(start_page) != page_zone(end_page)), 0)) __bug("mm/page_alloc.c", 784); } while(0);


 for (page = start_page; page <= end_page;) {

  do { } while (0);

  if (!(1)) {
   page++;
   continue;
  }

  if (!PageBuddy(page)) {
   page++;
   continue;
  }

  order = page_order(page);
  list_del(&page->lru);
  list_add(&page->lru,
   &zone->free_area[order].free_list[migratetype]);
  page += 1 << order;
  pages_moved += 1 << order;
 }

 return pages_moved;
}

static int move_freepages_block(struct zone *zone, struct page *page,
    int migratetype)
{
 unsigned long start_pfn, end_pfn;
 struct page *start_page, *end_page;

 start_pfn = ((unsigned long)((page) - mem_map) + ((0x80000000UL) >> 12));
 start_pfn = start_pfn & ~((1UL << (11 -1))-1);
 start_page = (mem_map + ((start_pfn) - ((0x80000000UL) >> 12)));
 end_page = start_page + (1UL << (11 -1)) - 1;
 end_pfn = start_pfn + (1UL << (11 -1)) - 1;


 if (start_pfn < zone->zone_start_pfn)
  start_page = page;
 if (end_pfn >= zone->zone_start_pfn + zone->spanned_pages)
  return 0;

 return move_freepages(zone, start_page, end_page, migratetype);
}


static struct page *__rmqueue_fallback(struct zone *zone, int order,
      int start_migratetype)
{
 struct free_area * area;
 int current_order;
 struct page *page;
 int migratetype, i;


 for (current_order = 11 -1; current_order >= order;
      --current_order) {
  for (i = 0; i < 5 - 1; i++) {
   migratetype = fallbacks[start_migratetype][i];


   if (migratetype == 3)
    continue;

   area = &(zone->free_area[current_order]);
   if (list_empty(&area->free_list[migratetype]))
    continue;

   page = ({ const typeof( ((struct page *)0)->lru ) *__mptr = (area->free_list[migratetype].next); (struct page *)( (char *)__mptr - __builtin_offsetof(struct page,lru) );});

   area->nr_free--;







   if (__builtin_expect(!!(current_order >= ((11 -1) >> 1)), 0) ||
     start_migratetype == 1) {
    unsigned long pages;
    pages = move_freepages_block(zone, page,
        start_migratetype);


    if (pages >= (1 << ((11 -1)-1)))
     set_pageblock_migratetype(page,
        start_migratetype);

    migratetype = start_migratetype;
   }


   list_del(&page->lru);
   rmv_page_order(page);
   __mod_zone_page_state(zone, NR_FREE_PAGES,
       -(1UL << order));

   if (current_order == (11 -1))
    set_pageblock_migratetype(page,
       start_migratetype);

   expand(zone, page, order, current_order, area, migratetype);
   return page;
  }
 }


 return __rmqueue_smallest(zone, order, 3);
}





static struct page *__rmqueue(struct zone *zone, unsigned int order,
      int migratetype)
{
 struct page *page;

 page = __rmqueue_smallest(zone, order, migratetype);

 if (__builtin_expect(!!(!page), 0))
  page = __rmqueue_fallback(zone, order, migratetype);

 return page;
}






static int rmqueue_bulk(struct zone *zone, unsigned int order,
   unsigned long count, struct list_head *list,
   int migratetype)
{
 int i;

 do { if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) rt_spin_lock((spinlock_t *)(&zone->lock)); else __bad_func_type(); } while (0);
 for (i = 0; i < count; ++i) {
  struct page *page = __rmqueue(zone, order, migratetype);
  if (__builtin_expect(!!(page == ((void *)0)), 0))
   break;
# 942 "mm/page_alloc.c"
  list_add(&page->lru, list);
  ((page)->private = (migratetype));
  list = &page->lru;
 }
 do { if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&zone->lock)); else __bad_func_type(); } while (0);
 return i;
}

static void
isolate_pcp_pages(int count, struct list_head *src, struct list_head *dst)
{
 while (count--) {
  struct page *page = ({ const typeof( ((struct page *)0)->lru ) *__mptr = ((src)->prev); (struct page *)( (char *)__mptr - __builtin_offsetof(struct page,lru) );});
  list_move(&page->lru, dst);
 }
}
# 995 "mm/page_alloc.c"
static void drain_pages(unsigned int cpu)
{
 unsigned long flags;
 struct zone *zone;

 for (zone = (first_online_pgdat())->node_zones; zone; zone = next_zone(zone)) {
  struct per_cpu_pageset *pset;
  struct per_cpu_pages *pcp;
  struct list_head free_list = { &(free_list), &(free_list) };

  if (!populated_zone(zone))
   continue;

  __lock_cpu_pcp(&flags, cpu);
  pset = (&(zone)->pageset[(cpu)]);
  if (!pset) {
   unlock_cpu_pcp(flags, cpu);
   ({ int __ret_warn_on = !!(1); if (__builtin_expect(!!(__ret_warn_on), 0)) warn_slowpath("mm/page_alloc.c", 1012, ((void *)0)); __builtin_expect(!!(__ret_warn_on), 0); });
   continue;
  }
  pcp = &pset->pcp;
  isolate_pcp_pages(pcp->count, &pcp->list, &free_list);
  pcp->count = 0;
  unlock_cpu_pcp(flags, cpu);
  free_pages_bulk(zone, &free_list, 0);
 }
}




void drain_local_pages(void *arg)
{
 drain_pages(0);
}


static void drain_local_pages_work(struct work_struct *wrk)
{
 drain_pages(0);
}





void drain_all_pages(void)
{
# 1063 "mm/page_alloc.c"
 if (sizeof(void *)*1 < (1UL << 12))
  schedule_on_each_cpu(drain_local_pages_work);
 else {
  static int once;
  if (!once) {
   printk("<3>" "Can't drain all CPUS due to possible recursion\n");
   once = 1;
  }
  drain_local_pages(((void *)0));
 }




}
# 1118 "mm/page_alloc.c"
static void free_hot_cold_page(struct page *page, int cold)
{
 struct zone *zone = page_zone(page);
 struct per_cpu_pageset *pset;
 struct per_cpu_pages *pcp;
 unsigned long flags;
 int this_cpu;

 trace_page_free(page, 0);

 kmemcheck_free_shadow(page, 0);

 if (PageAnon(page))
  page->mapping = ((void *)0);
 if (free_pages_check(page))
  return;

 if (!PageHighMem(page)) {
  debug_check_no_locks_freed(lowmem_page_address(page), (1UL << 12));
  debug_check_no_obj_freed(lowmem_page_address(page), (1UL << 12));
 }
 arch_free_page(page, 0);
 kernel_map_pages(page, 1, 0);

 pset = get_zone_pcp(zone, &flags, &this_cpu);
 pcp = &pset->pcp;

 count_vm_event(PGFREE);

 if (cold)
  list_add_tail(&page->lru, &pcp->list);
 else
  list_add(&page->lru, &pcp->list);
 ((page)->private = (get_pageblock_migratetype(page)));
 pcp->count++;
 if (pcp->count >= pcp->high) {
  struct list_head free_list = { &(free_list), &(free_list) };

  isolate_pcp_pages(pcp->batch, &pcp->list, &free_list);
  pcp->count -= pcp->batch;
  put_zone_pcp(zone, flags, this_cpu);
  free_pages_bulk(zone, &free_list, 0);
 } else
  put_zone_pcp(zone, flags, this_cpu);
}

void free_hot_page(struct page *page)
{
 free_hot_cold_page(page, 0);
}

void free_cold_page(struct page *page)
{
 free_hot_cold_page(page, 1);
}
# 1182 "mm/page_alloc.c"
void split_page(struct page *page, unsigned int order)
{
 int i;

 do { } while (0);
 do { } while (0);
# 1198 "mm/page_alloc.c"
 for (i = 1; i < (1 << order); i++)
  set_page_refcounted(page + i);
}






static struct page *buffered_rmqueue(struct zone *preferred_zone,
   struct zone *zone, int order, gfp_t gfp_flags)
{
 unsigned long flags;
 struct page *page;
 int cold = !!(gfp_flags & (( gfp_t)0x100u));
 struct per_cpu_pageset *pset;
 int migratetype = allocflags_to_migratetype(gfp_flags);
 int this_cpu;

again:
 pset = get_zone_pcp(zone, &flags, &this_cpu);
 if (__builtin_expect(!!(order == 0), 1)) {
  struct per_cpu_pages *pcp = &pset->pcp;

  if (!pcp->count) {
   pcp->count = rmqueue_bulk(zone, 0,
     pcp->batch, &pcp->list, migratetype);
   if (__builtin_expect(!!(!pcp->count), 0))
    goto failed;
  }


  if (cold) {
   for (page = ({ const typeof( ((typeof(*page) *)0)->lru ) *__mptr = ((&pcp->list)->prev); (typeof(*page) *)( (char *)__mptr - __builtin_offsetof(typeof(*page),lru) );}); prefetch(page->lru.prev), &page->lru != (&pcp->list); page = ({ const typeof( ((typeof(*page) *)0)->lru ) *__mptr = (page->lru.prev); (typeof(*page) *)( (char *)__mptr - __builtin_offsetof(typeof(*page),lru) );}))
    if (((page)->private) == migratetype)
     break;
  } else {
   for (page = ({ const typeof( ((typeof(*page) *)0)->lru ) *__mptr = ((&pcp->list)->next); (typeof(*page) *)( (char *)__mptr - __builtin_offsetof(typeof(*page),lru) );}); prefetch(page->lru.next), &page->lru != (&pcp->list); page = ({ const typeof( ((typeof(*page) *)0)->lru ) *__mptr = (page->lru.next); (typeof(*page) *)( (char *)__mptr - __builtin_offsetof(typeof(*page),lru) );}))
    if (((page)->private) == migratetype)
     break;
  }


  if (__builtin_expect(!!(&page->lru == &pcp->list), 0)) {
   pcp->count += rmqueue_bulk(zone, 0,
     pcp->batch, &pcp->list, migratetype);
   page = ({ const typeof( ((struct page *)0)->lru ) *__mptr = (pcp->list.next); (struct page *)( (char *)__mptr - __builtin_offsetof(struct page,lru) );});
  }

  list_del(&page->lru);
  pcp->count--;
 } else {
  do { if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) rt_spin_lock((spinlock_t *)(&zone->lock)); else __bad_func_type(); } while (0);
  page = __rmqueue(zone, order, migratetype);
  do { if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&zone->lock)); else __bad_func_type(); } while (0);
  if (!page)
   goto failed;
 }

 __count_vm_events(PGALLOC_NORMAL - ZONE_NORMAL + ((zone) - (zone)->zone_pgdat->node_zones), 1 << order);
 do { } while (0);
 put_zone_pcp(zone, flags, this_cpu);

 do { } while (0);
 if (prep_new_page(page, order, gfp_flags))
  goto again;
 return page;

failed:
 put_zone_pcp(zone, flags, this_cpu);
 return ((void *)0);
}
# 1367 "mm/page_alloc.c"
static inline __attribute__((always_inline)) int should_fail_alloc_page(gfp_t gfp_mask, unsigned int order)
{
 return 0;
}







int zone_watermark_ok(struct zone *z, int order, unsigned long mark,
        int classzone_idx, int alloc_flags)
{

 long min = mark;
 long free_pages = zone_page_state(z, NR_FREE_PAGES) - (1 << order) + 1;
 int o;

 if (alloc_flags & 0x20)
  min -= min / 2;
 if (alloc_flags & 0x10)
  min -= min / 4;

 if (free_pages <= min + z->lowmem_reserve[classzone_idx])
  return 0;
 for (o = 0; o < order; o++) {

  free_pages -= z->free_area[o].nr_free << o;


  min >>= 1;

  if (free_pages <= min)
   return 0;
 }
 return 1;
}
# 1510 "mm/page_alloc.c"
static nodemask_t *zlc_setup(struct zonelist *zonelist, int alloc_flags)
{
 return ((void *)0);
}

static int zlc_zone_worth_trying(struct zonelist *zonelist, struct zoneref *z,
    nodemask_t *allowednodes)
{
 return 1;
}

static void zlc_mark_zone_full(struct zonelist *zonelist, struct zoneref *z)
{
}






static struct page *
get_page_from_freelist(gfp_t gfp_mask, nodemask_t *nodemask, unsigned int order,
  struct zonelist *zonelist, int high_zoneidx, int alloc_flags)
{
 struct zoneref *z;
 struct page *page = ((void *)0);
 int classzone_idx;
 struct zone *zone, *preferred_zone;
 nodemask_t *allowednodes = ((void *)0);
 int zlc_active = 0;
 int did_zlc_setup = 0;

 (void)first_zones_zonelist(zonelist, high_zoneidx, nodemask,
       &preferred_zone);
 if (!preferred_zone)
  return ((void *)0);

 classzone_idx = ((preferred_zone) - (preferred_zone)->zone_pgdat->node_zones);

zonelist_scan:




 for (z = first_zones_zonelist(zonelist, high_zoneidx, nodemask, &zone); zone; z = next_zones_zonelist(++z, high_zoneidx, nodemask, &zone)) {

  if (0 && zlc_active &&
   !zlc_zone_worth_trying(zonelist, z, allowednodes))
    continue;
  if ((alloc_flags & 0x40) &&
   !cpuset_zone_allowed_softwall(zone, gfp_mask))
    goto try_next_zone;

  if (!(alloc_flags & 0x01)) {
   unsigned long mark;
   if (alloc_flags & 0x02)
    mark = zone->pages_min;
   else if (alloc_flags & 0x04)
    mark = zone->pages_low;
   else
    mark = zone->pages_high;
   if (!zone_watermark_ok(zone, order, mark,
        classzone_idx, alloc_flags)) {
    if (!0 ||
        !zone_reclaim(zone, gfp_mask, order))
     goto this_zone_full;
   }
  }

  page = buffered_rmqueue(preferred_zone, zone, order, gfp_mask);
  if (page)
   break;
this_zone_full:
  if (0)
   zlc_mark_zone_full(zonelist, z);
try_next_zone:
  if (0 && !did_zlc_setup) {

   allowednodes = zlc_setup(zonelist, alloc_flags);
   zlc_active = 1;
   did_zlc_setup = 1;
  }
 }

 if (__builtin_expect(!!(0 && page == ((void *)0) && zlc_active), 0)) {

  zlc_active = 0;
  goto zonelist_scan;
 }
 return page;
}




struct page *
__alloc_pages_internal(gfp_t gfp_mask, unsigned int order,
   struct zonelist *zonelist, nodemask_t *nodemask)
{
 const gfp_t wait = gfp_mask & (( gfp_t)0x10u);
 enum zone_type high_zoneidx = gfp_zone(gfp_mask);
 struct zoneref *z;
 struct zone *zone;
 struct page *page;
 struct reclaim_state reclaim_state;
 struct task_struct *p = (get_current());
 int do_retry;
 int alloc_flags;
 unsigned long did_some_progress;
 unsigned long pages_reclaimed = 0;

 do { } while (0);

 do { if (wait) do { __might_sleep("mm/page_alloc.c", 1623); do { } while (0); } while (0); } while (0);

 if (should_fail_alloc_page(gfp_mask, order))
  return ((void *)0);

restart:
 z = zonelist->_zonerefs;

 if (__builtin_expect(!!(!z->zone), 0)) {




  return ((void *)0);
 }

 page = get_page_from_freelist(gfp_mask|(( gfp_t)0x20000u), nodemask, order,
   zonelist, high_zoneidx, 0x04|0x40);
 if (page)
  goto got_pg;
# 1652 "mm/page_alloc.c"
 if (0 && (gfp_mask & (( gfp_t)0)) == (( gfp_t)0))
  goto nopage;

 for (z = first_zones_zonelist(zonelist, high_zoneidx, ((void *)0), &zone); zone; z = next_zones_zonelist(++z, high_zoneidx, ((void *)0), &zone))
  wakeup_kswapd(zone, order);
# 1668 "mm/page_alloc.c"
 alloc_flags = 0x02;
 if ((__builtin_expect(!!(rt_task(p)), 0) && !(((current_thread_info()->preempt_count) & ((((1UL << (1))-1) << (30)) | (((1UL << (8))-1) << ((0 + 8) + 8)) | (((1UL << (8))-1) << (0 + 8)))))) || !wait)
  alloc_flags |= 0x10;
 if (gfp_mask & (( gfp_t)0x20u))
  alloc_flags |= 0x20;
 if (wait)
  alloc_flags |= 0x40;
# 1684 "mm/page_alloc.c"
 page = get_page_from_freelist(gfp_mask, nodemask, order, zonelist,
      high_zoneidx, alloc_flags);
 if (page)
  goto got_pg;



rebalance:
 if (((p->flags & 0x00000800) || __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 18)), 0))
   && !(((current_thread_info()->preempt_count) & ((((1UL << (1))-1) << (30)) | (((1UL << (8))-1) << ((0 + 8) + 8)) | (((1UL << (8))-1) << (0 + 8)))))) {
  if (!(gfp_mask & (( gfp_t)0x10000u))) {
nofail_alloc:

   page = get_page_from_freelist(gfp_mask, nodemask, order,
    zonelist, high_zoneidx, 0x01);
   if (page)
    goto got_pg;
   if (gfp_mask & (( gfp_t)0x800u)) {
    congestion_wait(1, 100/50);
    goto nofail_alloc;
   }
  }
  goto nopage;
 }


 if (!wait)
  goto nopage;

 cond_resched();


 cpuset_memory_pressure_bump();



 cpuset_update_task_memory_state();
 p->flags |= 0x00000800;

 do { } while (0);
 reclaim_state.reclaimed_slab = 0;
 p->reclaim_state = &reclaim_state;

 did_some_progress = try_to_free_pages(zonelist, order, gfp_mask);

 p->reclaim_state = ((void *)0);
 do { } while (0);
 p->flags &= ~0x00000800;

 cond_resched();

 if (order != 0)
  drain_all_pages();

 if (__builtin_expect(!!(did_some_progress), 1)) {
  page = get_page_from_freelist(gfp_mask, nodemask, order,
     zonelist, high_zoneidx, alloc_flags);
  if (page)
   goto got_pg;
 } else if ((gfp_mask & (( gfp_t)0x80u)) && !(gfp_mask & (( gfp_t)0x1000u))) {
  if (!try_set_zone_oom(zonelist, gfp_mask)) {
   schedule_timeout_uninterruptible(1);
   goto restart;
  }







  page = get_page_from_freelist(gfp_mask|(( gfp_t)0x20000u), nodemask,
   order, zonelist, high_zoneidx,
   0x08|0x40);
  if (page) {
   clear_zonelist_oom(zonelist, gfp_mask);
   goto got_pg;
  }


  if (order > 3) {
   clear_zonelist_oom(zonelist, gfp_mask);
   goto nopage;
  }

  out_of_memory(zonelist, gfp_mask, order);
  clear_zonelist_oom(zonelist, gfp_mask);
  goto restart;
 }
# 1788 "mm/page_alloc.c"
 pages_reclaimed += did_some_progress;
 do_retry = 0;
 if (!(gfp_mask & (( gfp_t)0x1000u))) {
  if (order <= 3) {
   do_retry = 1;
  } else {
   if (gfp_mask & (( gfp_t)0x400u) &&
    pages_reclaimed < (1 << order))
     do_retry = 1;
  }
  if (gfp_mask & (( gfp_t)0x800u))
   do_retry = 1;
 }
 if (do_retry) {
  congestion_wait(1, 100/50);
  goto rebalance;
 }

nopage:
 if (!(gfp_mask & (( gfp_t)0x200u)) && printk_ratelimit()) {
  printk("<4>" "%s: page allocation failure."
   " order:%d, mode:0x%x\n",
   p->comm, order, gfp_mask);
  dump_stack();
  show_mem();
 }
  return page;
got_pg:
  if (0)
   kmemcheck_pagealloc_alloc(page, order, gfp_mask);
 trace_page_alloc(page, order);
 return page;
}
extern typeof(__alloc_pages_internal) __alloc_pages_internal; extern void *__crc___alloc_pages_internal __attribute__((weak)); static const unsigned long __kcrctab___alloc_pages_internal __attribute__((__used__)) __attribute__((section("__kcrctab" ""), unused)) = (unsigned long) &__crc___alloc_pages_internal; static const char __kstrtab___alloc_pages_internal[] __attribute__((section("__ksymtab_strings"), aligned(1))) = "" "__alloc_pages_internal"; static const struct kernel_symbol __ksymtab___alloc_pages_internal __attribute__((__used__)) __attribute__((section("__ksymtab" ""), unused)) = { (unsigned long)&__alloc_pages_internal, __kstrtab___alloc_pages_internal };




unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order)
{
 struct page * page;
 page = alloc_pages_node((((void)(0),0)), gfp_mask, order);
 if (!page)
  return 0;
 return (unsigned long) lowmem_page_address(page);
}

extern typeof(__get_free_pages) __get_free_pages; extern void *__crc___get_free_pages __attribute__((weak)); static const unsigned long __kcrctab___get_free_pages __attribute__((__used__)) __attribute__((section("__kcrctab" ""), unused)) = (unsigned long) &__crc___get_free_pages; static const char __kstrtab___get_free_pages[] __attribute__((section("__ksymtab_strings"), aligned(1))) = "" "__get_free_pages"; static const struct kernel_symbol __ksymtab___get_free_pages __attribute__((__used__)) __attribute__((section("__ksymtab" ""), unused)) = { (unsigned long)&__get_free_pages, __kstrtab___get_free_pages };

unsigned long get_zeroed_page(gfp_t gfp_mask)
{
 struct page * page;





 do { } while (0);

 page = alloc_pages_node((((void)(0),0)), gfp_mask | (( gfp_t)0x8000u), 0);
 if (page)
  return (unsigned long) lowmem_page_address(page);
 return 0;
}

extern typeof(get_zeroed_page) get_zeroed_page; extern void *__crc_get_zeroed_page __attribute__((weak)); static const unsigned long __kcrctab_get_zeroed_page __attribute__((__used__)) __attribute__((section("__kcrctab" ""), unused)) = (unsigned long) &__crc_get_zeroed_page; static const char __kstrtab_get_zeroed_page[] __attribute__((section("__ksymtab_strings"), aligned(1))) = "" "get_zeroed_page"; static const struct kernel_symbol __ksymtab_get_zeroed_page __attribute__((__used__)) __attribute__((section("__ksymtab" ""), unused)) = { (unsigned long)&get_zeroed_page, __kstrtab_get_zeroed_page };

void __pagevec_free(struct pagevec *pvec)
{
 int i = pagevec_count(pvec);

 while (--i >= 0)
  free_hot_cold_page(pvec->pages[i], pvec->cold);
}

void __free_pages(struct page *page, unsigned int order)
{
 if (put_page_testzero(page)) {
  if (order == 0)
   free_hot_page(page);
  else
   __free_pages_ok(page, order);
 }
}

extern typeof(__free_pages) __free_pages; extern void *__crc___free_pages __attribute__((weak)); static const unsigned long __kcrctab___free_pages __attribute__((__used__)) __attribute__((section("__kcrctab" ""), unused)) = (unsigned long) &__crc___free_pages; static const char __kstrtab___free_pages[] __attribute__((section("__ksymtab_strings"), aligned(1))) = "" "__free_pages"; static const struct kernel_symbol __ksymtab___free_pages __attribute__((__used__)) __attribute__((section("__ksymtab" ""), unused)) = { (unsigned long)&__free_pages, __kstrtab___free_pages };

void free_pages(unsigned long addr, unsigned int order)
{
 if (addr != 0) {
  do { } while (0);
  __free_pages((mem_map + (((((unsigned long)((void *)addr)) - (0xC0000000UL) + (0x80000000UL)) >> 12) - ((0x80000000UL) >> 12))), order);
 }
}

extern typeof(free_pages) free_pages; extern void *__crc_free_pages __attribute__((weak)); static const unsigned long __kcrctab_free_pages __attribute__((__used__)) __attribute__((section("__kcrctab" ""), unused)) = (unsigned long) &__crc_free_pages; static const char __kstrtab_free_pages[] __attribute__((section("__ksymtab_strings"), aligned(1))) = "" "free_pages"; static const struct kernel_symbol __ksymtab_free_pages __attribute__((__used__)) __attribute__((section("__ksymtab" ""), unused)) = { (unsigned long)&free_pages, __kstrtab_free_pages };
# 1898 "mm/page_alloc.c"
void *alloc_pages_exact(size_t size, gfp_t gfp_mask)
{
 unsigned int order = get_order(size);
 unsigned long addr;

 addr = __get_free_pages(gfp_mask, order);
 if (addr) {
  unsigned long alloc_end = addr + ((1UL << 12) << order);
  unsigned long used = addr + (((size)+((typeof(size))((1UL << 12))-1))&~((typeof(size))((1UL << 12))-1));

  split_page((mem_map + (((((unsigned long)(addr)) - (0xC0000000UL) + (0x80000000UL)) >> 12) - ((0x80000000UL) >> 12))), order);
  while (used < alloc_end) {
   free_pages((used),0);
   used += (1UL << 12);
  }
 }

 return (void *)addr;
}
extern typeof(alloc_pages_exact) alloc_pages_exact; extern void *__crc_alloc_pages_exact __attribute__((weak)); static const unsigned long __kcrctab_alloc_pages_exact __attribute__((__used__)) __attribute__((section("__kcrctab" ""), unused)) = (unsigned long) &__crc_alloc_pages_exact; static const char __kstrtab_alloc_pages_exact[] __attribute__((section("__ksymtab_strings"), aligned(1))) = "" "alloc_pages_exact"; static const struct kernel_symbol __ksymtab_alloc_pages_exact __attribute__((__used__)) __attribute__((section("__ksymtab" ""), unused)) = { (unsigned long)&alloc_pages_exact, __kstrtab_alloc_pages_exact };
# 1926 "mm/page_alloc.c"
void free_pages_exact(void *virt, size_t size)
{
 unsigned long addr = (unsigned long)virt;
 unsigned long end = addr + (((size)+((typeof(size))((1UL << 12))-1))&~((typeof(size))((1UL << 12))-1));

 while (addr < end) {
  free_pages((addr),0);
  addr += (1UL << 12);
 }
}
extern typeof(free_pages_exact) free_pages_exact; extern void *__crc_free_pages_exact __attribute__((weak)); static const unsigned long __kcrctab_free_pages_exact __attribute__((__used__)) __attribute__((section("__kcrctab" ""), unused)) = (unsigned long) &__crc_free_pages_exact; static const char __kstrtab_free_pages_exact[] __attribute__((section("__ksymtab_strings"), aligned(1))) = "" "free_pages_exact"; static const struct kernel_symbol __ksymtab_free_pages_exact __attribute__((__used__)) __attribute__((section("__ksymtab" ""), unused)) = { (unsigned long)&free_pages_exact, __kstrtab_free_pages_exact };

static unsigned int nr_free_zone_pages(int offset)
{
 struct zoneref *z;
 struct zone *zone;


 unsigned int sum = 0;

 struct zonelist *zonelist = node_zonelist((((void)(0),0)), ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));

 for (z = first_zones_zonelist(zonelist, offset, ((void *)0), &zone); zone; z = next_zones_zonelist(++z, offset, ((void *)0), &zone)) {
  unsigned long size = zone->present_pages;
  unsigned long high = zone->pages_high;
  if (size > high)
   sum += size - high;
 }

 return sum;
}




unsigned int nr_free_buffer_pages(void)
{
 return nr_free_zone_pages(gfp_zone(((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u) | (( gfp_t)0x20000u))));
}
extern typeof(nr_free_buffer_pages) nr_free_buffer_pages; extern void *__crc_nr_free_buffer_pages __attribute__((weak)); static const unsigned long __kcrctab_nr_free_buffer_pages __attribute__((__used__)) __attribute__((section("__kcrctab" "_gpl"), unused)) = (unsigned long) &__crc_nr_free_buffer_pages; static const char __kstrtab_nr_free_buffer_pages[] __attribute__((section("__ksymtab_strings"), aligned(1))) = "" "nr_free_buffer_pages"; static const struct kernel_symbol __ksymtab_nr_free_buffer_pages __attribute__((__used__)) __attribute__((section("__ksymtab" "_gpl"), unused)) = { (unsigned long)&nr_free_buffer_pages, __kstrtab_nr_free_buffer_pages };




unsigned int nr_free_pagecache_pages(void)
{
 return nr_free_zone_pages(gfp_zone(((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u) | (( gfp_t)0x20000u) | (( gfp_t)0x02u) | (( gfp_t)0x100000u))));
}

static inline __attribute__((always_inline)) void show_node(struct zone *zone)
{
 if (0)
  printk("Node %d ", zone_to_nid(zone));
}

void si_meminfo(struct sysinfo *val)
{
 val->totalram = totalram_pages;
 val->sharedram = 0;
 val->freeram = global_page_state(NR_FREE_PAGES);
 val->bufferram = nr_blockdev_pages();
 val->totalhigh = 0;
 val->freehigh = nr_free_highpages();
 val->mem_unit = (1UL << 12);
}

extern typeof(si_meminfo) si_meminfo; extern void *__crc_si_meminfo __attribute__((weak)); static const unsigned long __kcrctab_si_meminfo __attribute__((__used__)) __attribute__((section("__kcrctab" ""), unused)) = (unsigned long) &__crc_si_meminfo; static const char __kstrtab_si_meminfo[] __attribute__((section("__ksymtab_strings"), aligned(1))) = "" "si_meminfo"; static const struct kernel_symbol __ksymtab_si_meminfo __attribute__((__used__)) __attribute__((section("__ksymtab" ""), unused)) = { (unsigned long)&si_meminfo, __kstrtab_si_meminfo };
# 2020 "mm/page_alloc.c"
void show_free_areas(void)
{
 int cpu;
 struct zone *zone;

 for (zone = (first_online_pgdat())->node_zones; zone; zone = next_zone(zone)) {
  if (!populated_zone(zone))
   continue;

  show_node(zone);
  printk("%s per-cpu:\n", zone->name);

  for (((cpu)) = 0; ((cpu)) < 1; ((cpu))++, (void)cpu_online_mask) {
   struct per_cpu_pageset *pageset;

   pageset = (&(zone)->pageset[(cpu)]);

   printk("CPU %4d: hi:%5d, btch:%4d usd:%4d\n",
          cpu, pageset->pcp.high,
          pageset->pcp.batch, pageset->pcp.count);
  }
 }

 printk("Active_anon:%lu active_file:%lu inactive_anon:%lu\n"
  " inactive_file:%lu"


  " unevictable:%lu"

  " dirty:%lu writeback:%lu unstable:%lu\n"
  " free:%lu slab:%lu mapped:%lu pagetables:%lu bounce:%lu\n",
  global_page_state(NR_ACTIVE_ANON),
  global_page_state(NR_ACTIVE_FILE),
  global_page_state(NR_INACTIVE_ANON),
  global_page_state(NR_INACTIVE_FILE),

  global_page_state(NR_UNEVICTABLE),

  global_page_state(NR_FILE_DIRTY),
  global_page_state(NR_WRITEBACK),
  global_page_state(NR_UNSTABLE_NFS),
  global_page_state(NR_FREE_PAGES),
  global_page_state(NR_SLAB_RECLAIMABLE) +
   global_page_state(NR_SLAB_UNRECLAIMABLE),
  global_page_state(NR_FILE_MAPPED),
  global_page_state(NR_PAGETABLE),
  global_page_state(NR_BOUNCE));

 for (zone = (first_online_pgdat())->node_zones; zone; zone = next_zone(zone)) {
  int i;

  if (!populated_zone(zone))
   continue;

  show_node(zone);
  printk("%s"
   " free:%lukB"
   " min:%lukB"
   " low:%lukB"
   " high:%lukB"
   " active_anon:%lukB"
   " inactive_anon:%lukB"
   " active_file:%lukB"
   " inactive_file:%lukB"

   " unevictable:%lukB"

   " present:%lukB"
   " pages_scanned:%lu"
   " all_unreclaimable? %s"
   "\n",
   zone->name,
   ((zone_page_state(zone, NR_FREE_PAGES)) << (12 -10)),
   ((zone->pages_min) << (12 -10)),
   ((zone->pages_low) << (12 -10)),
   ((zone->pages_high) << (12 -10)),
   ((zone_page_state(zone, NR_ACTIVE_ANON)) << (12 -10)),
   ((zone_page_state(zone, NR_INACTIVE_ANON)) << (12 -10)),
   ((zone_page_state(zone, NR_ACTIVE_FILE)) << (12 -10)),
   ((zone_page_state(zone, NR_INACTIVE_FILE)) << (12 -10)),

   ((zone_page_state(zone, NR_UNEVICTABLE)) << (12 -10)),

   ((zone->present_pages) << (12 -10)),
   zone->pages_scanned,
   (zone_is_all_unreclaimable(zone) ? "yes" : "no")
   );
  printk("lowmem_reserve[]:");
  for (i = 0; i < 2; i++)
   printk(" %lu", zone->lowmem_reserve[i]);
  printk("\n");
 }

 for (zone = (first_online_pgdat())->node_zones; zone; zone = next_zone(zone)) {
   unsigned long nr[11], flags, order, total = 0;

  if (!populated_zone(zone))
   continue;

  show_node(zone);
  printk("%s: ", zone->name);

  do { ; flags = ({ unsigned long __ret; if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) __ret = ({ unsigned long __flags; do { ({ unsigned long __dummy; typeof(__flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (__flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0); do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); __flags; }); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) __ret = _spin_lock_irqsave((spinlock_t *)(&zone->lock)); else __ret = __bad_func_type(); __ret; }); } while (0);
  for (order = 0; order < 11; order++) {
   nr[order] = zone->free_area[order].nr_free;
   total += nr[order] << order;
  }
  do { ; do { if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0); do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); } while (0); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&zone->lock)); else __bad_func_type(); } while (0); } while (0);
  for (order = 0; order < 11; order++)
   printk("%lu*%lukB ", nr[order], ((1UL) << (12 -10)) << order);
  printk("= %lukB\n", ((total) << (12 -10)));
 }

 printk("%ld total pagecache pages\n", global_page_state(NR_FILE_PAGES));

 show_swap_cache_info();
}

static void zoneref_set_zone(struct zone *zone, struct zoneref *zoneref)
{
 zoneref->zone = zone;
 zoneref->zone_idx = ((zone) - (zone)->zone_pgdat->node_zones);
}






static int build_zonelists_node(pg_data_t *pgdat, struct zonelist *zonelist,
    int nr_zones, enum zone_type zone_type)
{
 struct zone *zone;

 do { if (__builtin_expect(!!(zone_type >= 2), 0)) __bug("mm/page_alloc.c", 2154); } while(0);
 zone_type++;

 do {
  zone_type--;
  zone = pgdat->node_zones + zone_type;
  if (populated_zone(zone)) {
   zoneref_set_zone(zone,
    &zonelist->_zonerefs[nr_zones++]);
   check_highest_zone(zone_type);
  }

 } while (zone_type);
 return nr_zones;
}
# 2187 "mm/page_alloc.c"
static int current_zonelist_order = 0;
static char zonelist_order_name[3][8] = {"Default", "Node", "Zone"};
# 2531 "mm/page_alloc.c"
static void set_zonelist_order(void)
{
 current_zonelist_order = 2;
}

static void build_zonelists(pg_data_t *pgdat)
{
 int node, local_node;
 enum zone_type j;
 struct zonelist *zonelist;

 local_node = pgdat->node_id;

 zonelist = &pgdat->node_zonelists[0];
 j = build_zonelists_node(pgdat, zonelist, 0, 2 - 1);
# 2555 "mm/page_alloc.c"
 for (node = local_node + 1; node < (1 << 0); node++) {
  if (!node_state((node), N_ONLINE))
   continue;
  j = build_zonelists_node((&contig_page_data), zonelist, j,
       2 - 1);
 }
 for (node = 0; node < local_node; node++) {
  if (!node_state((node), N_ONLINE))
   continue;
  j = build_zonelists_node((&contig_page_data), zonelist, j,
       2 - 1);
 }

 zonelist->_zonerefs[j].zone = ((void *)0);
 zonelist->_zonerefs[j].zone_idx = 0;
}


static void build_zonelist_cache(pg_data_t *pgdat)
{
 pgdat->node_zonelists[0].zlcache_ptr = ((void *)0);
}




static int __build_all_zonelists(void *dummy)
{
 int nid;

 for ( (nid) = 0; (nid) == 0; (nid) = 1) {
  pg_data_t *pgdat = (&contig_page_data);

  build_zonelists(pgdat);
  build_zonelist_cache(pgdat);
 }
 return 0;
}

void build_all_zonelists(void)
{
 set_zonelist_order();

 if (system_state == SYSTEM_BOOTING) {
  __build_all_zonelists(((void *)0));
  mminit_verify_zonelist();
  cpuset_init_current_mems_allowed();
 } else {


  stop_machine(__build_all_zonelists, ((void *)0), ((void *)0));

 }
 vm_total_pages = nr_free_pagecache_pages();







 if (vm_total_pages < ((1UL << (11 -1)) * 5))
  page_group_by_mobility_disabled = 1;
 else
  page_group_by_mobility_disabled = 0;

 printk("Built %i zonelists in %s order, mobility grouping %s.  "
  "Total pages: %ld\n",
   num_node_state(N_ONLINE),
   zonelist_order_name[current_zonelist_order],
   page_group_by_mobility_disabled ? "off" : "on",
   vm_total_pages);



}
# 2646 "mm/page_alloc.c"
static inline __attribute__((always_inline)) unsigned long wait_table_hash_nr_entries(unsigned long pages)
{
 unsigned long size = 1;

 pages /= 256;

 while (size < pages)
  size <<= 1;






 size = ({ typeof(size) _min1 = (size); typeof(4096UL) _min2 = (4096UL); (void) (&_min1 == &_min2); _min1 < _min2 ? _min1 : _min2; });

 return ({ typeof(size) _max1 = (size); typeof(4UL) _max2 = (4UL); (void) (&_max1 == &_max2); _max1 > _max2 ? _max1 : _max2; });
}
# 2693 "mm/page_alloc.c"
static inline __attribute__((always_inline)) unsigned long wait_table_bits(unsigned long size)
{
 return (({ unsigned long __t = (~(~size)); fls(__t & -__t); }) - 1);
}
# 2707 "mm/page_alloc.c"
static void setup_zone_migrate_reserve(struct zone *zone)
{
 unsigned long start_pfn, pfn, end_pfn;
 struct page *page;
 unsigned long reserve, block_migratetype;


 start_pfn = zone->zone_start_pfn;
 end_pfn = start_pfn + zone->spanned_pages;
 reserve = ((((zone->pages_min) + (((1UL << (11 -1))) - 1)) / ((1UL << (11 -1)))) * ((1UL << (11 -1)))) >>
       (11 -1);

 for (pfn = start_pfn; pfn < end_pfn; pfn += (1UL << (11 -1))) {
  if (!((pfn) >= ((0x80000000UL) >> 12) && (pfn) < (((0x80000000UL) >> 12) + max_mapnr)))
   continue;
  page = (mem_map + ((pfn) - ((0x80000000UL) >> 12)));


  if (page_to_nid(page) != zone_to_nid(zone))
   continue;


  if (PageReserved(page))
   continue;

  block_migratetype = get_pageblock_migratetype(page);


  if (reserve > 0 && block_migratetype == 3) {
   reserve--;
   continue;
  }


  if (reserve > 0 && block_migratetype == 2) {
   set_pageblock_migratetype(page, 3);
   move_freepages_block(zone, page, 3);
   reserve--;
   continue;
  }





  if (block_migratetype == 3) {
   set_pageblock_migratetype(page, 2);
   move_freepages_block(zone, page, 2);
  }
 }
}






void __attribute__ ((__section__(".meminit.text"))) memmap_init_zone(unsigned long size, int nid, unsigned long zone,
  unsigned long start_pfn, enum memmap_context context)
{
 struct page *page;
 unsigned long end_pfn = start_pfn + size;
 unsigned long pfn;
 struct zone *z;

 if (highest_memmap_pfn < end_pfn - 1)
  highest_memmap_pfn = end_pfn - 1;

 z = &(&contig_page_data)->node_zones[zone];
 for (pfn = start_pfn; pfn < end_pfn; pfn++) {





  if (context == MEMMAP_EARLY) {
   if (!(1))
    continue;
   if (!(1))
    continue;
  }
  page = (mem_map + ((pfn) - ((0x80000000UL) >> 12)));
  set_page_links(page, zone, nid, pfn);
  mminit_verify_page_links(page, zone, nid, pfn);
  init_page_count(page);
  reset_page_mapcount(page);
  SetPageReserved(page);
# 2808 "mm/page_alloc.c"
  if ((z->zone_start_pfn <= pfn)
      && (pfn < z->zone_start_pfn + z->spanned_pages)
      && !(pfn & ((1UL << (11 -1)) - 1)))
   set_pageblock_migratetype(page, 2);

  INIT_LIST_HEAD(&page->lru);





 }
}

static void __attribute__ ((__section__(".meminit.text"))) zone_init_free_lists(struct zone *zone)
{
 int order, t;
 for (order = 0; order < 11; order++) for (t = 0; t < 5; t++) {
  INIT_LIST_HEAD(&zone->free_area[order].free_list[t]);
  zone->free_area[order].nr_free = 0;
 }
}






static int zone_batchsize(struct zone *zone)
{
 int batch;







 batch = zone->present_pages / 1024;
 if (batch * (1UL << 12) > 512 * 1024)
  batch = (512 * 1024) / (1UL << 12);
 batch /= 4;
 if (batch < 1)
  batch = 1;
# 2863 "mm/page_alloc.c"
 batch = (1 << (fls(batch + batch/2)-1)) - 1;

 return batch;
}

static void setup_pageset(struct per_cpu_pageset *p, unsigned long batch)
{
 struct per_cpu_pages *pcp;

 ({ void *__p = (p); size_t __n = sizeof(*p); if ((__n) != 0) { if (__builtin_constant_p((0)) && (0) == 0) __memzero((__p),(__n)); else memset((__p),(0),(__n)); } (__p); });

 pcp = &p->pcp;
 pcp->count = 0;
 pcp->high = 6 * batch;
 pcp->batch = ({ typeof(1UL) _max1 = (1UL); typeof(1 * batch) _max2 = (1 * batch); (void) (&_max1 == &_max2); _max1 > _max2 ? _max1 : _max2; });
 INIT_LIST_HEAD(&pcp->list);
}






static void setup_pagelist_highmark(struct per_cpu_pageset *p,
    unsigned long high)
{
 struct per_cpu_pages *pcp;

 pcp = &p->pcp;
 pcp->high = high;
 pcp->batch = ({ typeof(1UL) _max1 = (1UL); typeof(high/4) _max2 = (high/4); (void) (&_max1 == &_max2); _max1 > _max2 ? _max1 : _max2; });
 if ((high/4) > (12 * 8))
  pcp->batch = 12 * 8;
}
# 3032 "mm/page_alloc.c"
static __attribute__((noinline)) __attribute__ ((__section__(".ref.text"))) __attribute__((noinline))
int zone_wait_table_init(struct zone *zone, unsigned long zone_size_pages)
{
 int i;
 struct pglist_data *pgdat = zone->zone_pgdat;
 size_t alloc_size;





 zone->wait_table_hash_nr_entries =
   wait_table_hash_nr_entries(zone_size_pages);
 zone->wait_table_bits =
  wait_table_bits(zone->wait_table_hash_nr_entries);
 alloc_size = zone->wait_table_hash_nr_entries
     * sizeof(wait_queue_head_t);

 if (!slab_is_available()) {
  zone->wait_table = (wait_queue_head_t *)
   __alloc_bootmem_node(pgdat, alloc_size, (1 << 5), (((unsigned long)(0xffffffff)) - (0xC0000000UL) + (0x80000000UL)));
 } else {
# 3064 "mm/page_alloc.c"
  zone->wait_table = vmalloc(alloc_size);
 }
 if (!zone->wait_table)
  return -12;

 for(i = 0; i < zone->wait_table_hash_nr_entries; ++i)
  init_waitqueue_head(zone->wait_table + i);

 return 0;
}

static __attribute__ ((__section__(".meminit.text"))) void zone_pcp_init(struct zone *zone)
{
 int cpu;
 unsigned long batch = zone_batchsize(zone);

 for (cpu = 0; cpu < 1; cpu++) {





  setup_pageset((&(zone)->pageset[(cpu)]), batch);

 }
 if (zone->present_pages)
  printk("<7>" "  %s zone: %lu pages, LIFO batch:%lu\n",
   zone->name, zone->present_pages, batch);
}

__attribute__ ((__section__(".meminit.text"))) int init_currently_empty_zone(struct zone *zone,
     unsigned long zone_start_pfn,
     unsigned long size,
     enum memmap_context context)
{
 struct pglist_data *pgdat = zone->zone_pgdat;
 int ret;
 ret = zone_wait_table_init(zone, size);
 if (ret)
  return ret;
 pgdat->nr_zones = ((zone) - (zone)->zone_pgdat->node_zones) + 1;

 zone->zone_start_pfn = zone_start_pfn;

 mminit_dprintk(MMINIT_TRACE, "memmap_init",
   "Initialising map node %d zone %lu pfns %lu -> %lu\n",
   pgdat->node_id,
   (unsigned long)((zone) - (zone)->zone_pgdat->node_zones),
   zone_start_pfn, (zone_start_pfn + size));

 zone_init_free_lists(zone);

 return 0;
}
# 3520 "mm/page_alloc.c"
static inline __attribute__((always_inline)) unsigned long __attribute__ ((__section__(".meminit.text"))) zone_spanned_pages_in_node(int nid,
     unsigned long zone_type,
     unsigned long *zones_size)
{
 return zones_size[zone_type];
}

static inline __attribute__((always_inline)) unsigned long __attribute__ ((__section__(".meminit.text"))) zone_absent_pages_in_node(int nid,
      unsigned long zone_type,
      unsigned long *zholes_size)
{
 if (!zholes_size)
  return 0;

 return zholes_size[zone_type];
}



static void __attribute__ ((__section__(".meminit.text"))) calculate_node_totalpages(struct pglist_data *pgdat,
  unsigned long *zones_size, unsigned long *zholes_size)
{
 unsigned long realtotalpages, totalpages = 0;
 enum zone_type i;

 for (i = 0; i < 2; i++)
  totalpages += zone_spanned_pages_in_node(pgdat->node_id, i,
        zones_size);
 pgdat->node_spanned_pages = totalpages;

 realtotalpages = totalpages;
 for (i = 0; i < 2; i++)
  realtotalpages -=
   zone_absent_pages_in_node(pgdat->node_id, i,
        zholes_size);
 pgdat->node_present_pages = realtotalpages;
 printk("<7>" "On node %d totalpages: %lu\n", pgdat->node_id,
       realtotalpages);
}
# 3568 "mm/page_alloc.c"
static unsigned long __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) usemap_size(unsigned long zonesize)
{
 unsigned long usemapsize;

 usemapsize = ((((zonesize) + (((1UL << (11 -1))) - 1)) / ((1UL << (11 -1)))) * ((1UL << (11 -1))));
 usemapsize = usemapsize >> (11 -1);
 usemapsize *= NR_PAGEBLOCK_BITS;
 usemapsize = ((((usemapsize) + ((8 * sizeof(unsigned long)) - 1)) / (8 * sizeof(unsigned long))) * (8 * sizeof(unsigned long)));

 return usemapsize / 8;
}

static void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) setup_usemap(struct pglist_data *pgdat,
    struct zone *zone, unsigned long zonesize)
{
 unsigned long usemapsize = usemap_size(zonesize);
 zone->pageblock_flags = ((void *)0);
 if (usemapsize)
  zone->pageblock_flags = __alloc_bootmem_node(pgdat, usemapsize, (1 << 5), (((unsigned long)(0xffffffff)) - (0xC0000000UL) + (0x80000000UL)));
}
# 3625 "mm/page_alloc.c"
static inline __attribute__((always_inline)) int pageblock_default_order(unsigned int order)
{
 return 11 -1;
}
# 3639 "mm/page_alloc.c"
static void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) free_area_init_core(struct pglist_data *pgdat,
  unsigned long *zones_size, unsigned long *zholes_size)
{
 enum zone_type j;
 int nid = pgdat->node_id;
 unsigned long zone_start_pfn = pgdat->node_start_pfn;
 int ret;

 pgdat_resize_init(pgdat);
 pgdat->nr_zones = 0;
 init_waitqueue_head(&pgdat->kswapd_wait);
 pgdat->kswapd_max_order = 0;
 pgdat_page_cgroup_init(pgdat);

 for (j = 0; j < 2; j++) {
  struct zone *zone = pgdat->node_zones + j;
  unsigned long size, realsize, memmap_pages;
  enum lru_list l;

  size = zone_spanned_pages_in_node(nid, j, zones_size);
  realsize = size - zone_absent_pages_in_node(nid, j,
        zholes_size);






  memmap_pages =
   (((size * sizeof(struct page))+((typeof(size * sizeof(struct page)))((1UL << 12))-1))&~((typeof(size * sizeof(struct page)))((1UL << 12))-1)) >> 12;
  if (realsize >= memmap_pages) {
   realsize -= memmap_pages;
   if (memmap_pages)
    printk("<7>"
           "  %s zone: %lu pages used for memmap\n",
           zone_names[j], memmap_pages);
  } else
   printk("<4>"
    "  %s zone: %lu pages exceeds realsize %lu\n",
    zone_names[j], memmap_pages, realsize);


  if (j == 0 && realsize > dma_reserve) {
   realsize -= dma_reserve;
   printk("<7>" "  %s zone: %lu pages reserved\n",
     zone_names[0], dma_reserve);
  }

  if (!is_highmem_idx(j))
   nr_kernel_pages += realsize;
  nr_all_pages += realsize;

  zone->spanned_pages = size;
  zone->present_pages = realsize;






  zone->name = zone_names[j];
  do { if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) do { *((raw_spinlock_t *)(&zone->lock)) = (raw_spinlock_t) { .raw_lock = { }, }; } while (0); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) do { static struct lock_class_key __key; __rt_spin_lock_init((spinlock_t *)(&zone->lock), "&zone->lock", &__key); } while (0); else __bad_func_type(); } while (0);
  do { if (__builtin_types_compatible_p(typeof((&zone->lru_lock)), raw_spinlock_t *)) do { *((raw_spinlock_t *)(&zone->lru_lock)) = (raw_spinlock_t) { .raw_lock = { }, }; } while (0); else if (__builtin_types_compatible_p(typeof((&zone->lru_lock)), spinlock_t *)) do { static struct lock_class_key __key; __rt_spin_lock_init((spinlock_t *)(&zone->lru_lock), "&zone->lru_lock", &__key); } while (0); else __bad_func_type(); } while (0);
  zone_seqlock_init(zone);
  zone->zone_pgdat = pgdat;

  zone->prev_priority = 12;

  zone_pcp_init(zone);
  for (l = 0; l < NR_LRU_LISTS; l++) {
   INIT_LIST_HEAD(&zone->lru[l].list);
   zone->lru[l].nr_scan = 0;
  }
  zone->reclaim_stat.recent_rotated[0] = 0;
  zone->reclaim_stat.recent_rotated[1] = 0;
  zone->reclaim_stat.recent_scanned[0] = 0;
  zone->reclaim_stat.recent_scanned[1] = 0;
  zap_zone_vm_stats(zone);
  zone->flags = 0;
  if (!size)
   continue;

  do {} while (0);
  setup_usemap(pgdat, zone, size);
  ret = init_currently_empty_zone(zone, zone_start_pfn,
      size, MEMMAP_EARLY);
  do { if (__builtin_expect(!!(ret), 0)) __bug("mm/page_alloc.c", 3725); } while(0);
  memmap_init_zone((size), (nid), (j), (zone_start_pfn), MEMMAP_EARLY);
  zone_start_pfn += size;
 }
}

static void __attribute__ ((__section__(".ref.text"))) __attribute__((noinline)) alloc_node_mem_map(struct pglist_data *pgdat)
{

 if (!pgdat->node_spanned_pages)
  return;



 if (!pgdat->node_mem_map) {
  unsigned long size, start, end;
  struct page *map;






  start = pgdat->node_start_pfn & ~((1 << (11 - 1)) - 1);
  end = pgdat->node_start_pfn + pgdat->node_spanned_pages;
  end = (((end)+((typeof(end))((1 << (11 - 1)))-1))&~((typeof(end))((1 << (11 - 1)))-1));
  size = (end - start) * sizeof(struct page);
  map = alloc_remap(pgdat->node_id, size);
  if (!map)
   map = __alloc_bootmem_node(pgdat, size, (1 << 5), (((unsigned long)(0xffffffff)) - (0xC0000000UL) + (0x80000000UL)));
  pgdat->node_mem_map = map + (pgdat->node_start_pfn - start);
 }




 if (pgdat == (&contig_page_data)) {
  mem_map = (&contig_page_data)->node_mem_map;




 }


}

void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) free_area_init_node(int nid, unsigned long *zones_size,
  unsigned long node_start_pfn, unsigned long *zholes_size)
{
 pg_data_t *pgdat = (&contig_page_data);

 pgdat->node_id = nid;
 pgdat->node_start_pfn = node_start_pfn;
 calculate_node_totalpages(pgdat, zones_size, zholes_size);

 alloc_node_mem_map(pgdat);

 printk("<7>" "free_area_init_node: node %d, pgdat %08lx, node_mem_map %08lx\n",
  nid, (unsigned long)pgdat,
  (unsigned long)pgdat->node_mem_map);


 free_area_init_core(pgdat, zones_size, zholes_size);
}
# 4315 "mm/page_alloc.c"
void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) set_dma_reserve(unsigned long new_dma_reserve)
{
 dma_reserve = new_dma_reserve;
}


struct pglist_data __attribute__ ((__section__(".ref.data"))) contig_page_data = { .bdata = &bootmem_node_data[0] };
extern typeof(contig_page_data) contig_page_data; extern void *__crc_contig_page_data __attribute__((weak)); static const unsigned long __kcrctab_contig_page_data __attribute__((__used__)) __attribute__((section("__kcrctab" ""), unused)) = (unsigned long) &__crc_contig_page_data; static const char __kstrtab_contig_page_data[] __attribute__((section("__ksymtab_strings"), aligned(1))) = "" "contig_page_data"; static const struct kernel_symbol __ksymtab_contig_page_data __attribute__((__used__)) __attribute__((section("__ksymtab" ""), unused)) = { (unsigned long)&contig_page_data, __kstrtab_contig_page_data };


void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) free_area_init(unsigned long *zones_size)
{
 free_area_init_node(0, zones_size,
   (((unsigned long)((0xC0000000UL))) - (0xC0000000UL) + (0x80000000UL)) >> 12, ((void *)0));
}

static int page_alloc_cpu_notify(struct notifier_block *self,
     unsigned long action, void *hcpu)
{
 int cpu = (unsigned long)hcpu;

 if (action == 0x0007 || action == (0x0007 | 0x0010)) {
  drain_pages(cpu);







  vm_events_fold_cpu(cpu);
# 4354 "mm/page_alloc.c"
  refresh_cpu_vm_stats(cpu);
 }
 return 0x0001;
}

void __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) page_alloc_init(void)
{
 do { (void)(page_alloc_cpu_notify); } while (0);
}





static void calculate_totalreserve_pages(void)
{
 struct pglist_data *pgdat;
 unsigned long reserve_pages = 0;
 enum zone_type i, j;

 for (pgdat = first_online_pgdat(); pgdat; pgdat = next_online_pgdat(pgdat)) {
  for (i = 0; i < 2; i++) {
   struct zone *zone = pgdat->node_zones + i;
   unsigned long max = 0;


   for (j = i; j < 2; j++) {
    if (zone->lowmem_reserve[j] > max)
     max = zone->lowmem_reserve[j];
   }


   max += zone->pages_high;

   if (max > zone->present_pages)
    max = zone->present_pages;
   reserve_pages += max;
  }
 }
 totalreserve_pages = reserve_pages;
}







static void setup_per_zone_lowmem_reserve(void)
{
 struct pglist_data *pgdat;
 enum zone_type j, idx;

 for (pgdat = first_online_pgdat(); pgdat; pgdat = next_online_pgdat(pgdat)) {
  for (j = 0; j < 2; j++) {
   struct zone *zone = pgdat->node_zones + j;
   unsigned long present_pages = zone->present_pages;

   zone->lowmem_reserve[j] = 0;

   idx = j;
   while (idx) {
    struct zone *lower_zone;

    idx--;

    if (sysctl_lowmem_reserve_ratio[idx] < 1)
     sysctl_lowmem_reserve_ratio[idx] = 1;

    lower_zone = pgdat->node_zones + idx;
    lower_zone->lowmem_reserve[j] = present_pages /
     sysctl_lowmem_reserve_ratio[idx];
    present_pages += lower_zone->present_pages;
   }
  }
 }


 calculate_totalreserve_pages();
}







void setup_per_zone_pages_min(void)
{
 unsigned long pages_min = min_free_kbytes >> (12 - 10);
 unsigned long lowmem_pages = 0;
 struct zone *zone;
 unsigned long flags;


 for (zone = (first_online_pgdat())->node_zones; zone; zone = next_zone(zone)) {
  if (!is_highmem(zone))
   lowmem_pages += zone->present_pages;
 }

 for (zone = (first_online_pgdat())->node_zones; zone; zone = next_zone(zone)) {
  u64 tmp;

  do { ; flags = ({ unsigned long __ret; if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) __ret = ({ unsigned long __flags; do { ({ unsigned long __dummy; typeof(__flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (__flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0); do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); __flags; }); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) __ret = _spin_lock_irqsave((spinlock_t *)(&zone->lock)); else __ret = __bad_func_type(); __ret; }); } while (0);
  tmp = (u64)pages_min * zone->present_pages;
  ({ unsigned int __r, __b = (lowmem_pages); if (!__builtin_constant_p(__b) || __b == 0 || (6 < 4 && (__b & (__b - 1)) != 0)) { __r = ({ register unsigned int __base asm("r4") = __b; register unsigned long long __n asm("r0") = tmp; register unsigned long long __res asm("r2"); register unsigned int __rem asm("r1"); asm( ".ifnc " "%0" "," "r1" " ; .err ; .endif\n\t" ".ifnc " "%1" "," "r2" " ; .err ; .endif\n\t" ".ifnc " "%2" "," "r0" " ; .err ; .endif\n\t" ".ifnc " "%3" "," "r4" " ; .err ; .endif\n\t" "bl	__do_div64" : "=r" (__rem), "=r" (__res) : "r" (__n), "r" (__base) : "ip", "lr", "cc"); tmp = __res; __rem; }); } else if ((__b & (__b - 1)) == 0) { __r = tmp; __r &= (__b - 1); tmp /= __b; } else { unsigned long long __res, __x, __t, __m, __n = tmp; unsigned int __c, __p, __z = 0; __r = __n; __p = 1 << ({ unsigned int __left = (__b), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m = (~0ULL / __b) * __p; __m += (((~0ULL % __b + 1) * __p) + __b - 1) / __b; __x = ~0ULL / __b * __b - 1; __res = (__m & 0xffffffff) * (__x & 0xffffffff); __res >>= 32; __res += (__m & 0xffffffff) * (__x >> 32); __t = __res; __res += (__x & 0xffffffff) * (__m >> 32); __t = (__res < __t) ? (1ULL << 32) : 0; __res = (__res >> 32) + __t; __res += (__m >> 32) * (__x >> 32); __res /= __p; if (~0ULL % (__b / (__b & -__b)) == 0) { __n /= (__b & -__b); __m = ~0ULL / (__b / (__b & -__b)); __p = 1; __c = 1; } else if (__res != __x / __b) { __c = 1; __m = (~0ULL / __b) * __p; __m += ((~0ULL % __b + 1) * __p) / __b; } else { unsigned int __bits = -(__m & -__m); __bits |= __m >> 32; __bits = (~__bits) << 1; if (!__bits) { __p /= (__m & -__m); __m /= (__m & -__m); } else { __p >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); } __c = 0; } if (!__c) { asm ( "umull	%Q0, %R0, %1, %Q2\n\t" "mov	%Q0, #0" : "=&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { __res = __m; asm ( "umlal	%Q0, %R0, %Q1, %Q2\n\t" "mov	%Q0, #0" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umull	%Q0, %R0, %Q1, %Q2\n\t" "cmn	%Q0, %Q1\n\t" "adcs	%R0, %R0, %R1\n\t" "adc	%Q0, %3, #0" : "=&r" (__res) : "r" (__m), "r" (__n), "r" (__z) : "cc" ); } if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { asm ( "umlal	%R0, %Q0, %R1, %Q2\n\t" "umlal	%R0, %Q0, %Q1, %R2\n\t" "mov	%R0, #0\n\t" "umlal	%Q0, %R0, %R1, %R2" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umlal	%R0, %Q0, %R2, %Q3\n\t" "umlal	%R0, %1, %Q2, %R3\n\t" "mov	%R0, #0\n\t" "adds	%Q0, %1, %Q0\n\t" "adc	%R0, %R0, #0\n\t" "umlal	%Q0, %R0, %R2, %R3" : "+&r" (__res), "+&r" (__z) : "r" (__m), "r" (__n) : "cc" ); } __res /= __p; { unsigned int __res0 = __res; unsigned int __b0 = __b; __r -= __res0 * __b0; } tmp = __res; } __r; });
  if (is_highmem(zone)) {
# 4470 "mm/page_alloc.c"
   int min_pages;

   min_pages = zone->present_pages / 1024;
   if (min_pages < 32)
    min_pages = 32;
   if (min_pages > 128)
    min_pages = 128;
   zone->pages_min = min_pages;
  } else {




   zone->pages_min = tmp;
  }

  zone->pages_low = zone->pages_min + (tmp >> 2);
  zone->pages_high = zone->pages_min + (tmp >> 1);
  setup_zone_migrate_reserve(zone);
  do { ; do { if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0); do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); } while (0); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&zone->lock)); else __bad_func_type(); } while (0); } while (0);
 }


 calculate_totalreserve_pages();
}
# 4519 "mm/page_alloc.c"
static void setup_per_zone_inactive_ratio(void)
{
 struct zone *zone;

 for (zone = (first_online_pgdat())->node_zones; zone; zone = next_zone(zone)) {
  unsigned int gb, ratio;


  gb = zone->present_pages >> (30 - 12);
  ratio = int_sqrt(10 * gb);
  if (!ratio)
   ratio = 1;

  zone->inactive_ratio = ratio;
 }
}
# 4560 "mm/page_alloc.c"
static int __attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) init_per_zone_pages_min(void)
{
 unsigned long lowmem_kbytes;

 lowmem_kbytes = nr_free_buffer_pages() * ((1UL << 12) >> 10);

 min_free_kbytes = int_sqrt(lowmem_kbytes * 16);
 if (min_free_kbytes < 128)
  min_free_kbytes = 128;
 if (min_free_kbytes > 65536)
  min_free_kbytes = 65536;
 setup_per_zone_pages_min();
 setup_per_zone_lowmem_reserve();
 setup_per_zone_inactive_ratio();
 return 0;
}
static initcall_t __initcall_init_per_zone_pages_min6 __attribute__((__used__)) __attribute__((__section__(".initcall" "6" ".init"))) = init_per_zone_pages_min;






int min_free_kbytes_sysctl_handler(ctl_table *table, int write,
 struct file *file, void *buffer, size_t *length, loff_t *ppos)
{
 proc_dointvec(table, write, file, buffer, length, ppos);
 if (write)
  setup_per_zone_pages_min();
 return 0;
}
# 4635 "mm/page_alloc.c"
int lowmem_reserve_ratio_sysctl_handler(ctl_table *table, int write,
 struct file *file, void *buffer, size_t *length, loff_t *ppos)
{
 proc_dointvec_minmax(table, write, file, buffer, length, ppos);
 setup_per_zone_lowmem_reserve();
 return 0;
}







int percpu_pagelist_fraction_sysctl_handler(ctl_table *table, int write,
 struct file *file, void *buffer, size_t *length, loff_t *ppos)
{
 struct zone *zone;
 unsigned int cpu;
 int ret;

 ret = proc_dointvec_minmax(table, write, file, buffer, length, ppos);
 if (!write || (ret == -22))
  return ret;
 for (zone = (first_online_pgdat())->node_zones; zone; zone = next_zone(zone)) {
  for (((cpu)) = 0; ((cpu)) < 1; ((cpu))++, (void)cpu_online_mask) {
   unsigned long high;
   high = zone->present_pages / percpu_pagelist_fraction;
   setup_pagelist_highmark((&(zone)->pageset[(cpu)]), high);
  }
 }
 return 0;
}

int hashdist = 0;
# 4688 "mm/page_alloc.c"
void *__attribute__ ((__section__(".init.text"))) __attribute__((no_instrument_function)) alloc_large_system_hash(const char *tablename,
         unsigned long bucketsize,
         unsigned long numentries,
         int scale,
         int flags,
         unsigned int *_hash_shift,
         unsigned int *_hash_mask,
         unsigned long limit)
{
 unsigned long long max = limit;
 unsigned long log2qty, size;
 void *table = ((void *)0);


 if (!numentries) {

  numentries = nr_kernel_pages;
  numentries += (1UL << (20 - 12)) - 1;
  numentries >>= 20 - 12;
  numentries <<= 20 - 12;


  if (scale > 12)
   numentries >>= (scale - 12);
  else
   numentries <<= (12 - scale);


  if (__builtin_expect(!!((numentries * bucketsize) < (1UL << 12)), 0))
   numentries = (1UL << 12) / bucketsize;
 }
 numentries = ( __builtin_constant_p(numentries) ? ( (numentries == 1) ? 1 : (1UL << (( __builtin_constant_p((numentries) - 1) ? ( ((numentries) - 1) < 1 ? ____ilog2_NaN() : ((numentries) - 1) & (1ULL << 63) ? 63 : ((numentries) - 1) & (1ULL << 62) ? 62 : ((numentries) - 1) & (1ULL << 61) ? 61 : ((numentries) - 1) & (1ULL << 60) ? 60 : ((numentries) - 1) & (1ULL << 59) ? 59 : ((numentries) - 1) & (1ULL << 58) ? 58 : ((numentries) - 1) & (1ULL << 57) ? 57 : ((numentries) - 1) & (1ULL << 56) ? 56 : ((numentries) - 1) & (1ULL << 55) ? 55 : ((numentries) - 1) & (1ULL << 54) ? 54 : ((numentries) - 1) & (1ULL << 53) ? 53 : ((numentries) - 1) & (1ULL << 52) ? 52 : ((numentries) - 1) & (1ULL << 51) ? 51 : ((numentries) - 1) & (1ULL << 50) ? 50 : ((numentries) - 1) & (1ULL << 49) ? 49 : ((numentries) - 1) & (1ULL << 48) ? 48 : ((numentries) - 1) & (1ULL << 47) ? 47 : ((numentries) - 1) & (1ULL << 46) ? 46 : ((numentries) - 1) & (1ULL << 45) ? 45 : ((numentries) - 1) & (1ULL << 44) ? 44 : ((numentries) - 1) & (1ULL << 43) ? 43 : ((numentries) - 1) & (1ULL << 42) ? 42 : ((numentries) - 1) & (1ULL << 41) ? 41 : ((numentries) - 1) & (1ULL << 40) ? 40 : ((numentries) - 1) & (1ULL << 39) ? 39 : ((numentries) - 1) & (1ULL << 38) ? 38 : ((numentries) - 1) & (1ULL << 37) ? 37 : ((numentries) - 1) & (1ULL << 36) ? 36 : ((numentries) - 1) & (1ULL << 35) ? 35 : ((numentries) - 1) & (1ULL << 34) ? 34 : ((numentries) - 1) & (1ULL << 33) ? 33 : ((numentries) - 1) & (1ULL << 32) ? 32 : ((numentries) - 1) & (1ULL << 31) ? 31 : ((numentries) - 1) & (1ULL << 30) ? 30 : ((numentries) - 1) & (1ULL << 29) ? 29 : ((numentries) - 1) & (1ULL << 28) ? 28 : ((numentries) - 1) & (1ULL << 27) ? 27 : ((numentries) - 1) & (1ULL << 26) ? 26 : ((numentries) - 1) & (1ULL << 25) ? 25 : ((numentries) - 1) & (1ULL << 24) ? 24 : ((numentries) - 1) & (1ULL << 23) ? 23 : ((numentries) - 1) & (1ULL << 22) ? 22 : ((numentries) - 1) & (1ULL << 21) ? 21 : ((numentries) - 1) & (1ULL << 20) ? 20 : ((numentries) - 1) & (1ULL << 19) ? 19 : ((numentries) - 1) & (1ULL << 18) ? 18 : ((numentries) - 1) & (1ULL << 17) ? 17 : ((numentries) - 1) & (1ULL << 16) ? 16 : ((numentries) - 1) & (1ULL << 15) ? 15 : ((numentries) - 1) & (1ULL << 14) ? 14 : ((numentries) - 1) & (1ULL << 13) ? 13 : ((numentries) - 1) & (1ULL << 12) ? 12 : ((numentries) - 1) & (1ULL << 11) ? 11 : ((numentries) - 1) & (1ULL << 10) ? 10 : ((numentries) - 1) & (1ULL << 9) ? 9 : ((numentries) - 1) & (1ULL << 8) ? 8 : ((numentries) - 1) & (1ULL << 7) ? 7 : ((numentries) - 1) & (1ULL << 6) ? 6 : ((numentries) - 1) & (1ULL << 5) ? 5 : ((numentries) - 1) & (1ULL << 4) ? 4 : ((numentries) - 1) & (1ULL << 3) ? 3 : ((numentries) - 1) & (1ULL << 2) ? 2 : ((numentries) - 1) & (1ULL << 1) ? 1 : ((numentries) - 1) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof((numentries) - 1) <= 4) ? __ilog2_u32((numentries) - 1) : __ilog2_u64((numentries) - 1) ) + 1)) ) : __roundup_pow_of_two(numentries) );


 if (max == 0) {
  max = ((unsigned long long)nr_all_pages << 12) >> 4;
  ({ unsigned int __r, __b = (bucketsize); if (!__builtin_constant_p(__b) || __b == 0 || (6 < 4 && (__b & (__b - 1)) != 0)) { __r = ({ register unsigned int __base asm("r4") = __b; register unsigned long long __n asm("r0") = max; register unsigned long long __res asm("r2"); register unsigned int __rem asm("r1"); asm( ".ifnc " "%0" "," "r1" " ; .err ; .endif\n\t" ".ifnc " "%1" "," "r2" " ; .err ; .endif\n\t" ".ifnc " "%2" "," "r0" " ; .err ; .endif\n\t" ".ifnc " "%3" "," "r4" " ; .err ; .endif\n\t" "bl	__do_div64" : "=r" (__rem), "=r" (__res) : "r" (__n), "r" (__base) : "ip", "lr", "cc"); max = __res; __rem; }); } else if ((__b & (__b - 1)) == 0) { __r = max; __r &= (__b - 1); max /= __b; } else { unsigned long long __res, __x, __t, __m, __n = max; unsigned int __c, __p, __z = 0; __r = __n; __p = 1 << ({ unsigned int __left = (__b), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m = (~0ULL / __b) * __p; __m += (((~0ULL % __b + 1) * __p) + __b - 1) / __b; __x = ~0ULL / __b * __b - 1; __res = (__m & 0xffffffff) * (__x & 0xffffffff); __res >>= 32; __res += (__m & 0xffffffff) * (__x >> 32); __t = __res; __res += (__x & 0xffffffff) * (__m >> 32); __t = (__res < __t) ? (1ULL << 32) : 0; __res = (__res >> 32) + __t; __res += (__m >> 32) * (__x >> 32); __res /= __p; if (~0ULL % (__b / (__b & -__b)) == 0) { __n /= (__b & -__b); __m = ~0ULL / (__b / (__b & -__b)); __p = 1; __c = 1; } else if (__res != __x / __b) { __c = 1; __m = (~0ULL / __b) * __p; __m += ((~0ULL % __b + 1) * __p) / __b; } else { unsigned int __bits = -(__m & -__m); __bits |= __m >> 32; __bits = (~__bits) << 1; if (!__bits) { __p /= (__m & -__m); __m /= (__m & -__m); } else { __p >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); __m >>= ({ unsigned int __left = (__bits), __nr = 0; if (__left & 0xffff0000) __nr += 16, __left >>= 16; if (__left & 0x0000ff00) __nr += 8, __left >>= 8; if (__left & 0x000000f0) __nr += 4, __left >>= 4; if (__left & 0x0000000c) __nr += 2, __left >>= 2; if (__left & 0x00000002) __nr += 1; __nr; }); } __c = 0; } if (!__c) { asm ( "umull	%Q0, %R0, %1, %Q2\n\t" "mov	%Q0, #0" : "=&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { __res = __m; asm ( "umlal	%Q0, %R0, %Q1, %Q2\n\t" "mov	%Q0, #0" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umull	%Q0, %R0, %Q1, %Q2\n\t" "cmn	%Q0, %Q1\n\t" "adcs	%R0, %R0, %R1\n\t" "adc	%Q0, %3, #0" : "=&r" (__res) : "r" (__m), "r" (__n), "r" (__z) : "cc" ); } if (!(__m & ((1ULL << 63) | (1ULL << 31)))) { asm ( "umlal	%R0, %Q0, %R1, %Q2\n\t" "umlal	%R0, %Q0, %Q1, %R2\n\t" "mov	%R0, #0\n\t" "umlal	%Q0, %R0, %R1, %R2" : "+&r" (__res) : "r" (__m), "r" (__n) : "cc" ); } else { asm ( "umlal	%R0, %Q0, %R2, %Q3\n\t" "umlal	%R0, %1, %Q2, %R3\n\t" "mov	%R0, #0\n\t" "adds	%Q0, %1, %Q0\n\t" "adc	%R0, %R0, #0\n\t" "umlal	%Q0, %R0, %R2, %R3" : "+&r" (__res), "+&r" (__z) : "r" (__m), "r" (__n) : "cc" ); } __res /= __p; { unsigned int __res0 = __res; unsigned int __b0 = __b; __r -= __res0 * __b0; } max = __res; } __r; });
 }

 if (numentries > max)
  numentries = max;

 log2qty = ( __builtin_constant_p(numentries) ? ( (numentries) < 1 ? ____ilog2_NaN() : (numentries) & (1ULL << 63) ? 63 : (numentries) & (1ULL << 62) ? 62 : (numentries) & (1ULL << 61) ? 61 : (numentries) & (1ULL << 60) ? 60 : (numentries) & (1ULL << 59) ? 59 : (numentries) & (1ULL << 58) ? 58 : (numentries) & (1ULL << 57) ? 57 : (numentries) & (1ULL << 56) ? 56 : (numentries) & (1ULL << 55) ? 55 : (numentries) & (1ULL << 54) ? 54 : (numentries) & (1ULL << 53) ? 53 : (numentries) & (1ULL << 52) ? 52 : (numentries) & (1ULL << 51) ? 51 : (numentries) & (1ULL << 50) ? 50 : (numentries) & (1ULL << 49) ? 49 : (numentries) & (1ULL << 48) ? 48 : (numentries) & (1ULL << 47) ? 47 : (numentries) & (1ULL << 46) ? 46 : (numentries) & (1ULL << 45) ? 45 : (numentries) & (1ULL << 44) ? 44 : (numentries) & (1ULL << 43) ? 43 : (numentries) & (1ULL << 42) ? 42 : (numentries) & (1ULL << 41) ? 41 : (numentries) & (1ULL << 40) ? 40 : (numentries) & (1ULL << 39) ? 39 : (numentries) & (1ULL << 38) ? 38 : (numentries) & (1ULL << 37) ? 37 : (numentries) & (1ULL << 36) ? 36 : (numentries) & (1ULL << 35) ? 35 : (numentries) & (1ULL << 34) ? 34 : (numentries) & (1ULL << 33) ? 33 : (numentries) & (1ULL << 32) ? 32 : (numentries) & (1ULL << 31) ? 31 : (numentries) & (1ULL << 30) ? 30 : (numentries) & (1ULL << 29) ? 29 : (numentries) & (1ULL << 28) ? 28 : (numentries) & (1ULL << 27) ? 27 : (numentries) & (1ULL << 26) ? 26 : (numentries) & (1ULL << 25) ? 25 : (numentries) & (1ULL << 24) ? 24 : (numentries) & (1ULL << 23) ? 23 : (numentries) & (1ULL << 22) ? 22 : (numentries) & (1ULL << 21) ? 21 : (numentries) & (1ULL << 20) ? 20 : (numentries) & (1ULL << 19) ? 19 : (numentries) & (1ULL << 18) ? 18 : (numentries) & (1ULL << 17) ? 17 : (numentries) & (1ULL << 16) ? 16 : (numentries) & (1ULL << 15) ? 15 : (numentries) & (1ULL << 14) ? 14 : (numentries) & (1ULL << 13) ? 13 : (numentries) & (1ULL << 12) ? 12 : (numentries) & (1ULL << 11) ? 11 : (numentries) & (1ULL << 10) ? 10 : (numentries) & (1ULL << 9) ? 9 : (numentries) & (1ULL << 8) ? 8 : (numentries) & (1ULL << 7) ? 7 : (numentries) & (1ULL << 6) ? 6 : (numentries) & (1ULL << 5) ? 5 : (numentries) & (1ULL << 4) ? 4 : (numentries) & (1ULL << 3) ? 3 : (numentries) & (1ULL << 2) ? 2 : (numentries) & (1ULL << 1) ? 1 : (numentries) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof(numentries) <= 4) ? __ilog2_u32(numentries) : __ilog2_u64(numentries) );

 do {
  size = bucketsize << log2qty;
  if (flags & 0x00000001)
   table = __alloc_bootmem_nopanic(size, (1 << 5), (((unsigned long)(0xffffffff)) - (0xC0000000UL) + (0x80000000UL)));
  else if (hashdist)
   table = __vmalloc(size, ((( gfp_t)0x20u)), pgprot_kernel);
  else {
   unsigned long order = get_order(size);
   table = (void*) __get_free_pages(((( gfp_t)0x20u)), order);




   if (table) {
    unsigned long alloc_end = (unsigned long)table +
      ((1UL << 12) << order);
    unsigned long used = (unsigned long)table +
      (((size)+((typeof(size))((1UL << 12))-1))&~((typeof(size))((1UL << 12))-1));
    split_page((mem_map + (((((unsigned long)(table)) - (0xC0000000UL) + (0x80000000UL)) >> 12) - ((0x80000000UL) >> 12))), order);
    while (used < alloc_end) {
     free_pages((used),0);
     used += (1UL << 12);
    }
   }
  }
 } while (!table && size > (1UL << 12) && --log2qty);

 if (!table)
  panic("Failed to allocate %s hash table\n", tablename);

 printk("<6>" "%s hash table entries: %d (order: %d, %lu bytes)\n",
        tablename,
        (1U << log2qty),
        ( __builtin_constant_p(size) ? ( (size) < 1 ? ____ilog2_NaN() : (size) & (1ULL << 63) ? 63 : (size) & (1ULL << 62) ? 62 : (size) & (1ULL << 61) ? 61 : (size) & (1ULL << 60) ? 60 : (size) & (1ULL << 59) ? 59 : (size) & (1ULL << 58) ? 58 : (size) & (1ULL << 57) ? 57 : (size) & (1ULL << 56) ? 56 : (size) & (1ULL << 55) ? 55 : (size) & (1ULL << 54) ? 54 : (size) & (1ULL << 53) ? 53 : (size) & (1ULL << 52) ? 52 : (size) & (1ULL << 51) ? 51 : (size) & (1ULL << 50) ? 50 : (size) & (1ULL << 49) ? 49 : (size) & (1ULL << 48) ? 48 : (size) & (1ULL << 47) ? 47 : (size) & (1ULL << 46) ? 46 : (size) & (1ULL << 45) ? 45 : (size) & (1ULL << 44) ? 44 : (size) & (1ULL << 43) ? 43 : (size) & (1ULL << 42) ? 42 : (size) & (1ULL << 41) ? 41 : (size) & (1ULL << 40) ? 40 : (size) & (1ULL << 39) ? 39 : (size) & (1ULL << 38) ? 38 : (size) & (1ULL << 37) ? 37 : (size) & (1ULL << 36) ? 36 : (size) & (1ULL << 35) ? 35 : (size) & (1ULL << 34) ? 34 : (size) & (1ULL << 33) ? 33 : (size) & (1ULL << 32) ? 32 : (size) & (1ULL << 31) ? 31 : (size) & (1ULL << 30) ? 30 : (size) & (1ULL << 29) ? 29 : (size) & (1ULL << 28) ? 28 : (size) & (1ULL << 27) ? 27 : (size) & (1ULL << 26) ? 26 : (size) & (1ULL << 25) ? 25 : (size) & (1ULL << 24) ? 24 : (size) & (1ULL << 23) ? 23 : (size) & (1ULL << 22) ? 22 : (size) & (1ULL << 21) ? 21 : (size) & (1ULL << 20) ? 20 : (size) & (1ULL << 19) ? 19 : (size) & (1ULL << 18) ? 18 : (size) & (1ULL << 17) ? 17 : (size) & (1ULL << 16) ? 16 : (size) & (1ULL << 15) ? 15 : (size) & (1ULL << 14) ? 14 : (size) & (1ULL << 13) ? 13 : (size) & (1ULL << 12) ? 12 : (size) & (1ULL << 11) ? 11 : (size) & (1ULL << 10) ? 10 : (size) & (1ULL << 9) ? 9 : (size) & (1ULL << 8) ? 8 : (size) & (1ULL << 7) ? 7 : (size) & (1ULL << 6) ? 6 : (size) & (1ULL << 5) ? 5 : (size) & (1ULL << 4) ? 4 : (size) & (1ULL << 3) ? 3 : (size) & (1ULL << 2) ? 2 : (size) & (1ULL << 1) ? 1 : (size) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof(size) <= 4) ? __ilog2_u32(size) : __ilog2_u64(size) ) - 12,
        size);

 if (_hash_shift)
  *_hash_shift = log2qty;
 if (_hash_mask)
  *_hash_mask = (1 << log2qty) - 1;
# 4780 "mm/page_alloc.c"
 if (!hashdist)
  kmemleak_alloc(table, size, 1, ((( gfp_t)0x20u)));

 return table;
}


static inline __attribute__((always_inline)) unsigned long *get_pageblock_bitmap(struct zone *zone,
       unsigned long pfn)
{



 return zone->pageblock_flags;

}

static inline __attribute__((always_inline)) int pfn_to_bitidx(struct zone *zone, unsigned long pfn)
{




 pfn = pfn - zone->zone_start_pfn;
 return (pfn >> (11 -1)) * NR_PAGEBLOCK_BITS;

}
# 4815 "mm/page_alloc.c"
unsigned long get_pageblock_flags_group(struct page *page,
     int start_bitidx, int end_bitidx)
{
 struct zone *zone;
 unsigned long *bitmap;
 unsigned long pfn, bitidx;
 unsigned long flags = 0;
 unsigned long value = 1;

 zone = page_zone(page);
 pfn = ((unsigned long)((page) - mem_map) + ((0x80000000UL) >> 12));
 bitmap = get_pageblock_bitmap(zone, pfn);
 bitidx = pfn_to_bitidx(zone, pfn);

 for (; start_bitidx <= end_bitidx; start_bitidx++, value <<= 1)
  if (test_bit(bitidx + start_bitidx, bitmap))
   flags |= value;

 return flags;
}
# 4843 "mm/page_alloc.c"
void set_pageblock_flags_group(struct page *page, unsigned long flags,
     int start_bitidx, int end_bitidx)
{
 struct zone *zone;
 unsigned long *bitmap;
 unsigned long pfn, bitidx;
 unsigned long value = 1;

 zone = page_zone(page);
 pfn = ((unsigned long)((page) - mem_map) + ((0x80000000UL) >> 12));
 bitmap = get_pageblock_bitmap(zone, pfn);
 bitidx = pfn_to_bitidx(zone, pfn);
 do { } while (0);
 do { } while (0);

 for (; start_bitidx <= end_bitidx; start_bitidx++, value <<= 1)
  if (flags & value)
   __set_bit(bitidx + start_bitidx, bitmap);
  else
   __clear_bit(bitidx + start_bitidx, bitmap);
}







int set_migratetype_isolate(struct page *page)
{
 struct zone *zone;
 unsigned long flags;
 int ret = -16;

 zone = page_zone(page);
 do { ; flags = ({ unsigned long __ret; if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) __ret = ({ unsigned long __flags; do { ({ unsigned long __dummy; typeof(__flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (__flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0); do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); __flags; }); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) __ret = _spin_lock_irqsave((spinlock_t *)(&zone->lock)); else __ret = __bad_func_type(); __ret; }); } while (0);



 if (get_pageblock_migratetype(page) != 2)
  goto out;
 set_pageblock_migratetype(page, 4);
 move_freepages_block(zone, page, 4);
 ret = 0;
out:
 do { ; do { if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0); do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); } while (0); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&zone->lock)); else __bad_func_type(); } while (0); } while (0);
 if (!ret)
  drain_all_pages();
 return ret;
}

void unset_migratetype_isolate(struct page *page)
{
 struct zone *zone;
 unsigned long flags;
 zone = page_zone(page);
 do { ; flags = ({ unsigned long __ret; if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) __ret = ({ unsigned long __flags; do { ({ unsigned long __dummy; typeof(__flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); ({ __asm__ __volatile__( "mrs	%0, cpsr		@ local_irq_save\n" "cpsid	i" : "=r" (__flags) : : "memory", "cc"); }); trace_hardirqs_off(); } while (0); do { do { add_preempt_count(1); __asm__ __volatile__("": : :"memory"); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); __flags; }); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) __ret = _spin_lock_irqsave((spinlock_t *)(&zone->lock)); else __ret = __bad_func_type(); __ret; }); } while (0);
 if (get_pageblock_migratetype(page) != 4)
  goto out;
 set_pageblock_migratetype(page, 2);
 move_freepages_block(zone, page, 2);
out:
 do { ; do { if (__builtin_types_compatible_p(typeof((&zone->lock)), raw_spinlock_t *)) do { do { ({ unsigned long __dummy; typeof(flags) __dummy2; (void)(&__dummy == &__dummy2); 1; }); if (({ (int)((flags) & 0x00000080); })) { __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); trace_hardirqs_off(); } else { trace_hardirqs_on(); __asm__ __volatile__( "msr	cpsr_c, %0		@ local_irq_restore\n" : : "r" (flags) : "memory", "cc"); } } while (0); do { do { do { __asm__ __volatile__("": : :"memory"); sub_preempt_count(1); } while (0); __asm__ __volatile__("": : :"memory"); do { if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 1)), 0)) preempt_schedule(); } while (0); } while (0); (void)0; (void)((raw_spinlock_t *)(&zone->lock)); } while (0); } while (0); else if (__builtin_types_compatible_p(typeof((&zone->lock)), spinlock_t *)) rt_spin_unlock((spinlock_t *)(&zone->lock)); else __bad_func_type(); } while (0); } while (0);
}
