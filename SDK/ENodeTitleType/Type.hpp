#pragma once
#include <cstdint>
namespace ENodeTitleType {
#pragma pack(push, 1)
enum Type {
    FullTitle = 0,
    ListView = 1,
    EditableTitle = 2,
    MenuTitle = 3,
    MAX_TitleTypes = 4,
    ENodeTitleType_MAX = 5,
};
#pragma pack(pop)
}
