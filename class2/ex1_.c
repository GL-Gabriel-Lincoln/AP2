#include <stdio.h>

typedef struct {
    float x;
    float y;
    float z;
} Point3D;

typedef struct {
    Point3D vertices[3];
} Triangle3D;

// Função para imprimir um ponto 3D
void printPoint3D(Point3D point) {
    printf("(%.2f, %.2f, %.2f)\n", point.x, point.y, point.z);
}

// Função para imprimir um triângulo 3D
void printTriangle3D(Triangle3D triangle) {
    printf("Triangle:\n");
    for (int i = 0; i < 3; i++) {
        printf("Vertex %d: ", i + 1);
        printPoint3D(triangle.vertices[i]);
    }
}

int main() {
    // Definição dos pontos 3D
    Point3D p1 = {1.0, 2.0, 3.0};
    Point3D p2 = {4.0, 5.0, 6.0};
    Point3D p3 = {7.0, 8.0, 9.0};

    // Criação do triângulo 3D com os pontos definidos
    Triangle3D triangle = {p1, p2, p3};

    // Impressão do triângulo 3D
    printTriangle3D(triangle);

    return 0;
}