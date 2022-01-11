/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:47:34 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 20:04:59 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:
	/* datas */
protected:
	std::string			_type;
public:
						AMateria(void);
						AMateria(const AMateria &src);
						AMateria(std::string const & type);
	virtual				~AMateria(void);

	AMateria			&operator=(const AMateria &rhs);

	std::string const	&getType() const; //Returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter &target) = 0;
};



#endif
