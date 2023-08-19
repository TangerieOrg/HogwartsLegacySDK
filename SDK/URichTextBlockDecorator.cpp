#include "UObject.hpp"
#include "URichTextBlockDecorator.hpp"
URichTextBlockDecorator* URichTextBlockDecorator::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.RichTextBlockDecorator");
    return (URichTextBlockDecorator*)res;
}
