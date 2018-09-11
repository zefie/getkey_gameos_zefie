#define AES_BLOCK_SIZE 16
#define AES_MAXNR 14

#define DES_CBLOCK_LEN 8
#define DES_KEY_SZ 8

typedef unsigned char DES_cblock[DES_CBLOCK_LEN];
typedef struct DES_key_schedule
{
        uint32_t ks[32];
} DES_key_schedule;



typedef struct aes_key {
    uint32_t key[(AES_MAXNR+1)*4];
    int rounds;
} AES_KEY;


