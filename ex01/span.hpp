/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:24:50 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 20:19:15 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>

class Span
{
private:
	size_t				_max_stored;
	std::vector<int>	_values;
public:
						Span(void);
						Span(size_t nbr);
						Span(const Span &src);
						~Span(void);

	Span				&operator=(const Span &rhs);

	void				addNumber(int nbr);
	void				it_addNumber(std::vector<int>::iterator begin,
							std::vector<int>::iterator end);
	int					longest_span(void) const;
	int					shortest_span(void) const;
	int					get_max_stored(void);
	int					get_stored(void);

	class NotEnough : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("You need more int in the Span to obtain the span");
		}
	};
};

#endif