#include "APerceptionPointArea.hpp"
#include "APerceptionPointBox.hpp"
APerceptionPointBox* APerceptionPointBox::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerceptionPointBox");
    return (APerceptionPointBox*)res;
}
