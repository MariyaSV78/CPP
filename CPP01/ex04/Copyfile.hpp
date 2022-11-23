/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Copyfile.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:36:44 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:36:47 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COPYFILE_HPP
# define COPYFILE_HPP

# include <iostream>
# include <string>
# include <fstream>

class Replace
{
    public:
        Replace ();
        ~Replace ();

        int     ft_replace ();
        int     ft_check_error (int ac, char **ag);
        int     getN();

    private:
        std::string _s1;
        std::string _s2;
        std::string _oldfile;
        std::string _newfile;
        std::string _content;
        int         _N;
    };


    void    ft_test(char **argv, int N);

#endif
