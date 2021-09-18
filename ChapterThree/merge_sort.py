def merge_sort(ls, st, lt):
    if st < lt:
        m = int((st + lt) / 2)
        merge_sort(ls, st, m)
        merge_sort(ls, m + 1, lt)
        merge(ls, st, m, lt)


def merge(ls, st, m, lt):
    a = list()
