/*
 * @Author: Frozen (https://github.com/AlterFrozen)
 * @Date: 2022-10-16 8:50:31
 * @LastEditTime: 2022-10-16 10:43:17
 * @LastEditors: Please set LastEditors
 * @Description: A collection of file system functions (C++20)

███████╗██████╗  ██████╗ ███████╗███████╗███╗   ██╗    ██╗   ██╗████████╗██╗██╗     ███████╗
██╔════╝██╔══██╗██╔═══██╗╚══███╔╝██╔════╝████╗  ██║    ██║   ██║╚══██╔══╝██║██║     ██╔════╝
█████╗  ██████╔╝██║   ██║  ███╔╝ █████╗  ██╔██╗ ██║    ██║   ██║   ██║   ██║██║     ███████╗
██╔══╝  ██╔══██╗██║   ██║ ███╔╝  ██╔══╝  ██║╚██╗██║    ██║   ██║   ██║   ██║██║     ╚════██║
██║     ██║  ██║╚██████╔╝███████╗███████╗██║ ╚████║    ╚██████╔╝   ██║   ██║███████╗███████║
╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚══════╝╚══════╝╚═╝  ╚═══╝     ╚═════╝    ╚═╝   ╚═╝╚══════╝╚══════╝                                                                                          

[Logo Generated By]>> http://patorjk.com/software/taag/ 
*/

#ifndef _FUFILE_HPP_
#define _FUFILE_HPP_

#include <string>

namespace FU
{
    /**
     * Returns the standardized path (transform '/' to '\')
     * @param {std::string&} target
     * @return {std::string} standardized path
     */
    std::string standardizeCmdPath(const std::string& target)
    {
        std::string standardPath;
        int cnt = 0;
        for (char c : target) 
        //Usage: Avoid unexpected embedded spaces and confuse related code
        //Tested Systems: Windows10 & Linux(Ubuntu)
        {
            if (c == '/') 
            {
                if (!cnt++) standardPath += "/\"";
                else standardPath +="\"/\"";
            } else standardPath.push_back(c);
        }
        standardPath.push_back('\"');
        return standardPath;
    }

} // namespace FU

#endif
