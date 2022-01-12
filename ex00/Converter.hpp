/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:11:51 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 15:26:28 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP
# include <string>

class Converter
{
private:
	enum		_input_types
	{
				NO_TYPE = -1,
				CHAR,
				INT,
				FLOAT,
				DOUBLE,
	};
	static const std::string	_special_val[8];
	int			_type;
	bool		_nan;
	char		_c_conv;
	int			_i_conv;
	float		_f_conv;
	double		_d_conv;

	bool		_check_special_val(std::string &input);
	void		_valid_input(std::string &input);
	size_t		_get_min_prec(void);
public:
	Converter(void);
	Converter(const Converter &src);
	~Converter(void);

	Converter	&operator=(const Converter &rhs);

	void		convert_str(std::string input);
	char		get_c(void);
	int			get_i(void);
	float		get_f(void);
	double		get_d(void);
	void		print_all(void);
	void		reset(void);

	class StringInvalid : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("string can't be converted");
		}
	};
};


#endif