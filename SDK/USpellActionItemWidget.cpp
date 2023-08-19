#include "UActionItemWidget.hpp"
#include "USpellActionItemWidget.hpp"
USpellActionItemWidget* USpellActionItemWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellActionItemWidget");
    return (USpellActionItemWidget*)res;
}
