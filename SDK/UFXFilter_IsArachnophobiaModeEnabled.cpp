#include "UFXFilter.hpp"
#include "UFXFilter_IsArachnophobiaModeEnabled.hpp"
UFXFilter_IsArachnophobiaModeEnabled* UFXFilter_IsArachnophobiaModeEnabled::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsArachnophobiaModeEnabled");
    return (UFXFilter_IsArachnophobiaModeEnabled*)res;
}
