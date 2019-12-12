/* Copyright 2019 VMware, Inc.
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * The copyright notice, above, should be ignored by the Doctor.
 */

/** @file source.h
 * These are pretend file-level comments.
 */

/** doc://./docco.md#Sample
 */
void straight_after();

/** Funny end.
 with text first.*/
    /** doc://../data\docco.md#Sample-List
     */

	/** doc://#Sample
     * With added note.
     * @param supposed_parameter Supposed parameter.
     */
    void one_line_after(int supposed_parameter);

    /** This is inset like if it was for a method or something.
     *
     * The Markdown could be tidier, or extracted to a docco source file, because it passes the 80 column limit.
     *
     * ## Header for a special paragraph [doc://./docco.md#product-name]
     * This is the special para.
     */

    /**No space after the docco comment start.
     *
     * This has[doc://./docco.md#infix]inline doc uri.
     * This piece is from the explicit cache "[doc://#cache-piece]" it has no
     * path.
     * 
     * Next one is only an inline doc uri.
     */
    
    /**[doc://./docco.md#infixTwo]*/

    /** One-liner; next one is empty. */

    /**
     */
    
    /** Put the injected MD into a list.
     *
     * -   doc://./docco.md#Sample
     * -   This isn't sample.
     *
     *     But this is the end of it.
     */

    
    /** Starred list with leaders.
     * 
     * Here's the list:
     * 
     * *   Item one.
     * *   Item *number* two.
     *     *   Item two *point* one. It has a bunch of extra text to
     *         make it exceed the line and get wrapped.
     *     *   Item two *point* two.
     *
     * Here's another, *with* hyphens:
     *
     * -   Hyphenitem one.
     * -   Hyphenitem two, wait for it.
     *
     *     Second para.
     *
     * There aren't any more lists but this is the first paragraph of two and it
     * extends onto a second line. And a second sentence.
     *
     * Long line. The next line starts with a span to test the case that a newline is at the end of a text string.
     * *emphatic line start*.
     *
     * This is the second paragraph and really is the last.
     */

    /** Leaderless.
     
     No leaders in the comment. Next line is just spaces.
     
     *   Starred list, item one. Next line is empty.

     *   Item two.
     
     That's not all; numbered list coming.
     
     1.  Item number one.
         - With nest.
     1.  Item number two.
     1.  Item number three.
     
     -   Nested numbers.
         2. Point one.
         2. Point two.
         
         End of nest.
     -   Postnest.
     */

    /** Leaderless backdent.
     
    No leaders in the comment. Next line is just spaces.
     
    *   Starred list, item one. Next line is empty.

    *   Item two.
     
    That's all.
    */

    /** Leaderful backdent.
    *
    * No leaders in the comment.
    * 
    * *   Starred list, item one.
    *
    * *   Item two.
    *
    * That's all.
    */

    /**
     * Nothing on first line.
     */
    
    /* Next thing, with three asterisks, is a stupid empty docco comment. */
    /***/
    
    /* Next thing, with only two asterisks, isn't a docco comment. */
    /**/
    
    /** emp[doc://./docco.md#empty]ty li[doc://./docco.md#emptyline]ne */

    /** One-liner with code. */void with_code();
    
    /** * star in start
     */

    void some_lines_after();
    /* This is a code comment and should be ignored by the Doctor.
     *
     * Yeah?
     */
    void last_method();

    /** Variable indent, naughty.
     * OK indent
    *  bad indent
    */

    /** Variable indent, naughty.
    *   OK indent
     *  bad indent
    */
    
    /** Blank line in leaderful block, tut tut.
     *
     
     * summat.
     */

/** Tricky
last line*/