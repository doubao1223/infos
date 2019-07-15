/*
 * MyString.h
 *
 *  Created on: Jul 15, 2019
 *      Author: wangjz
 */

#ifndef MYSTRING_HPP_
#define MYSTRING_HPP_

template<typename C>				// 宣告了一个模板, 及类型C
class MyString {					// 模板名称 MyString
public:
	MyString();

	C& operator[](int n) { return ptr[n]; }
	MyString& operator+ (C c);		// 将 c 添加到尾端

	void print(ostream& out = cout);
	string getString();

private:
	static const int short_max = 15;
	int sz;	// C的个数

	C* ptr;
	union {
		int space;
		C ch[short_max + 1];		// 替结尾字元保留空间
	};
};

template<typename C>
MyString<C>::MyString()
	:sz{0}, ptr{ch}
{
	ch[0] = {};
}

template<typename C>
MyString<C>& MyString<C>::operator+ (C c)
{
	// ... 将 c 添加到此字串的尾端上 ...
	if (sz < 15) {
		ch[sz] = c;
		cout << "+ " << c << endl;
		sz++;
	}

	return *this;
}

template<typename C>
string MyString<C>::getString() {
	string s;
	s.resize(sz);
	for (int i = 0; i < sz; i++) {
		s[i] = ch[i];
	}

    return s;
}

template<typename C>
void MyString<C>::print(ostream& out)
{
	out << "string content: " << getString();
}


#endif /* MYSTRING_HPP_ */
