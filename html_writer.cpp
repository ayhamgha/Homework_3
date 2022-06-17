//#include <fmt/core.h>
#include <iostream>
#include "api/html_writer.hpp"
#include <string>
void OpenDocument()
{
    std::cout << "<!DOCTYPE html>\n<html>" << std::endl;
}
void CloseDocument()
{
    std::cout << "</html>";
}
void AddCSSStyle(const std::string &stylesheet = "web_app/style.css")
{
    std::cout << " <link rel=\"stylesheet\" type=\"text/css\" href=\"" << stylesheet << "\" />" << std::endl;
    //<link rel="stylesheet" type="text/css" href="style.css" />
}
void AddTitle(const std::string &title = "Image Browser")
{
    std::cout << "<title>" << title << "</title>" << std::endl;
}
void OpenBody()
{
    std::cout << "<body>" << std::endl;
}
void CloseBody()
{
    std::cout << "</body>" << std::endl;
}
