#include "UMinimapRetentionBox.hpp"
#include "URetainerBox.hpp"
UMinimapRetentionBox* UMinimapRetentionBox::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MinimapRetentionBox");
    return (UMinimapRetentionBox*)res;
}
