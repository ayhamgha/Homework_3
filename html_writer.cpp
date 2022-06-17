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
    std::cout << "<head>" << std::endl;
    std::cout << " <link rel=\"stylesheet\" type=\"text/css\" href=\"" << stylesheet << "\" />" << std::endl;
    //<link rel="stylesheet" type="text/css" href="style.css" />
    std::cout << "</head>" << std::endl;
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
void OpenRow()
{
    std::cout << "<div class=\"row\">" << std::endl;
}
void CloseRow()
{
    std::cout << "</div>" << std::endl;
}
void OpenColumn()
{
    std::cout << " <div class=\"column\">" << std::endl;
}
void CloseColumn()
{
    std::cout << "</div>" << std::endl;
}
/**
 * @brief This function will add a new image to your web application using the
 * <img src=""> clause. It also prints the score of the image and the name of
 * the image. If it happens to be the very first image you add to your web
 * application, then,  it should be highlighted.
 *
 * @param img_path  The path to the image [png, jpg]
 * @param score     The score of the given image
 * @param highlight In case to be the very first image, this must be true.
 */
void AddImage(const std::string &img_path, float score, bool highlight = false)
{
    std::cout << "<img src=\"" << img_path << "\"/>" << std::endl;
    std::cout << "<p>score = " << score << "</p>" << std::endl;
    if (highlight)
    {
        std::cout << "This is highlighted" << std::endl;
    }
}
