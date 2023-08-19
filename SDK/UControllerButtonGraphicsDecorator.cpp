#include "UControllerButtonGraphicsDecorator.hpp"
#include "URichTextBlockDecorator.hpp"
UControllerButtonGraphicsDecorator* UControllerButtonGraphicsDecorator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ControllerButtonGraphicsDecorator");
    return (UControllerButtonGraphicsDecorator*)res;
}
