#include "UFieldGuideButtonBase.hpp"
#include "UFieldGuideButton_Collections.hpp"
UFieldGuideButton_Collections* UFieldGuideButton_Collections::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FieldGuideButton_Collections");
    return (UFieldGuideButton_Collections*)res;
}
