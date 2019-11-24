#include <iostream>
#include <regex>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	std::string pattern("([[:alpha:]]*[^c]ei[[:alpha:]]*)");
	std::regex r(pattern, std::regex::icase);
	std::string s("freind receipt theif receive albeit neighbor");
	//以下为单词对照表，用于对比单词是否拼写错误。
	std::vector<std::string> vec{ "neighbor","albeit","beige","feint","heir","reign","their",
			"counterfeit","foreign","inveigh","rein","veil","deign",
			"forfeit","inveigle","seize","veineiderdown","freight",
			"leisure","skein","weigheight","heifer","neigh","sleigh",
			"weighteither","height","neighbour","sleight","weirfeign",
			"heinous","neither","surfeit","weird" };
	//循环查找所有匹配的单词
	for (std::sregex_iterator it(s.begin(), s.end(), r), end_it; it != end_it; ++it)
	{
		//查询单词对照表，判断所匹配到的单词是否拼写错误
		//如果并非拼写错误，则忽略它（即结束本次循环，使用 continue。）
		if (find(vec.begin(), vec.end(), it->str()) != vec.end())
			continue;
		std::cout << it->str() << std::endl;
	}
	system("pause");
	return 0;
}
