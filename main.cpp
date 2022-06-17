#include "api/html_writer.hpp"

int main()
{
    
    html_writer::OpenDocument();
    html_writer::AddTitle("Image Browser");
    html_writer::AddCSSStyle("web_app/style.css");
    html_writer::OpenBody();
    html_writer::OpenRow();
    html_writer::OpenColumn();
    html_writer::AddImage("data/000000.png", 0.98, false);
    html_writer::OpenColumn();
    html_writer::AddImage("data/000100.png", 0.96, false);
    html_writer::OpenColumn();
    html_writer::AddImage("data/000200.png", 0.88, false);
    html_writer::CloseColumn();
    html_writer::CloseRow();
    html_writer::CloseBody();
    html_writer::CloseDocument();
    return 0;
}