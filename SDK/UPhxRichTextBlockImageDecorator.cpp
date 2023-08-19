#include "UPhxRichTextBlockImageDecorator.hpp"
#include "URichTextBlockDecorator.hpp"
UPhxRichTextBlockImageDecorator* UPhxRichTextBlockImageDecorator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhxRichTextBlockImageDecorator");
    return (UPhxRichTextBlockImageDecorator*)res;
}
