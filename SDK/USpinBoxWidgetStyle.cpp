#include "FSpinBoxStyle.hpp"
#include "USlateWidgetStyleContainerBase.hpp"
#include "USpinBoxWidgetStyle.hpp"
USpinBoxWidgetStyle* USpinBoxWidgetStyle::StaticClass() {
    static auto res = find_uobject("Class /Script/Slate.SpinBoxWidgetStyle");
    return (USpinBoxWidgetStyle*)res;
}
