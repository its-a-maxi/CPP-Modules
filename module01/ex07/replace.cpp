/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonroy- <mmonroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:00:14 by mmonroy-          #+#    #+#             */
/*   Updated: 2021/02/25 13:08:58 by mmonroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

static int  ft_check_arg(int argc, char **argv)
{
    if (argc < 4)
        std::cout << "Error: Not enought arguments" << std::endl;
    else if (argc > 4)
        std::cout << "Error: Too many arguments" << std::endl;
    else if (!argv[2][0] || !argv[3][0])
        std::cout << "Error: The program doesn't accept empty strings" << std::endl;
    if (argc != 4 || !argv[2][0] || !argv[3][0])
        return (0);
    return (1);
}

int         main(int argc,char **argv)
{
    std::string         line;
    std::string         name;
    std::string         search;


    if (!ft_check_arg(argc, argv))
        return (0);
    name = argv[1];
    name = name + ".replace";
    search = argv[2];
    std::ifstream       file(argv[1]);
    std::ofstream       myfile(name);
    if (!file.is_open() || !myfile.is_open())
    {
        std::cout << "Error: Unable to open the file" << std::endl;
        return (0);
    }
    while (std::getline(file, line))
    {
        while (line.find(search) != std::string::npos)
            line.replace(line.find(search), search.size(), argv[3]);
        myfile << line << std::endl;
    }
    file.close();
    myfile.close();
    
    return (0);
}