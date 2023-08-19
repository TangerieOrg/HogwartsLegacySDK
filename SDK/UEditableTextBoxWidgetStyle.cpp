#include "FEditableTextBoxStyle.hpp"
#include "UEditableTextBoxWidgetStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
UEditableTextBoxWidgetStyle* UEditableTextBoxWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/Slate.EditableTextBoxWidgetStyle");
    return (UEditableTextBoxWidgetStyle*)res;
}
