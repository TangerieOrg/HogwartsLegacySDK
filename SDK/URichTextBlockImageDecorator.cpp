#include "UDataTable.hpp"
#include "URichTextBlockDecorator.hpp"
#include "URichTextBlockImageDecorator.hpp"
URichTextBlockImageDecorator* URichTextBlockImageDecorator::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.RichTextBlockImageDecorator");
    return (URichTextBlockImageDecorator*)res;
}
