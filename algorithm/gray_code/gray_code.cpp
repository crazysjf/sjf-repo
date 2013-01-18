//
// 格雷码生成算法
// 参考：http://en.wikipedia.org/wiki/Gray_code
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class gray_code {
public:
	//
	// Generate n-bit gray code.
	//
	vector<string> generate(int n) {
		vector<string> ret_vector;
		if (n == 1) {
			ret_vector.push_back(string("0"));
			ret_vector.push_back(string("1"));
			return ret_vector;
		} else {
			vector<string> left_vec  = generate(n - 1);
			vector<string> right_vec;
			vector<string>::reverse_iterator r_itor;

			// Mirror
			for (r_itor = left_vec.rbegin(); r_itor != left_vec.rend(); r_itor ++) {
				right_vec.push_back(*r_itor);
			}

			vector<string>::iterator itor;
			for (itor = left_vec.begin(); itor != left_vec.end(); itor ++) {
				itor->insert(0, "0");
			}

			for (itor = right_vec.begin(); itor != right_vec.end(); itor ++) {
				itor->insert(0, "1");
				left_vec.push_back(*itor);
			}
			return left_vec;
		}
	}
};

int main()
{

	gray_code code_gen;
	vector<string> code = code_gen.generate(10);
	vector<string>::iterator itor;
	for (itor = code.begin(); itor != code.end(); itor ++) {
		cout << *itor << endl;
	}
}
