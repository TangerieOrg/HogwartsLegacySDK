#include "UNativeWidgetHost.hpp"
#include "UWidget.hpp"
UNativeWidgetHost* UNativeWidgetHost::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.NativeWidgetHost");
    return (UNativeWidgetHost*)res;
}
