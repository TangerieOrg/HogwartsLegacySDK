#include "UEditableGameplayTagQueryExpression.hpp"
#include "UObject.hpp"
UEditableGameplayTagQueryExpression* UEditableGameplayTagQueryExpression::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayTags.EditableGameplayTagQueryExpression");
    return (UEditableGameplayTagQueryExpression*)res;
}
