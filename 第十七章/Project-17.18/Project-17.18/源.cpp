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
	//����Ϊ���ʶ��ձ����ڶԱȵ����Ƿ�ƴд����
	std::vector<std::string> vec{ "neighbor","albeit","beige","feint","heir","reign","their",
			"counterfeit","foreign","inveigh","rein","veil","deign",
			"forfeit","inveigle","seize","veineiderdown","freight",
			"leisure","skein","weigheight","heifer","neigh","sleigh",
			"weighteither","height","neighbour","sleight","weirfeign",
			"heinous","neither","surfeit","weird" };
	//ѭ����������ƥ��ĵ���
	for (std::sregex_iterator it(s.begin(), s.end(), r), end_it; it != end_it; ++it)
	{
		//��ѯ���ʶ��ձ��ж���ƥ�䵽�ĵ����Ƿ�ƴд����
		//�������ƴд�����������������������ѭ����ʹ�� continue����
		if (find(vec.begin(), vec.end(), it->str()) != vec.end())
			continue;
		std::cout << it->str() << std::endl;
	}
	system("pause");
	return 0;
}
