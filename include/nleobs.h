
#ifndef NLEOBS_H
#define NLEOBS_H

typedef struct nle_observation {
    int action;
    int done;
    short *glyphs;           /* Size ROWNO * (COLNO - 1) */
    unsigned char *chars;    /* Size ROWNO * (COLNO - 1) */
    unsigned char *colors;   /* Size ROWNO * (COLNO - 1) */
    unsigned char *specials; /* Size ROWNO * (COLNO - 1) */
    long *blstats;           /* Size 23 */
} nle_obs;

#endif /* NLEOBS_H */
