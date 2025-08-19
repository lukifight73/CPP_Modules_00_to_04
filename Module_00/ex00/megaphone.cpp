/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:34:25 by lbenatar          #+#    #+#             */
/*   Updated: 2025/02/26 10:52:18 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac > 1)
    {
        j = 1;
        while (av[j])
        {
            i = 0;
            while (av[j][i])
            {
                av[j][i] = toupper(av[j][i]);
                i++;
            }
            std::cout << av[j];
            j++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}
