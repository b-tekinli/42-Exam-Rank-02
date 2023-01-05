int max(int* tab, unsigned int len) {
  if (len == 0)
    return 0;

  int max = tab[0];
    
  for (unsigned int i = 1; i < len; i++)
    if (tab[i] > max)
      max = tab[i];

  return (max);
}
