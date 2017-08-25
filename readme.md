||UNDO FOR TEXT EDITOR||
    The project implements undo/redo functionality for text editors.

    There are two classes:
        1. main_content (for testing)
        2. undo_redo
    main_content holds the text and contains undo_redo. Undo/redo can be invoked by calls to
    main_content object. If activated, undo_stack will basically act as a buffer before adding
    the text to the main_content object. 
