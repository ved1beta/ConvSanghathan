#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    // Initialize MPI environment
    MPI_Init(&argc, &argv);

    // Get process rank
    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    // Get total number of processes
    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    printf("Hello from process %d of %d\n", rank, world_size);

    // Finalize MPI environment
    MPI_Finalize();
    return 0;
}