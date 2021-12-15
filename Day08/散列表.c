

Index Hash(count char *Key, int TableSize)
{
    unsigned int h = 0;
    while (*Key != '\0')
        h = (h << 5) + *Key++;
    return h % TableSize;
}