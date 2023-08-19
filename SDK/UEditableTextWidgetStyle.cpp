#include "FEditableTextStyle.hpp"
#include "UEditableTextWidgetStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
UEditableTextWidgetStyle* UEditableTextWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/Slate.EditableTextWidgetStyle");
    return (UEditableTextWidgetStyle*)res;
}
