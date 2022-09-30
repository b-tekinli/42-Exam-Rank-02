unsigned char	reverse_bits(unsigned char octet) {
    return (((octet >> 0) & 1) << 7) | \
            (((octet >> 0) & 1) << 6) | \
            (((octet >> 0) & 1) << 5) | \
            (((octet >> 0) & 1) << 4) | \
            (((octet >> 0) & 1) << 3) | \
            (((octet >> 0) & 1) << 2) | \
            (((octet >> 0) & 1) << 1) | \
            (((octet >> 0) & 1) << 0);
}