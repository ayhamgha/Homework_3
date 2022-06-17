#include "api/html_writer.hpp"
using namespace html_writer;
int main()
{

    OpenDocument();
    AddTitle("Image Browser");
    AddCSSStyle("web_app/style.css");
    OpenBody();
    OpenRow();
    OpenColumn();
    AddImage("data/000000.png", 0.98, false);
    OpenColumn();
    AddImage("data/000100.png", 0.96, false);
    OpenColumn();
    AddImage("data/000200.png", 0.88, false);
    CloseColumn();
    CloseRow();
    CloseBody();
    CloseDocument();
    return 0;
}