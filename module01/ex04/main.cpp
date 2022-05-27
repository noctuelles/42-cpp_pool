/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:27:49 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 20:28:49 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <errno.h>
#include <string.h>
#include <string>

/* Sed for looser ! */

int	main(int argc, char **argv)
{
	std::fstream	ifs,
					ofs;
	std::string		filename,
					line,
					str_to_replace,
					by;

	/* Checking arg counts. */

	if (argc != 4)
	{
		std::cout << "Usage : " << argv[0] << " <filename> <str_to_replace> <by>" << std::endl;
		return (1);
	}
	filename = argv[1];
	str_to_replace = argv[2];
	by = argv[3];

	/* Opening files. */

	ifs.open(argv[1], std::ofstream::in);
	if (ifs.fail())
	{
		std::cout << "Can't open file '" << argv[1] << "': " << strerror(errno) << std::endl;
		return (1);
	}
	ofs.open(filename.append(".replace").c_str(), std::ofstream::out);
	if (ofs.fail())
	{
		std::cout << "Can't open file '" << argv[1] << "': " << strerror(errno) << std::endl;
		return (1);
	}

	/* Read whole file. */

	while (std::getline(ifs, line))
	{
		/* Find and replace. */
		for (size_t i = 0; line[i]; i++)
		{
			if (line[i] == str_to_replace[0] && line.compare(i, str_to_replace.length(), str_to_replace) == 0)
			{
				ofs << by;
				i += str_to_replace.length() - 1;
			}
			else
				ofs << line[i];
		}
		/* Check if we haven't reached EOF to append a newline. */
		if (std::cin.good())
			ofs << std::endl;
	}
	ifs.close();
	ofs.close();

	return (0);
}
