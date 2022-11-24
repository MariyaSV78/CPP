/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:32:56 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:32:59 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain 
{
    private:
        std::string     _ideas[100];

    public:
        Brain();
        Brain(Brain const& classCopy);
        ~Brain();
        
        Brain& operator=(Brain const& rsh);
        std::string   getIdeas(int i);
        void          setIdea(int i, std::string idea);
};

#endif
