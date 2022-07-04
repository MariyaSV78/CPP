#include "Copyfile.hpp"

Replace::Replace(){};

Replace::~Replace () {};

int Replace::ft_check_error(int ac, char **argv)
{
    std::string     tmp;

    if (ac != 4)
    {
        std::cout << "Error, three parameters required" << std::endl;
        return (1);
    }
    _s1 = argv[2];
    _s2 = argv[3];
    _oldfile = argv[1];
    if (_s1.empty() || _s2.empty())
    {
        std::cout << "Error, Invalid argument" << std::endl;
        return (1);
    }
    std::ifstream   r_file(_oldfile.c_str());
    if(!r_file)
    {
        std::cout << "Error: Cannot open the file" << argv[1] << std::endl;
        return (1);
    }
    
    while(getline(r_file, tmp)) 
        _content += tmp + '\n';
    _content.erase(_content.length() - 1, 1);
    
    if(_content.length() == 0)
    {
        std::cout << "Error: file " << argv[1] << " is empty"  << std::endl;
        return (1);
    }
    return (0);
}

int     Replace::ft_replace()
{
    size_t      i = 0;
    std::string tmp = _content;
   
    _newfile = _oldfile + ".replace";
    _N = 0;

    std::ofstream  w_file(_newfile.c_str());
    if (!w_file)
	{
		std::cout << "ofstream failed" << std::endl;
		return (1);
	}
    while (i < tmp.length())
    {
        if (tmp.compare(i, _s1.length(), _s1) == 0)
        {
            tmp.erase(i, _s1.length());
            tmp.insert(i, _s2);
            i += _s2.length();
            _N++;
        }
        else
            i++;
    }
    w_file << tmp << std::endl;
    return (0);
}

int    Replace::getN()
{
    return (_N);
}

void    ft_test(char **argv, int N)
{
    std::string     tmp;
    std::string     tmp_all;
    std::string     tmp_repl_all;
    std::string     f_name;
    
    f_name = argv[1];
    std::ifstream   r_file(argv[1]);
    f_name = f_name + ".replace";
    std::ifstream   r_file_repl(f_name.c_str());
    
    while(getline(r_file, tmp))
        tmp_all += tmp + '\n';
 
    tmp_all.erase(tmp_all.length()- 2, 2);
    
    while(getline(r_file_repl, tmp)) 
        tmp_repl_all += tmp + '\n';
 
    tmp_repl_all.erase(tmp_repl_all.length() - 3, 3);
    std::cout << "In string " << std::endl;
    std::cout << "\"" << tmp_all << "\"" << std::endl;
    std::cout << "the s1 =  \"" << argv[2] << "\" has successfulle been replaced by s2 = \"" << argv[3] << "\" " << N << " times => " << std::endl;
    std::cout << "\"" << tmp_repl_all << "\"" << std::endl;
}