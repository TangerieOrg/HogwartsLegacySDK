#include "UFieldGuideButtonBase.hpp"
#include "UFieldGuideButton_Challenges.hpp"
UFieldGuideButton_Challenges* UFieldGuideButton_Challenges::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FieldGuideButton_Challenges");
    return (UFieldGuideButton_Challenges*)res;
}
