#include "UFieldGuideButtonBase.hpp"
#include "UFieldGuideButton_OwlMail.hpp"
UFieldGuideButton_OwlMail* UFieldGuideButton_OwlMail::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FieldGuideButton_OwlMail");
    return (UFieldGuideButton_OwlMail*)res;
}
