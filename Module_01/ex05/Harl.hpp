/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <lbenatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:13:18 by lbenatar          #+#    #+#             */
/*   Updated: 2025/03/06 14:58:41 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>

class Harl
{
    public:

    Harl();
    void complain( std::string level );
    ~Harl();

    private:

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

};

#endif
