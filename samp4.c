typedef struct {
    int x;
    int y;
} Cor;

void print(const Cor *a){
    printf("(x,y) = <%d,%d>\n", a->x, a->y);
}

int main()
{
    Cor p = {2, 3};
    printf("(x,y) = <%d,%d>\n", p.x, p.y);
    print(&p);
    return 0;
}
