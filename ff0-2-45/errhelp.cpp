#include <cstring>
#include <iostream>

using namespace std;

const int len = 19;

string helpmsg[len] = {
	"未知错误。",
	"找不到给定的文件（无法访问到）。\n请检查文件是否存在，以及 Warfarin 虚拟机是否有权限访问。",
	"文件句柄无效（必须是一个有效的整数）。\n请使用 \"变量名 = file_open(文件名)\" 来获得一个句柄，并检查该句柄是否被 file_close() 关闭过。",
	"不支持两个类型之间的运算符（比如 Null + String) 。\n请检查变量是否已经正确地初始化，或者使用参数检查语法来限定参数的类型。",
	"错误的变量名（无法识别）。\n变量名应该以字母或下划线开头，后面的字符应该是数字、字母或下划线。",
	"未定义的变量（当前无法找到）。\n请在使用变量之前将其初始化，即赋一个初值。",
	"无法通过下标访问给定的类型（必须是字符串或引用）。\n请检查变量是否是字符串或引用，并确保该变量有效。",
	"无效的下标（必须是数字或字符串）。\n请检查下标的类型是否正确。",
	"越界访问（超过边界）。\n请确保下标的范围在引用的范围内、或在字符串的长度内。",
	"声明的数组过大（超过1024 * 256）。\n请减小数组范围。",
	"非法调用（必须调用函数类型的值）。\n请确保函数在作用域内，且没有被修改过。",
	"错误的参数个数（必须和声明一致）。\n请检查调用的参数个数。",
	"错误的参数类型（必须和声明中的限定一致）。\n请检查参数是否被初始化以及其类型，或请阅读该函数的声明以获得正确的类型信息。",
	"栈溢出（递归调用过多）。\n请优化算法。",
	"非法的转义字符（'\\'之后的字符错误）。\n请使用正确的转义字符。",
	"无效的表达式（无法识别）。\n请检查表达式的书写。",
	"拒绝访问（只读变量）。禁止修改该变量。",
	"中断执行（执行到了 stop）。请联系该部分程序的开发者以获得帮助信息。",
	"无效的 .ff0 文件（格式错误）。请确保这个 .ff0 文件没有被破坏。"
};

int main() {
	int x;
  cout << "请输入错误代码：";
	while(cin >> x) {
		if(len <= x || x < 0) x = 0; 
		cout << "错误代码 " << x << ": " << helpmsg[x] << endl;
    cout << "请输入错误代码：";
	}
	return 0;
}
