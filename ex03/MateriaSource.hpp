/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:59:10 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 19:59:16 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	const static int	_max_materias = 4;

	AMateria			*_materias[MateriaSource::_max_materias];
	int					_number_loaded;
public:
						MateriaSource(void);
						MateriaSource(const MateriaSource &src);
						~MateriaSource(void);

	MateriaSource		&operator=(const MateriaSource &rhs);

	virtual void		learnMateria(AMateria *new_materia);
	virtual AMateria	*createMateria(std::string const &type);
};

#endif