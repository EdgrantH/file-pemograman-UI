float zScore(int nilai, float avg, float devi){
    return (nilai - avg) / devi;
}

void cekUsual(float z, int *usual, int *unusual, int *veryunusual){
    if(z >= -2 && z <= 2){
        *usual += 1;
    }
    else if(z < -3 || z > 3){
        *veryunusual += 1;
    }
    else{
        *unusual += 1;
    }
}