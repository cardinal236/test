/*
 * @Author: zxl
 * @Version: bala bala
 * @Date: 2022-08-01 15:03:37
 * @LastEditTime: 2022-08-11 15:30:09
 * @Description: bala bala
 */
#include <iostream>
#include "ctype.h"
#include "vector"
using namespace std;

// int main(){//统计输入的每个的每个值出现了多少次
//      int currVal = 0;
//     int val = 0;
//     if(cin >> currVal){
//         int cnt = 1;
//         while(cin >> val){
//             if (val == currVal)
//                 ++cnt;
//             else{
//                 cout << currVal << " occurs " << cnt << " times" << endl;
//                 currVal = val;
//                 cnt = 1;
//             }   
//         }
//         cout << currVal << " occurs " << cnt << " times " << endl;
//     }//不输入ctrl+z将会处于 等待状态
//     cout << " hello ";
//     return 0;
// }
/* int main(){
    unsigned u = 10;
    unsigned i = 42;
    cout << i - u << endl; //84
    cout << u - i << endl; //4294967264
    cout << "\t hi! \n asd ";
}
 */
/* int main(){
    string global_str;
    int global_int;
    int local_int;
    string local_str;
    cout << global_str << endl;
    cout << local_str << endl;
    cout << global_int << endl;
    cout << local_int << endl;
} */ 
   /*  int i = 42;
    int main(){
        /* int sum  = 0;
        for(int i = 1; i <= 10; i++){
            sum = sum + i;
            cout << "第 " << i << " 次后为 "<< sum << endl;
        } 
        int i = 100;
        int j = i;
        cout << i << j << endl;
    } */

    /* int main(){
        int i, &ri = i;
        i = 5;
        ri = 10;
        cout << i << "and" << ri << endl;
        extern const int bufSize = 512;
    } */

   /*  int main(){
        string line;
        //每次读入一整行，直到到达文件末尾
        while (cin  >> line)
            cout << line << endl;
        return 0;
    } */
   /*  int main(){
        string line;
        while (getline(cin, line)){
            if (line.size() > 31){
                cout << line << endl;
            }
        }

    } */
 /* int main(){
    string str1, str2;
    cin >> str1 >> str2;
    if(str1.size() > str2.size()){
        cout << str1 << endl;
    }
    else
        cout << str2 << endl;
 } */
    /* int main(){
        string str_in, str_sum;
        while (cin >>str_in){
            str_sum = str_sum + str_in + " ";
        }
        cout << str_sum;
    } */
 /*  int main(){
    string s("hello asdasd");
    for (auto &c : s) //c是引用，故会改变其中的值
        c = toupper(c);
    cout << s << endl;
  } */
  /* int main(){
    string s("hello,.,world!!!");
    int punct_cnt = 0;
    for(auto c : s)
    {
         if(ispunct(c))//只能识别英文符号
            punct_cnt++;
    }
       
    cout << punct_cnt
        <<"  dasdas  " << s << endl;
  }
     */
    /* int main(){
        string str = "3  21";
        for(char &i : str){
            i = 's';
        }
        cout << str << endl;
    } */
   /*  int main(){
        string str("dasdasddas");
        for(int i = 0; i < str.size() ; i++){
            str[i] = '*';
        }
        cout << str << endl;
    } */
    /* int main(){
        string str = "asd"; // asd\0
        int i = 0;
        while(i != str.size()){
            str[i] = '*';
            i++;
        }
        cout << str << endl;
    } */
   /*  int main(){
        vector<int> v2;  //空vector对象
        for (int i = 0; i != 100; i++){
            v2.push_back(i);//依次把整数值放到v2尾端
            //循环结束后v2有100个元素，0-99
        }
        string word;
        vector<string> text;
        while (cin >> word){
            text.push_back(word);
        }
    } */
/* int main()
{
    vector<int> v1;
    // print_vector(v1);
    cout << v1.size() << endl;
    for(auto c : v1)
    {
        cout << c <<' ';
    }
    cout << endl;

    vector<int> v2(10);
    cout << v2.size() << endl;
    for(auto c : v2)
    {
        cout << c <<' ';
    }
    cout << endl;

    vector<int> v3(10,42);
    cout << v3.size() << endl;
    for(auto c : v3)
    {
        cout << c <<' ';
    }
    cout << endl;

    vector<int> v4{10};
    cout << v4.size() << endl;
    for(auto c : v4)
    {
        cout << c <<' ';
    }
    cout << endl;

    vector<int> v5{10,42};
    cout << v5.size() << endl;
    for(auto c : v5)
    {
        cout << c <<' ';
    }
    cout << endl;

    vector<string> v6{10};
    cout << v6.size() << endl;
    for(auto c : v6)
    {
        cout << c <<' ';
    }
    cout << endl;

    vector<string> v7{10,"hi"};
    cout << v7.size() << endl;
    for(auto c : v7)
    {
        cout << c <<' ';
    }
    cout << endl;

    return 0;
} */
   /*  int main(){
        vector<string> str;
        string s;
        while(cin >> s){
            str.push_back(s);
        }
        for(auto &c1 : str){
            for(auto &c2 :c1){
                c2 = toupper(c2);
            }
        }

        for(auto c : str){
            cout << c << endl;
        }
        for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        //循环先用s.begin的返回值来初始化it，意味着it指示的是s中的第一个字符
        //条件部分检查是否已到达s的尾部，如果尚未达到
        //则将it解引用的结果传入isspace函数检查是否遇到了空白，
        //每次迭代的最后，执行++it令迭代器前移一个位置以访问s的下一个字符
            *it = toupper(*it);  //将当前字符改写成大写形式

        vector<int> v;
        const vector<int> cv;
        auto it1 = v.begin(); //it1的类型是 vector<int>::iterator
        auto it2 = cv.begin();//it2的类型是 vector<int>::const_iterator
        auto it3 = v.cbegin();//it3的类型是 vector<int>::const_iterator
        string text = "dsadasdas";
        for(auto ita = text.cbegin(); ita != text.cend() && !ita->empty(); ita++)
            cout << *ita;
    } */
    /* int main(){
        vector<string> text = {"adasdasd, qweqwedasd."};
        for(auto it = text.begin(); it != text.end() && !it->empty(); it++)
            for(auto &c : *it)
                c = toupper(c);
        
        for(auto it = text.cbegin(); it != text.cend() && !it->empty(); it++)
            cout<< *it <<endl;

        //二分查找 使用迭代器运算
        //text必须是有序的
        //beg 和 end表示我们搜索的范围
        auto beg = text.begin();
        auto end = text.end();
        auto mid = text.begin()+(end - beg)/2
        //当还有元素尚未检查并且我们还没有找到sought时执行循环
        while (mid !=end && *mid != sought){
            if (sought < *mid)
                end = mid;
            else
                beg = mid + 1;
            mid = beg +(end -beg)/2
        }
    } */
    /* int main(){
        vector<unsigned> score(11,0);
        unsigned int grade;
        auto it = score.begin();
        while( cin >> grade){
            (*(it + grade/10))++;
            cout << grade/10 << endl;
        }
        for(auto e : score){
            cout << e << " " << endl;
        }
        
    } */
    int fact(int val){
        int ret = 1;
        while(val > 1){
             ret = ret * val;
             val--;
        }
        return ret;
    }
    int main(){
        cout << fact(5);
    }