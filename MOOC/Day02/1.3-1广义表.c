typedef struct GNode *GList;
struct GNode
{
    int Tag;
    union
    {
        ElementType Data;
        GList SubList;
    }URegion;
    GList Next;
}