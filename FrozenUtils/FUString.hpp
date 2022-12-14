/*
 * @Author: Frozen (https://github.com/AlterFrozen)
 * @Date: 2022-12-10 17:07:31
 * @LastEditTime: 2022-12-10 17:40:38
 * @LastEditors: Please set LastEditors
 * @Description: A collection of the operations for string (C++20)

███████╗██████╗  ██████╗ ███████╗███████╗███╗   ██╗    ██╗   ██╗████████╗██╗██╗     ███████╗
██╔════╝██╔══██╗██╔═══██╗╚══███╔╝██╔════╝████╗  ██║    ██║   ██║╚══██╔══╝██║██║     ██╔════╝
█████╗  ██████╔╝██║   ██║  ███╔╝ █████╗  ██╔██╗ ██║    ██║   ██║   ██║   ██║██║     ███████╗
██╔══╝  ██╔══██╗██║   ██║ ███╔╝  ██╔══╝  ██║╚██╗██║    ██║   ██║   ██║   ██║██║     ╚════██║
██║     ██║  ██║╚██████╔╝███████╗███████╗██║ ╚████║    ╚██████╔╝   ██║   ██║███████╗███████║
╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚══════╝╚══════╝╚═╝  ╚═══╝     ╚═════╝    ╚═╝   ╚═╝╚══════╝╚══════╝                                                                                     

[Logo Generated By]>> http://patorjk.com/software/taag/ 
*/

#ifndef _FUSTRING_HPP_
#define _FUSTRING_HPP_

#include <string>

namespace FU
{
    /**
     * Clean the "space" on both sides of a string
     * @param {std::string&} str
     * @return {void}
     */ 
    void trim(std::string& str)
    {
        str.erase(0, str.find_first_not_of(" \t\n\r\f\v"));
        str.erase(str.find_last_not_of(" \t\n\r\f\v") + 1);
    }

} // namespace FU

#endif