#include "UControllerButtonGraphicsDecorator.hpp"
#include "UUI_BP_ControllerButtonRichTextDecorator_C.hpp"
UUI_BP_ControllerButtonRichTextDecorator_C* UUI_BP_ControllerButtonRichTextDecorator_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/LocTestScreen/UI_BP_ControllerButtonRichTextDecorator.UI_BP_ControllerButtonRichTextDecorator_C");
    return (UUI_BP_ControllerButtonRichTextDecorator_C*)res;
}
